#include <stdio.h>

struct Car 
{
  char brand[50];
  char model[50];
  int year;
};

int main() 
{
    struct Car car1;
    printf("enter the car brand,model,year:");
    scanf("%s %s %d",car1.brand,car1.model,&car1.year);
    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    return 0;
}
