#include <stdio.h>
#include <stdlib.h>

int main() {
 

    FILE *f = fopen("dataa.txt", "r");

    printf("%d",fclose(f) == EOF);
    return 0;
}
