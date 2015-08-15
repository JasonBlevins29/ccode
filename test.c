//include statements
#include <stdio.h>

//function declarations
int myPow(int,int);


//main
int main(){
	int number, power;
	printf("Please enter the number: \n" );

	//%s, %d, %c, %f, etc., to print or read strings, integer, character or float respectively.
	scanf("%d", &number);
	
	printf("Please enter the power \n");
	scanf("%d", &power);
	
	int result = myPow(number,power);
		
	printf("Result : %d\n", result);


}

int myPow (int number, int power){

	printf("Number: ");
	printf("%d\n", number);
	
	
	printf("Power: ");
	printf("%d\n", power);

	if (number == 0){
		return 0;
	}

	if (number == 1){
		return 1;
	}
	
	if (power == 0){
		return 1;
	}
	
	if (power == 1){
		return number;
	}
	
	//check to see if power is even
	if (power % 2 == 0 ){
		return myPow(number * number, power/2);
	}
	
	if (power % 2 == 1){
		return number * myPow(number * number, power /2);
		
	}
	return -1;
}

