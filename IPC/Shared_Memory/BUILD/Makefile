CD = ..
CC = gcc
OUT = $(CD)/BIN/Sender
OUT2 = $(CD)/BIN/Receiver 
ODIR = $(CD)/OBJ
SDIR = $(CD)/SRC
INC = -Iinc
CFLAGS = -Wall -pedantic 

_OBJS = Sender.o Receiver.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

$(ODIR)/%.o: $(SDIR)/%.c 
	$(CC) -c $(INC) -o $@ $< $(CFLAGS) 

$(OUT): $(OBJS) 
	$(CC) -o $(OUT) $(ODIR)/Sender.o
	$(CC) -o $(OUT2) $(ODIR)/Receiver.o

clean:
	rm -f $(ODIR)/*.o $(OUT) $(OUT2)

.PHONY: clean
