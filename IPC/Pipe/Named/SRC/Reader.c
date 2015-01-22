#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAX_BUF 1024

int main(){

    int fd;
    char * myfifo = "/tmp/myfifo";
    char buf[MAX_BUF];

    fd = open(myfifo, O_RDONLY);		/* open, read, and display the message from the FIFO */
    read(fd, buf, MAX_BUF);
    printf("Received: %s\n", buf);
    close(fd);

    return 0;
}
