#include<stdio.h>
#include<stdbool.h>

bool prime_number(int num,int n){
	if(n==1) return 1;
	else if(num%n==0) return 0;
	
	else return prime_number(num,n-1);
}
//Driver code
int main(){
int number;
printf("Enter a number ");
scanf("%d",&number);
FILE *fp;
fp=fopen("prime_number.txt","w");
if(prime_number(number,number/2)){
printf(" %d a Prime number  ",number);
//print in file
fprintf(fp," %d a Prime number  ",number);
}else{
printf(" %d is not a prime ",number);
//print in file
fprintf(fp," %d is not a Prime number  ",number);
}	
fclose(fp);
	
}
