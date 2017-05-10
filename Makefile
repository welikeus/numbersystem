FSC = src/fsys.c
FSO = build/fsys.o
MAC = src/main.c
MAO = build/main.o
PROG = TranslateSystem

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
	@if [ ! -d bin ] ; then echo "creating bin" ; mkdir bin; fi

$(FSO): $(FSC)
	gcc -Wall -I src -c $< -o $@

$(MAO): $(MAC)
	gcc -Wall -I src -c $< -o $@

$(PROG): $(MAO) $(FSO)
	gcc -Wall -I src -o $@ $<

$(MTO): $(MTC)
	gcc -Wall -I test -c $< -o $@

$(TSO): $(TSC)
	gcc -Wall -I test -I src -c $< -o $@

$(VTSO): $(VTSC)
	gcc -Wall -I test -I src -c $< -o $@

$(TEST): $(MTO) $(TSO) $(VTSO)
	gcc -Wall -I src -I test $< -o $@

.PHONY = checkdir clean all checkdir

clean:
	rm -rf bin build