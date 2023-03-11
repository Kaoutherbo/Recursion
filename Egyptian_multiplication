#include<stdio.h>

typedef unsigned int positiveNumber;
typedef long long int BigPositiveNumer;

positiveNumber egyp_mult(positiveNumber a,positiveNumber b);
void print(positiveNumber x);
positiveNumber scan()

	//Driver code
int main(){
positiveNumber num1,num2;
printf("Enter tow numbers ");
num1=scan();num2=scan();
printf("%d * %d = ",num1,num2);
print(egyp_mult(num1,num2));
	return 0;
}
//recursion function 
positiveNumber egyp_mult(positiveNumber a,positiveNumber b){
	if(a==1) return b;
	if(a%2!=0) return b+egyp_mult(a/2,b*2);
	else return egyp_mult(a/2,b*2);
}
void print(positiveNumber x){
	printf(" %u ",x);
}
positiveNumber scan(){
	positiveNumber num;
	scanf("%u",&num);
	if(num>0) return num;
	else return scan();
}
