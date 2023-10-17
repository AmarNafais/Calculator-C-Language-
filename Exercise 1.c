#include <stdio.h>

int main(void){
	int num[2];
	int sum;
	char op;

	printf("Enter the first number : ");
	scanf("%d",&num[0]);
	printf("Enter the second number : ");
	scanf("%d",&num[1]);
	printf("Enter the operator : ");
	scanf("%s",&op);	
	
	switch(op){
		case '+':
		sum = num[0]+num[1];
		printf("Addition : %d\n",sum);
		break;
		
		case '-':
		sum = num[0]-num[1];
		printf("Substraction : %d\n",sum);
		break;
		
		case '*':
		sum = num[0]*num[1];
		printf("Multiplication : %d\n",sum);
		break;
		
		case '/':
		sum = num[0]/num[1];
		printf("Division : %d\n",sum);
		break;
		
		default:
		printf("Invalid Operator !");
		break;
	}
	return 0;
}
