#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char sentence1,sentence2;
    scanf("%s %s", &sentence1,&sentence2);
    printf("You entered: %s\n", sentence1, "and %s\n", sentence2);
    return 0;
}