#include<stdio.h>
int factorial(int num);
int main()
{
     int num;
     int result;
     printf("Enter the number:");
     scanf("%d" ,&num);
     result=factorial(num);
     printf("Result =%d \n",result);
     return 0;
}

int factorial(int n)
{
   int i, ans =1;
   
   if(n==1 || n==0)
   {
     return 1;
   }
   else
   {
      return n*factorial(n-1);
   }
}
