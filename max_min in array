#include<stdio.h>

int maximum(int arr[],int n){
	if(n==1) return arr[0];
	else{
		int x= maximum(arr,n-1);
		if(x>arr[n-1]) return x;
		else return arr[n-1];
	}}
	
int minimum(int arr[],int n){
if(n==1) return arr[0];
	else{
		int x= minimum(arr,n-1);
		if(x<arr[n-1]) return x;
		else return arr[n-1];
	}}
  // Driver code
int main(){
	int x,a[x];
	FILE *fp;
	fp=fopen("max_min.txt","w");
	printf("Enter the size of array ");
	scanf("%d",&x);
	for(int i=0;i<x;i++) {
		printf("Enter a nmber ");
		scanf("%d",&a[i]);
}
printf("The max value in this array is %d \n The min value in this array is %d ", maximum(a,x),minimum(a,x));
// print in max_min fille 
fprintf(fp,"The max value in this array is %d \n The min value in this array is %d ", maximum(a,x),minimum(a,x));
fclose(fp);

}
