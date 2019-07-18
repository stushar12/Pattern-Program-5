#include <stdio.h>
int main()
{
char ch1='A';
char ch='A';
int n;
printf("\n Enter a number ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  for(char j=ch1;j>=ch;j--)
  {
    printf("%c ",j);
  }
  ch1++;
  printf("\n");
}
}
