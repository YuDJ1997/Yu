#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//This is a small program to call the calculator, using the simplest switch statement. 
//This is just a comparison for the rest of the lecture.

void menu()
{
	printf("********a simple calculator***********\n");
	printf("**1.add**2.sub**3.mul**4.div**0.exit**\n");
	printf("**************************************\n");
}
int ADD(int x,int y)
{
	return x + y;
}
int SUB(int x, int y)
{
	return x - y;
}
int MUL(int x, int y)
{
	return x * y;
}
int DIV(int x, int y) 
{
	return x / y;
}
int main()
{
	int input = 0;
	//Create a simple calculator
	do {

		menu();
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("Pls choose:");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			printf("Pls Please enter two operands:");
			scanf("%d %d", &x, &y);
			ret = ADD(x, y);
			printf("ret=%d\n", ret);
			break;
		case 2:
			printf("Pls Please enter two operands_");
			scanf("%d %d", &x, &y);
			ret = SUB(x, y);
			printf("ret=%d\n", ret);
			break;
		case 3:
			printf("Pls Please enter two operands:");
			scanf("%d %d", &x, &y);
			ret = MUL(x, y);
			printf("ret=%d\n", ret);
			break;
		case 4:
			printf("Pls Please enter two operands:");
			scanf("%d %d", &x, &y);
			ret = DIV(x, y);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("choose err,Pls choose again\n");
			break;
		}
	} while (input);

	return 0;

}