BUILD:

To Compile and run the name pipe  program
execute	: 
make 

To clean all executables  and obejct file
execute	:
make clean

DESCRIPTION:
Two binary's will be generated with name Sender and Receiver in BIN/
This program creates a message queue with msgget() and a unique key with ftok()system call.The Receiver also has the same unique key to connect to the queue.and receives the message with msgrcv() system call. 

OUTPUT:

Execute each binary in the /BIN in a separate session

SENDER terminal

[root@localhost BIN]# ./Sender 
Enter lines of text, ^D to quit:
hi
there
my
name 
is 
mohsin

RECEIVER terminal

[root@localhost BIN]# ./Receiver 
Receiver: ready to receive messages, captain.
Receiver: "hi"
Receiver: "there"
Receiver: "my"
Receiver: "name "
Receiver: "is "
Receiver: "mohsin"

