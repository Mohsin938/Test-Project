#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    int fd;
    char * myfifo = "/tmp/myfifo";

    mkfifo(myfifo, 0666); 		/* create the FIFO (named pipe) */

    fd = open(myfifo, O_WRONLY);	/* write "Hi" to the FIFO */
    write(fd, "Hi", sizeof("Hi"));
    close(fd);
    unlink(myfifo);			/* remove the FIFO */

    return 0;
}
