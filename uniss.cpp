#include<stdio.h>
#include<conio.h>
#include<string.h>
 union pavan
 {
 	int p;
 	float a;
 };
 int main()
 {
 	union pavan kumar;
 	char input_type;

       printf("enter the type of input value(i for p,f for a):");
       scanf("%c",&input_type);
        if (input_type=='i')
       {
       	printf("enter integer value:");
       	scanf("%d",&kumar.p);
       	printf("the value enterrd is:%d",kumar.p);
	   }
	   else if(input_type=='a')
	   {
	   printf("enter float value:");
	   scanf("%f",kumar.a);
	   printf("the value enterrd is:%f",kumar.a);
}
   else
	   {
	printf("invalid");   	
	   }
 	return 0;
 }
