FSC = src/functionsystem.c
FSO = build/functionsystem.o
FSH = src/functionsystem.h
MAC = src/main.c
MAO = build/main.o
PROG = trsys

all: checkdir $(PROG)

checkdir:
	@if [ -f build ] ; then
		echo FAIL
		exit 1
	fi
	@if [ -f bin ] ; then
		echo FAIL
		exit 1
	fi

$(FSO): $(FSC) $(FCH)
	gcc -Wall -c -o $@ $(FSC)

$(MAO): $(MAC)
	gcc -Wall -c -o $@ $<

$(PROG): $(MAO) $(FSO)
	gcc -Wall -o $@ $<

.PHONY = clean all checkdir

clean:
	rm -rf bin build