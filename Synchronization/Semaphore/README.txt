BUILD:

To Compile and run the unname pipe  program
execute	: 
make 

To clean all executables  and obejct file
execute	:
make clean

DESCRIPTIONL:

One Binary will be generated with name MySemaphore in BIN/

This programs fork() a  child process so that there are two processes running:
 *   Each process communicates via a semaphore.
 *   The respective process can only do its work (not much here)
 *   When it notices that the semaphore track is free when it returns to 0
 *   Each process must modify the semaphore accordingly

OUTPUT:

[root@localhost BIN]# ./MySemaphore 

semget: Setting up seamaphore: semget(0x4d2, %#o)
semget: semget succeeded: semid =98306

semop:Parent Calling semop(98306, &sops, 2) with:
	sops[0].sem_num = 0, sem_op = 0, sem_flg = 010000

	sops[1].sem_num = 0, sem_op = 1, sem_flg = 014000
semop: semop returned 0
Parent Process Taking Control of Track: 1/3 times

semop:Child  Calling semop(98306, &sops, 2) with:
	sops[0].sem_num = 0, sem_op = 0, sem_flg = 010000

	sops[1].sem_num = 0, sem_op = 1, sem_flg = 014000
Parent Process Giving up Control of Track: 1/3 times
	semop: semop returned 0


Child Process Taking Control of Track: 1/3 times

semop:Parent Calling semop(98306, &sops, 2) with:
	sops[0].sem_num = 0, sem_op = 0, sem_flg = 010000

	sops[1].sem_num = 0, sem_op = 1, sem_flg = 014000
Child Process Giving up Control of Track: 1/3 times
semop: semop returned 0
Parent Process Taking Control of Track: 2/3 times

semop:Child  Calling semop(98306, &sops, 2) with:
	sops[0].sem_num = 0, sem_op = 0, sem_flg = 010000

	sops[1].sem_num = 0, sem_op = 1, sem_flg = 014000
Parent Process Giving up Control of Track: 2/3 times
	semop: semop returned 0


Child Process Taking Control of Track: 2/3 times

semop:Parent Calling semop(98306, &sops, 2) with:
	sops[0].sem_num = 0, sem_op = 0, sem_flg = 010000

	sops[1].sem_num = 0, sem_op = 1, sem_flg = 014000
Child Process Giving up Control of Track: 2/3 times
semop: semop returned 0
Parent Process Taking Control of Track: 3/3 times

semop:Child  Calling semop(98306, &sops, 2) with:
	sops[0].sem_num = 0, sem_op = 0, sem_flg = 010000

	sops[1].sem_num = 0, sem_op = 1, sem_flg = 014000
Parent Process Giving up Control of Track: 3/3 times
	semop: semop returned 0


Child Process Taking Control of Track: 3/3 times
Child Process Giving up Control of Track: 3/3 times



