#include <stdio.h>
#include <stdbool.h>
#include<string.h>
typedef struct person 
 {
  char f_name[20];
  char l_name[20];
 }person;
 
bool search(person a[],char key[],int n){
 if(n==1){
  if(strcmp(a[0].f_name,key)==0)return true;
 else return false;
 } 
 else { if(strcmp(a[n-1].f_name,key)==0) return true;
 else if(search(a,key,n-1))return true;
  else return false; 
}
 }  
 
  int main()
  {
   char p[10];
   person a[3];
   for(int i=0;i<3;i++)
   {
    printf("Enter the first name ");
    scanf("%s",&a[i].f_name);
    printf("Enter the last name ");
    scanf("%s",&a[i].l_name);
    printf("Enter the age ");
    scanf("%d",&a[i].age);

   }
   printf("Enter the user name ");
   scanf("%s",&p);
   if(search(a,p,3))
  printf("The first name is exist ") ;
   else   printf("The first name is not exist ") ;
   
   return 0;
  }
