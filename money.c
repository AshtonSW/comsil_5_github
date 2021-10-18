#include <stdio.h>
#define MONTHS 12 // 상수에 대한 정의를 해준 것이다. 

int main(void)
{
	double monthsalary = 1000.5;
	printf("$%.2f", monthsalary * MONTHS); 
	return 0;
}
