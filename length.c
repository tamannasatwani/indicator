#include <stdio.h>

int stringLength(char *ptr) {
    int length = 0;

    
    while (*ptr != '\0') {
        length++;
        ptr++; 
    }
    
    return length;
}

int main() {
    char str[100];

    printf("Enter any string: ");
    gets(str); 

    printf("The length of the string is: %d\n", stringLength(str));

    return 0;
}

