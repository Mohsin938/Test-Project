CD = ..
CC = gcc
OUT = $(CD)/BIN/Writer 
OUT2 = $(CD)/BIN/Reader 
ODIR = $(CD)/OBJ
SDIR = $(CD)/SRC
INC = -Iinc
CFLAGS = -Wall -pedantic  

_OBJS = Writer.o Reader.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

$(ODIR)/%.o: $(SDIR)/%.c 
	$(CC) -c $(INC) -o $@ $< $(CFLAGS) 

$(OUT): $(OBJS) 
	$(CC) -o $(OUT) $(ODIR)/Writer.o
	$(CC) -o $(OUT2) $(ODIR)/Reader.o

clean:
	rm -f $(ODIR)/*.o $(OUT) $(OUT2)

.PHONY: clean
