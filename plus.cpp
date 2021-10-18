#include <stdio.h>

int main(void)
{
	float x = 10;
	float y = 20;
	printf("x = %.1f입니다.\n", x);
	printf("y = %f입니다.\n", y);
	printf("x + y = %f입니다.\n", x + y);
	printf("x - y = %f입니다.\n", x - y);
	printf("x * y = %f입니다.\n", x * y);
	printf("x / y = %f입니다.\n", x / y); // %d로 놓으면 몫만 나타난다. 
	
	return 0;
} 
