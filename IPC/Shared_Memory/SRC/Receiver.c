#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>

#define SHMSZ     27

int main()
{
    int shmid;
    key_t key;
    char *shm, *s;

    if ((key = ftok("../SRC/Sender.c", 'B')) == -1) {
        perror("ftok");
        exit(1);
    }
    
    if ((shmid = shmget(key, SHMSZ, 0666)) < 0) {				/*Locate the segment*/
        perror("shmget");
        exit(1);
    }
    
    if ((shm = shmat(shmid, NULL, 0)) == (char *) -1) {	  			/*attach the segment to our data space*/
        perror("shmat");
        exit(1);
    }

    /*
     * Finally, change the first character of the 
     * segment to '*', indicating we have read 
     * the segment.
     */

    *shm = '*';
    for (s = shm; *s!='\0'; s++)						/*read what the server put in the memory*/
        putchar(*s);
    	putchar('\n');

	exit(0);
}
