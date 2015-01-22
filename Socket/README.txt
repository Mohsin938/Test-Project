BUILD:

To Compile and run the name pipe  program
execute	: 
make 

To clean all executables  and obejct file
execute	:
make clean

DESCRIPTION:

Two binary's will be generated with name Server and Client in BIN/
This program creates an unamed socket with socket() system call and listen to client on an IP,on connection with the client it displsys current date and time

OUTPUT:

Execute both binaries in  /BIN as follow:

[root@localhost BIN]# ./Server &
[2] 2743
[root@localhost BIN]# ./Client 127.0.0.1
Thu Jan 22 19:39:29 2015


