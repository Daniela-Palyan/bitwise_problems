#include <stdio.h>

int bit_to_opposite (int num, int n){
    int a = 1;
    a <<= n;
    num ^= a;

    return num;
}

int main(){
    int num = 0, n = 0;
    printf("Enter your number and index of bit you want to change: ");
    scanf("%d %d", &num, &n);
    printf("Result is: %d\n", bit_to_opposite(num, n));

    return 0;
}
