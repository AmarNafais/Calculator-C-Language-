#include<stdio.h>
int main(){
	int num1;
	int num2;
	int sum;
	char op;
	
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	printf("Enter the operator : ");
	scanf("%s",&op);
	
	switch(op){
		case '+':
		sum = num1+num2;
		printf("Addition : %d\n",sum);
		break;
		
		case '-':
		sum = num1-num2;
		printf("Substraction : %d\n",sum);
		break;
		
		case '*':
		sum = num1*num2;
		printf("Multiplication : %d\n",sum);
		break;
		
		case '/':
		sum = num1/num2;
		printf("Division : %d\n",sum);
		break;
		
		default:
		printf("Invalid Operator !");
		break;
	}
	return 0;
}