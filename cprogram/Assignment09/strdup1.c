#include <stdio.h>
#include <string.h>  
#include <stdlib.h>  

int main() {
    char original[] = "Hello, World!";
    
    
    char *copy = strdup(original);

    if (copy == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Original String: %s\n", original);
    printf("Copied String:   %s\n", copy);

    
    free(copy);

    return 0;
}
