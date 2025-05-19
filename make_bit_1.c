#include <stdio.h>

int  make_bit(int num, int n){
    int a = 1;
     a <<= n;
     num |= a;
     return num;
}

int main(){
    int num = 0, n = 0;
    printf("Enter your number and index of bit you want to make '1': ");
    scanf("%d %d", &num, &n);
    printf("Result is: %d\n", make_bit(num, n));
    
    return 0;
}

