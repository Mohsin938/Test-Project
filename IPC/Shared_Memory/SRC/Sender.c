#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>

#define SHMSZ     27

int main(){
    
    char c;
    int shmid;
    key_t key;
    char *shm, *s;

    if ((key = ftok("../SRC/Sender.c", 'B')) == -1) {
        perror("ftok");
        exit(1);
    }
    
    if ((shmid = shmget(key, SHMSZ, IPC_CREAT | 0666)) < 0) { 			     /* Create Segment */
        perror("shmget");
        exit(1);
    }

    if ((shm = shmat(shmid, NULL, 0)) == (char *) -1) {         		     /*attach the segment to our data space*/
        perror("shmat");
        exit(1);
    }

    s = shm;

    for (c = 'a'; c <= 'z'; c++)						    /*Writing into the memory*/
        *s++ = c;
    *s = '\0';

    /*
     * Finally, we wait until the other process 
     * changes the first character of our memory
     * to '*', indicating that it has read what 
     * we put there.
     */

    while (*shm != '*');
	
	return 1;
}
