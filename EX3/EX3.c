#include <stdio.h>
int main()

{
	int fingerprint_match=0;
	int retinal_match=0;
	int access_card_valid=0;

	printf("Enter fingerprint match data(1 or 0)\n");
	scanf("%d", &fingerprint_match);
	printf("Enter retinal match data(1 or 0)\n");
    scanf("%d", &retinal_match);
    printf("Enter access card validation data(1 or 0)\n");
    scanf("%d", &access_card_valid);

    if(fingerprint_match && retinal_match || fingerprint_match && access_card_valid || retinal_match && access_card_valid) //checks if any 2 conditions satisfied 
	  
	   {
	     printf("Access Granted\n");
           } 

        else 
	  
	   {
	     printf("Access Denied\n");
           }	     
 
	return 0;
}
