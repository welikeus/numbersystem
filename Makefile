FSC = src/fsys.c
FSO = build/src/fsys.o
MAC = src/main.c
MAO = build/src/main.o
PROG = bin/translate

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
	gcc -Wall -lm -I src -c $< -o $@

$(MAO): $(MAC)
	gcc -Wall -lm -I src -c $< -o $@

$(PROG): $(MAO) $(FSO)
	gcc -lm -o $@ $(MAO) $(FSO)

$(MTO): $(MTC)
	gcc -Wall -lm -I test -c $< -o $@

$(TSO): $(TSC) $(FSO)
	gcc -Wall -lm -I src -I test -c $< -o $@

$(VTSO): $(VTSC) $(FSO)
	gcc -Wall -lm -I src -I test -c $< -o $@

$(TEST): $(MTO) $(TSO) $(VTSO) $(FSO)
	gcc -lm -g -O0 -o $@ $(MTO) $(TSO) $(VTSO) $(FSO)

.PHONY: checkdir clean all

clean:
	rm -rf bin build