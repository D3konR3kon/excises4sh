#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main() - Entry to the program
 * execve() - Execute an executable from this program 
*/

int main()
{
    execve("pip_fork", NULL, NULL);
    printf("Error");
    return(0);
}