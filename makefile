IDIR = include
SDIR = src
ODIR = obj

CC = gcc
CFLAGS = -I$(IDIR) -Wall -O2

LIBS = -lm

_DEPS = 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS) | $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

test: main
	./main

$(ODIR):
	mkdir -p $(ODIR)

.PHONY: clean
clean:
	rm -f $(ODIR)/*.o main
