APPS=div foo hello loop sample alt echo
DST=../../floppy_dir

CFLAGS=-fno-builtin

all: libuser.a
	./doit $(APPS)

install: $(DST)
	cp $(APPS) $(DST)

LIBOBJS=control.o dlmalloc.o exchange.o exit.o input.o ipc.o kernelInt.o libc.o printf.o schedule.o space.o switch.o sysClock.o unmap.o

libuser.a: $(LIBOBJS)
	ar cr $@ $(LIBOBJS)

clean:
	-rm -f *.[oa] $(APPS)
