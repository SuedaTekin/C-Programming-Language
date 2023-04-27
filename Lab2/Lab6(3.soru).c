#include <stdio.h>
#include <stdlib.h>


int main() {
    char str[100], *ptr;
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    ptr = str + len - 1;

    printf("The reverse of the string is: ");
    for (i = 0; i < len; i++) {
        printf("%c", *ptr);
        ptr--;
    }

    return 0;
}



