#include<stdio.h>

int main(int argc, char** argv) {
    int i;

    printf("You gave %d items.\n", argc);
    
    for(i=0; i<argc; i++) {
        printf("[%d] %s\n", i, argv[i]);
    }

    return 0;
}
