#include <stdio.h>
/**
 * @argc: counts the number of args provided
 * @argv: takes in the args.
 * @i: is an integer for navigating
 */

int main(int argc, char *argv[]) {
    // int i = 0;
    // while (argv[i] != NULL) {
    //     printf("%s ", argv[i]);
    //     i++;
    // }
    printf("%s\n", argv[0]);    // print the executable of this file
    printf("%d\n", argc);  
    
    return 0;
}