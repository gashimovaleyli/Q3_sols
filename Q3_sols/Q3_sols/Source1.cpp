#include <stdio.h> 

//The specific execution flow of this function makes it a recursive function, which is a method of modular programming where, instead of a portion of the function is repeated using a loop, the entire function is rerun with an updated argument during the new function call; forming a call stack of each iteration of the function waiting for the execution of the next iteration until such time comes that the function no longer calls itself and the termination point is invoked where an identity element in regards to the modular operation is used to ensure the other values in the call stack do not get thrown into garbage. For instance, for our summation operation this is 0, all the values we thrown into the call stack alongside the recursive function calls get summed up on top of this into final return value. Try drawing and/or debugging it using a call stack window in VS2015 to understand it better! int sumOfDigits(int num) {  //Termination point  if (num == 0)   //Put 0 to the top of the call stack if it is the termination point   return 0;  //Put the calculation value into the call stack if it is not the termination point and\          recall the function with the new iteration  return num % 10 + sumOfDigits(num / 10); } 

int main(void) {
	int num;

	printf("Enter a num: "); scanf("%d", &num); 
	printf("The sum of the num %d's digits is %d.\n", num, sumOfDigits(num));
}