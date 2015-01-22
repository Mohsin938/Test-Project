CD = ..
OUT = $(CD)/LIB/libdynamic.so
CC = gcc
ODIR = $(CD)/OBJ
SDIR = $(CD)/SRC
INC = -Iinc

_OBJS = foo.o bar.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

$(ODIR)/%.o: $(SDIR)/%.c 
	$(CC) -c -fPIC $(INC) -o $@ $< $(CFLAGS) 

$(OUT): $(OBJS) 
	$(CC) -shared -fPIC -Wl -o $(OUT) $^ -lc

clean:
	rm -f $(ODIR)/*.o $(OUT)

.PHONY: clean
