/* SHARED MEMORY INCLUDE */
#include <sys/shm.h> 
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <atomic>
#include <array>

/* SHARED MEMORY DEFINE */
#define KEY_NUM 1234   /* SHM KEY = SEM KEY */
#define SHARED_SIZE 50

#define VALUE 0           
#define MODE 1            // DUTY : 1 , Current :2 , Current Brake : 3
#define SELECT 47
#define SLAVE_N 48
#define ECAT_INIT 49




union semun{
    int val;
    struct semid_ds *buft;
    unsigned short *array;  
};



extern int *shmem[SHARED_SIZE];
extern int semid[SHARED_SIZE];
extern union semun sem_union[SHARED_SIZE];
extern std::atomic<std::array<int,10>> myArray;
int shmem_init();
int shmem_clear();
int semp_init();
void s_wait(int semid);
void s_quit(int semid);
void Exit_EventHandler(int sig);

