#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200],b[200];
  int i,j,k=0,c[200];
  clrscr();
  printf("Enter the string:");
  gets(a);
  strcpy(b,a);
  for(i=0;i<200;i++)
  c[i]=0;
  for(i=0;a[i]!='\0';i++)
  {
     for(j=0;b[j]!='\0';j++)
     {
	if(a[i]==b[j])
	c[k]++;
	}
	k++;
	}
	printf("Frequency of each character is:\n");
   for(i=0;a[i]!='\0';i++)
   printf("%d ",c[i]);
    getch();
}