BUILD:

To Compile and run the name pipe  program
execute	: 
make 

To clean all executables  and obejct file
execute	:
make clean

DESCRIPTION:

Two binary's will be generated with name Reader and Writer in BIN/

This program creates a named pipe with mkfifo() system call and passes a message "hi", which is read and displayed by anotherprogram reading the same pipe

OUTPUT:

Execute both binaries in  /BIN as follow:

[root@localhost BIN]# ./Writer&
[1] 3291
[root@localhost BIN]# ./Reader 

Received: Hi
[1]+  Done                    ./Writer


