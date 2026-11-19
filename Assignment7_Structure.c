#include <stdio.h>
struct Student
{
  int roll;
  int Subject1, Subject2, Subject3;
  char name[30];
  int total;
  float per;
  float result;
 };
 
 int main()
{
    int i,n;
    
    printf("----Student Information----");
    printf("\n Enter the number of records:");
    scanf("%d", &n);
    struct Student strarr[n];
    for(i=0;i<n;i++)
    {
    printf("Enter the roll no of student:");
    scanf("%d", &strarr[i].roll);
    printf("Enter name of student:");
    scanf("%s", strarr[i].name);
    printf("Enter marks in Subject1:");
    scanf("%d", &strarr[i].Subject1);
    printf("Enter marks in Subject2:");
    scanf("%d", &strarr[i].Subject2);
    printf("Enter marks in Subject3:");
    scanf("%d", &strarr[i].Subject3);
    
    strarr[i].total = strarr[i].Subject1 + strarr[i].Subject2 + strarr[i].Subject3;
    strarr[i].per = (float)strarr[i].total / 3;
    
    printf("\nRoll No: %d | Name: %s | Subject 1: %d | Subject 2: %d | Subject 3: %d | Total: %d | Percentage: %.2f\n",
           strarr[i].roll, strarr[i].name, strarr[i].Subject1, strarr[i].Subject2, strarr[i].Subject3, strarr[i].total, strarr[i].per);
           
    if
      (strarr[i].per >= 80)
      {
      printf("You have achieved Distinction\n");}
    else if (strarr[i].per >=60)
    {
   
      printf("You are in First Class\n");}
    else if (strarr[i].per >=40)
    {
      
      printf("You are in Secod Class\n");}
    else
    {
      printf("You have failed\n");}
    }
 return 0;
}
