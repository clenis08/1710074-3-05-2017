#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define nhilos 10



void *hola (void*args) {
 
printf("Hola: %ld \n", pthread_self() );
pthread_exit(NULL);
}


int main (int argc, char *argv[]) {

int i;
pthread_t thread [nhilos];

for(i=0;i<nhilos;i++){
pthread_create(&thread[i], NULL, hola, (void*)i);
}

printf("creados %d hilos .\n", i);
pthread_exit(NULL);
}

