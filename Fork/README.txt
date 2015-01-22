BUILD:

To Compile and run the fork program with static library
execute 
make static

To Compile and run the fork program with dynamic library
execute 
make dynamic

To clean all libraries and object file
execute
make clean

DECRIPTION:

One binary will be generated with name RunFork in BIN/

The Program will print the corresponding statements from which the binary is linked
Please set env var as export LD_LIBRARY_PATH=../../Dynamic_Lib/LIB/ from /BIN before executio of binary

OUTPUT:

If RunFork is linked with static library, expect output as

foo() from static library
bar() from static library

If RunFork is linked with dynamic library, expect output as

foo() from dynamic library
bar() from dynamic library


