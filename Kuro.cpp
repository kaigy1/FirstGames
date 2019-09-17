#include<stdio.h>
#include<stdlib.h>
#define N_tries 5
#include<time.h> 


int nrolls=0;


int myrand() 
{
     int H;
    
    
    
    H = (rand()%6+1);

    return H; 
	}



int roll()
{
	int value;
	
	srand (time(NULL));
	
	value=myrand();
	
	if(value==4)
	{
		value=0;
	}
	
	if(value==6)
	{
		nrolls++;
	}
	printf("value= %d\n\n\n",value);
	return value;
}

int rollDices(int nDices)
{
	int sum=0;
	int number;
	
	while(nDices>0)
	{
		number=roll();
		
		nDices--;
	}

	return sum;
}




int main ()
{
	
	int i;
	int dices=0;
	
	int sum;
	
	printf("How many dices he will roll?\n\n");
	
	
	printf("How many dices he will roll?\n\n");
	scanf("%d",&dices);
	if(dices==0)
	{
		printf("ERROR NO DICES");
		return 0;	
	}
			
	int nrolls=dices;
	
	//////////////////
	
//	
//	for(i=0;i<100;i++)
//	{
//		printf("%d   ",i);
//			
//	}
//	printf("\n");
	
//	
//	for(i=0;i<50000;i++)
//	{
//		
//		
//	}
	
	
	
	int num=rollDices(dices);
	
	printf("%d",num);
	
return 0;
	
	
	
	
}

