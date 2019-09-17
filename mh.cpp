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
 
{
	char helmet[100];
	char waist[100];
	char gloves[100];
	char boot[100];
	
	printf("put input helmet name");
	
	scanf(&c,helmet);
	
	printf("put input waist name");
	printf("put input glove name");
	printf("put input boot name");

	
}

