#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int i;
    pid_t pid;

    for (i = 0; i < 5; i++) {
        pid = fork(); 

        if (pid == -1) {
            fprintf(stderr, "Fork failed\n");
            exit(1);
        }
        else if (pid == 0) {
            printf("Child process %d executing ls -l\n", i);
            execlp("/bin/ls", "ls", "-l", (char *) NULL);
            exit(0);
        }
        else {
            wait(NULL);
            printf("Child process %d finished executing\n", i);
        }
    }

    return 0;
}
