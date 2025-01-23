#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char letter;
    scanf("%c",&letter);
    printf("ASCII Value: %d\n",letter );
    return 0;
}