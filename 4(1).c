# include < stdio.h >
# include < conio.h >
struct  employee
{
char name[50] ;
int empId ;
float salary ;

} ;

int  main( )
{
struct employee emp={ "Zia", 1005, 76909.00f } ;
printf("\n Employee Details are : " ) ;
printf("\n Name: %s" ,emp.name ) ;
printf("\n Id: %d" ,emp.empId ) ;
printf("\n Salary: %f\n",emp.salary ) ;
return 0 ;
}
