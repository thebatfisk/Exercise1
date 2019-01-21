#include <pthread.h>
#include <stdio.h>

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    for (int index = 0; index < 100000000; index++) {
        i++;
    }
    return NULL;
}

void* decrementingThreadFunction(){
    for (int index = 0; index < 100000000; index++) {
        i--;
    }
    return NULL;
}


int main(){
    pthread_t incrementingThread;
    pthread_t decrementingThread;
    
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}