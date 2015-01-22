BUILD:

To Compile and run the unname pipe  program
execute	: 
make 

To clean all executables  and obejct file
execute	:
make clean

DESCRIPTION:

One Binary will be generated with name UPipe in BIN/
This program creates a child process and an unnamed pipe with pipe() system call the child passes a message "HI THERE UNNAMEDPIPE", which is read and displayed by parent program reading the same pipe

OUTPUT:

Execute UPipe in  /BIN as follow:

root@localhost BUILD]# ./../BIN/UPipe 

parent read HI THERE UNNAMED PIPE
 from the child program


