#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char sentence1[100],sentence2[100];
    scanf("%s %s", &sentence1, &sentence2);
    printf("You entered: %s and %s", sentence1, sentence2);
    return 0;
}