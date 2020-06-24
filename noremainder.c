#include<stdio.h>

//Write a function that receives lower limit, upper limit and divisor, where all are integers, 
//and returns number of integers between lower limit and upper limit that is divisible by the divisor with no remainder. 
//Test the function in a program. 

int no_remainder(){
	
	int lower,upper,divisor;
	printf("Please enter lower limit:");
	scanf("%d",&lower);
	printf("Please enter upper limit:");
	scanf("%d",&upper);
	printf("Please enter divisor:");
	scanf("%d",&divisor);
	
	int n;
	for(n=lower+1;n<upper;n++){
		if(n%divisor==0){
			printf("%d\n",n);
		
		}
	}
	
}
int main(){
	
	
	no_remainder();
	
	return 0;
}
