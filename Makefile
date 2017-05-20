FSC = src/fsys.c
FSO = build/src/fsys.o
MAC = src/main.c
MAO = build/src/main.o
PROG = bin/TranslateSystem

MTC = test/main.c
MTO = build/test/main.o
TSC = test/testsystem.c
TSO = build/test/testsystem.o
VTSC = test/validation_testsystem.c
VTSO = build/test/validation_testsystem.o
TEST = bin/testsystem

all: checkdir $(PROG) $(TEST)

checkdir:
	@if [ ! -d build ] ; then echo "creating build" ; mkdir build; fi
	@if [ ! -d build/test ] ; then echo "creating build/test" ; mkdir build/test; fi
	@if [ ! -d build/src ] ; then echo "creating build/src" ; mkdir build/src; fi
	@if [ ! -d bin ] ; then echo "creating bin" ; mkdir bin; fi

$(FSO): $(FSC)
	gcc -Wall -I src -c $< -o $@ -lm

$(MAO): $(MAC)
	gcc -Wall -I src -c $< -o $@ -lm

$(PROG): $(MAO) $(FSO)
	gcc -o $@ $(MAO) $(FSO) -lm

$(MTO): $(MTC)
	gcc -Wall -I test -c $< -o $@ -lm

$(TSO): $(TSC)
	gcc -Wall -I src -I test -c $< -o $@ -lm

$(VTSO): $(VTSC)
	gcc -Wall -I src -I test -c $< -o $@ -lm

$(TEST): $(MTO) $(TSO) $(VTSO)
	gcc -o $@ $(MTO) $(TSO) $(VTSO) -lm

.PHONY = checkdir clean all

clean:
	rm -rf bin build
