#include<stdio.h>
#include<stdlib.h>
#define N_tries 5
#include<time.h> 
 
 int myrand() {
     int H;
    
    srand ( time(NULL) );
    H = rand()%100+1;

    return H; }

 
 
 int main()
{  int k,L,i;
	printf("Hello\n\n");
	sleep(1);
	
	printf("This is L.\n\n");
	sleep(1);
	printf("Let's play a game\n\n");
	sleep(1);
	printf("Try to guess a random number from 1 to 100 \n\n");
	sleep(1);
	printf("But beware \n\n");
	sleep(1);
	
   printf("You only have 5 tries\n\n ");
   
   
   	
   		k= myrand();
   		for(i=1;;i++)
   		
		{  
		scanf("%d",&L);
			printf("\n",L);
		if (k > L ){
			printf("%d is too small\n\n",L);
		};
		
		if (k<L)
		{printf("%d is too big\n\n",L);
		};
		
		if (k==L)
		{ 
		printf("Congratulations, You guessed the right number\n\n");
		break;
		};
		if (i==5)
		{
			printf("Try again\n");
			printf(" what is it?\n ");
			
			
	 	k=myrand();
	 	i=0;
		}
		
			};
 			
	   

}



