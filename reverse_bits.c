#include <stdio.h>

int reverse_bits(int num){
	int res = 0;
	while(num){
		res = res * 2 + (num & 1);
		num /= 2;
	}
	return res;
}

int main(){
	int num = 0;
	printf("Enter your number: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Result is: %d\n", reverse_bits(num));
	fflush(stdout);

	return 0;
}
