#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **agrv) {
    
    if (argc > 1) {
        printf("%s\n", argv[1])   
    }
    
    printf("Hello World!\n");
    return 0;
}
