#include <stdio.h>

int is_power_of_2(int num){
    int count = 0;
    while (count < 2 && num){
        if(num % 2) count++;
        num >>= 1;
    }
    if(count > 1) return 0;
    return 1;
}

int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(is_power_of_2(num)) printf("Your number is power of 2\n");
    else printf("Your number is not power of 2\n");

return 0;
}
