#include <stdio.h>
#include <stdlib.h>

/**
 * @env: prints the variables in a C programme
*/

int main(int argc, char *argv[], char *env[]) {
    while (*env) {
        printf("%s\n", *env);
        env++;
    }
    return 0;
}