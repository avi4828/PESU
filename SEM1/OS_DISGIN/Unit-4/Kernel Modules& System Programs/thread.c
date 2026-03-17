#include <stdio.h>
#include <pthread.h>
void *thread_function(void *arg) {
    printf("Thread is running\n");
    return NULL;
}
int main() {
    pthread_t tid;

    // Create a thread
    if (pthread_create(&tid, NULL, thread_function, NULL) != 0) {
        fprintf(stderr, "Thread creation failed\n");
        return 1;
    }
// Wait for the thread to finish
    if (pthread_join(tid, NULL) != 0) {
        fprintf(stderr, "Thread join failed\n");
        return 1;
    }

    printf("Main program is running\n");

    return 0;
}
