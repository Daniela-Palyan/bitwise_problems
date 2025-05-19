#include <stdio.h>
#include <string.h>

char * switch_cases(char * str){
    char * ptr = str;
    while (*ptr){
        if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')){
            *ptr ^= 32;
        }
        ptr++;
    }
    return str;
}

int main(){
    char str[31] = {};
    printf("Enter some text: ");
    fgets(str, 31, stdin);
    printf("Result is: ");
    puts(switch_cases(str));
    
    return 0;
}

