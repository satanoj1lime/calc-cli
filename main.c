#include <stdio.h>



int sum(int a, int b);
int min(int a, int b);
float mul(float a, float b);
float div(float a, float b);

int sum(int a, int b){ return a + b;}
int min(int a, int b){ return a - b;}
float mul(float a, float b){ return a * b;}
float div(float a, float b){ return a / b;}

int calc(){

	char opt;
	int a, b;
	float c, d;
	
	printf("Hello Sir, what is the operation today?\t press (X) to exit the program.\n");

	printf("\nOperation: (e.g. + , * , - , /)");
	scanf(" %c", &opt);

			switch (opt) {
				case '+':
					printf("what is the first value: \n");
					scanf(" %d", &a);
					
					printf("what is the second value: \n");
					scanf(" %d", &b);
					
					printf("the result of your sum is: %d", sum(a, b));
					
					break;
				case '-':
					printf("what is the first value: \n");
					scanf(" %d", &a);
					
					printf("what is the second value: \n");
					scanf(" %d", &b);
					
					printf("the result of your subtraction is: %d", min(a, b));
					
					break;
				case '*':
					printf("what is the first value: \n");
					scanf(" %f", &c);
					
					printf("what is the second value: \n");
					scanf(" %f", &d);
					
					printf("the result of your multiplication is: %2.f", mul(a, b));
					
					break;
				case '/':
					printf("what is the first value: \n");
					scanf(" %f", &c);
					
					printf("what is the second value: \n");
					scanf(" %f", &d);
					
					printf("the result of your division is: %2.f", div(a, b));
					
					break;
				default:
					printf("Invalid operation, please select one of operations available (e.g. + , * , - , /): \n");
					break;
			}
		return 0;
	}

int main(){
	printf("calc compiles and works!\n");
	calc();
	return 0;
}
