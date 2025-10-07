#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter how many even numbers you want: ");
    scanf("%d", &N);
    
    printf("The first %d even numbers are:\n", N);
    for(i = 1; i <= N; i++) {
        printf("%d\n", 2 * i);
    }
    
    return 0;
}
