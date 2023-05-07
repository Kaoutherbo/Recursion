#include<stdio.h>
long int factorial(int n){
	if(n==0) return 1;
	else return n*factorial(n-1); 
}
int count_zeros(long int n){
if(n<10){
	if(n==0) return 1;
}	
else if(n%10==0) return 1+count_zeros(n/10);
	else return 0;
    	
}
int main(){
int num;
long int fact;
printf("Enter a number ");
scanf("%d",&num);
FILE *fp;
fp=fopen("Factorial.txt","w");
fact=factorial(num);	
	printf("Factorial of %d is %ld \n Number of zeros in end of %ld is %d \n ",num,fact,fact,count_zeros(fact));
	//print in file
	fprintf(fp,"Factorial of %d is %ld \n Number of zeros in end of %ld is %d \n ",num,fact,fact,count_zeros(fact));
	fclose(fp);	
	return 0;
}
