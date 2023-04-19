#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 * fork() - allows the privillage of running two processes on the same program
 * getpid() - gets the process id of the child process i.e current program running
 * Return: Always 0.
 */

int main(void)
{
    pid_t my_pid;
    pid_t pid;

    printf("Before fork\n");
    pid = fork();
    if(pid == -1)
    {
        perror("Error: ");
        return(1);
    }
    printf("After fork\n");
    
    my_pid = getpid();
    printf("%d\n", my_pid);
    return(0);
}
