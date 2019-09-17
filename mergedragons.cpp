#include<stdio.h>
#define MAX 20000

int *tackle(int eggs)
{
	int i=0;
	int dragons[10+1];//array
	
	for(i=0;i<11;i++)// clear array
	{
		dragons[i]=0;
	}
	
	
	
	for(i=0;i<11;i++)// clear array
	{
		printf("%d  test\n",dragons[i]);
	}
	printf("Array checked\n");
	
	
	
	dragons[0]=eggs;
	
	
	i=0;
		
		while(i<10)
		{
			while(dragons[i]>=5)
			{
				
					dragons[i]-=5;
					dragons[i+1]+=2;
				
			
			
			}
			i++;	
		}
		return dragons;
	
}

void printArray(int *array, int eggs)
{
	int i=0;
	int n=11;
	
	
	printf("%d will produce.\n",eggs);
	
	for(i=0;i<n;i++)
	{
		printf("%d none\n",array[i]);	
	}
}


void tackleit(int eggs)// iterative function
{
	if(eggs<=0)
	{
		return;
	}
	
	
	
}


int main(void)
{
	int eggs=MAX;
	int *ptr=tackle(eggs);
	int i=0;
	printf("%d test <<<<<<< array\n",*ptr);
	
	for(i=0;i<44;i+=4)
	{
	
	
	}
	
	
	
	printArray(ptr,eggs);
	
	return 0;
}
