#include<stdio.h>
#include<conio.h>
struct PAVAN
{
	int num1;
	float num2;
	}UN;
	
	int main()
	{
		printf("\n Size OF THE UNION:%d",sizeof(UN));
		UN.num1=10;
        printf("\n num1:%d,num2:%f",UN.num1,UN.num2);
        UN.num2=10.34F;
        printf("\n num1:%d,num2:%f",UN.num1,UN.num2);
        return 0;
    }
		
