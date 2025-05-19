#include <stdio.h>
int parity_of_bits(int num){
    int count = 0;
    while(num){
        if(num % 2) ++count;
        num >>= 1;
    }
    return (count % 2);
}

int main(){
    int num = 0;
    printf("Enter your number: ");
    scanf("%d", &num);
    if(parity_of_bits(num)) printf("Number of '1' bits is Odd\n");
    else printf("Number of '1' bits is Even\n");

    
    return 0;
}
