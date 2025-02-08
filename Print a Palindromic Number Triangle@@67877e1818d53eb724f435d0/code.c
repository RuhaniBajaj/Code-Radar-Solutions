#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (j=n; j>=1; j--){
            printf(" ");
        }
        for ( k=1; k<=i; k++) {
            printf("%d", k);
        }
        for (k=i-1; k>=1; k--) {
            printf("%d", k);
        }
    }

    return 0;
}