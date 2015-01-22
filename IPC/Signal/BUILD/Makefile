CD = ..
CC = gcc
OUT = $(CD)/BIN/MySignal
ODIR = $(CD)/OBJ
SDIR = $(CD)/SRC
INC = -Iinc
CFLAGS = -Wall -pedantic  

_OBJS = UPipe.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

$(ODIR)/%.o: $(SDIR)/%.c 
	$(CC) -c $(INC) -o $@ $< $(CFLAGS) 

$(OUT): $(OBJS) 
	$(CC) -o $(OUT) $^

clean:
	rm -f $(ODIR)/*.o $(OUT)

.PHONY: clean
