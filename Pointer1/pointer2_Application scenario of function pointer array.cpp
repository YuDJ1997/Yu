#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>





//A Brief introduction
//Application scenario of function pointer array
//what is"Array of function Pointers"
//Simply put, it's an array of different function Pointers that call different functions with subscripts.
//Of course, the first thing you need to know is what is a function pointer?
//The simple explanation is that a pointer points to a function
//For example,
//int ADD(int x,int y)
//{
// return x+y;
//}
//int (*p)ADD(int,int)=&ADD     __p is a function pointer
//Let's use a small example to illustrate the advantages and applications of function pointer arrays.
// use the example of making a simple calculator.





void menu()
{
	printf("********a simple calculator***********\n");
	printf("**1.add**2.sub**3.mul**4.div**0.exit**\n");
	printf("**************************************\n");
}
int ADD(int x, int y)
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
//We're going to use the same code as before

int main()
{
	do{
		menu();
		int(*pArr[5])(int, int) = (NULL, ADD, SUB, MUL, DIV);//Here we're accessing different functions in the array through different subscripts of pArr.
		int x = 0;
		int y = 0;
		int ret = 0;
		int input = 0;

		printf("Pls choose:\n");
		if (input >= 2 && input <= 4)
		{
			scanf("%d", &input);
			printf("Pls Please enter two operands:");
			scanf("%d %d", &x, &y);
			ret = (*pArr[input])(x, y); //The * here can be omitted without any effect
		}printf("ret=%d\n", ret);
		else if (input == 0)
		{
			printf("exit\n");
		}
		else
		{
			printf("choose err")
		}
		//This is much more convenient than the previous switch statement and will help with subsequent additions and modifications.
	}while (input);
	return 0;
}