CD = ..
OBJECTS = $(CD)/BIN/fork_example.o
CFLAGS  = -Wall -pedantic 
TARGET = $(CD)/BIN/RunFork
SRC = $(CD)/SRC/fork_example.c
DYNAMICLIBPATH = $(CD)/$(CD)/Dynamic_Lib
STATICLIBPATH = $(CD)/$(CD)/Static_Lib
ENVVAR=	$(DYNAMICLIBPATH)/LIB

dynamic:
	cd $(DYNAMICLIBPATH)/BUILD; make
	gcc $(CFLAGS) $(SRC) -o $(TARGET) -I $(DYNAMICLIBPATH)/INC -L $(DYNAMICLIBPATH)/LIB -ldynamic 

static:
	cd $(STATICLIBPATH)/BUILD; make
	gcc $(CFLAGS) $(SRC) -o $(TARGET) -I $(STATICLIBPATH)/INC -L $(STATICLIBPATH)/LIB -lstatic

clean:
	rm -rf $(TARGET) $(OBJECTS)
	cd $(DYNAMICLIBPATH)/BUILD; make clean
	cd $(STATICLIBPATH)/BUILD; make clean

.PHONY:	dynamic static clean

