#include<stdio.h>

//convertion decimal number to binary
long int dec_to_bin(int num){
	if(num==0)return 0;
	else return num%2+10*dec_to_bin(num/2);
	}
// count number of ones in binary number	
int count_ones(int num){
	if(num<10){
		if(num==1) return 1;
		else return 0;}
  else{
	if(num%10==1) return 1+count_ones(num/10);
	else return count_ones(num/10);	
	} 
}
//Driver code
int main(){
 long int number,binary_num;
printf("Enter a Decimal number ");
scanf("%ld",&number);
FILE *fp;
fp=fopen("Decimal_to_Binary.txt","w");
binary_num=dec_to_bin(number);
printf(" Binary number is %ld \n numbers of ones is %d ",binary_num,count_ones(binary_num));
fprintf(fp," Binary number is %ld \n numbers of ones in this Binary number is %d ",binary_num,count_ones(binary_num));
fclose(fp);
	return 0;
}
