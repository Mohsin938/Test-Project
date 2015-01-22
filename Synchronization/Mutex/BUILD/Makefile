CD = ..
CC = gcc
OUT = $(CD)/BIN/MyMutex
ODIR = $(CD)/OBJ
SDIR = $(CD)/SRC
INC = -Iinc
CFLAGS = -Wall -pedantic  

_OBJS = MyMutex.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

$(ODIR)/%.o: $(SDIR)/%.c 
	$(CC) -c $(INC) -o $@ $< $(CFLAGS) 

$(OUT): $(OBJS) 
	$(CC) -pthread -o $(OUT) $^

clean:
	rm -f $(ODIR)/*.o $(OUT)

.PHONY: clean
