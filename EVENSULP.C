#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  float sum;
  clrscr();
  printf("Enter value upto which you want sum of all even no:");
  scanf("%d", &a);
  for( int i=1;i<=a;i++)
  {
    if(i%2==0)
    sum=sum+i;
    else
    printf("");
    }
    printf("%0.0f",sum);
   getch();
   }