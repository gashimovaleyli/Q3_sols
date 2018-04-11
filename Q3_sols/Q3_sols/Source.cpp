#include <stdio.h> 

int sumOfDigits(int num) { if (num == 0)   return 0;  return num % 10 + sumOfDigits(num / 10); }

int main(void) {
	int num;

	printf("Enter a num: "); scanf("%d", &num);  printf("The sum of the num %d's digits is %d.\n", num, sumOfDigits(num));
}