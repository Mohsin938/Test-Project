CD = ..
OUT = $(CD)/LIB/libstatic.a
CC = gcc
ODIR = $(CD)/OBJ
SDIR = $(CD)/SRC
INC = -Iinc
CFLAGS= -Wall -pedantic

_OBJS = foo.o bar.o
    	
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))


$(ODIR)/%.o: $(SDIR)/%.c 
	$(CC) -c $(INC) -o $@ $< $(CFLAGS) 

$(OUT): $(OBJS) 
	ar rvs $(OUT) $^

clean:
	rm -f $(ODIR)/*.o $(OUT)

.PHONY: clean
