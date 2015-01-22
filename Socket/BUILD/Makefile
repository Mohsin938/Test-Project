CD = ..
CC = gcc
OUT = $(CD)/BIN/Server
OUT2 = $(CD)/BIN/Client 
ODIR = $(CD)/OBJ
SDIR = $(CD)/SRC
INC = -Iinc
CFLAGS = -Wall -pedantic  

_OBJS = Server.o Client.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

$(ODIR)/%.o: $(SDIR)/%.c 
	$(CC) -c $(INC) -o $@ $< $(CFLAGS) 

$(OUT): $(OBJS) 
	$(CC) -o $(OUT) $(ODIR)/Server.o
	$(CC) -o $(OUT2) $(ODIR)/Client.o

clean:
	rm -f $(ODIR)/*.o $(OUT) $(OUT2)

.PHONY: clean
