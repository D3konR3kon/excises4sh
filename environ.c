#include <stdio.h>
#include <stdlib.h>
/**
 * @myenv: holds the the values of environ
*/
extern char **environ; // environ holds address to global variables in a c program

int main() {
    char **myenv = environ;

    while (*myenv) {
        printf("%s\n", *myenv);
        myenv++;
    }

    return 0;
}
