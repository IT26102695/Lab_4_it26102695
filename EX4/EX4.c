#include <stdio.h>
int main()

{
	
	float section1=0;
	float section2=0;
	float section3=0;
	float avg=0;

	printf("Enter marks for section 1:\n");
	scanf("%f", &section1);
	printf("Enter marks for section 2:\n");
	scanf("%f", &section2);
	printf("Enter marks for section 3:\n");
	scanf("%f", &section3);
	
	avg=(section1+section2+section3)/3;

	if(section1 >=70 && section2 >=70 && section3 >=70 && avg >=75) //checks if all conditions satisfied

	  {
	     printf("Pass\n");
          }
	else{ 
	     printf("Fail\n");
            }
	return 0;
}
