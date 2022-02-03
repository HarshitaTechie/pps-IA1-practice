#include<stdio.h>

int input();
int cmp(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main();

int input()
{
  int a;
  printf("Enter three numbers \n");
  scanf("%d",&a);
  return a;
}

int cmp(int a, int b, int c)
{
  if(a>b && a>c)
  {return a;}

  else if(b>a && b>c)
  {return b;}

  else{return c;}
}

void output(int a, int b, int c, int largest)
{
  printf("The largest among %d , %d and %d is %d \n",a,b,c,largest);
}

int main()
{
  int a=input();
  int b=input();
  int c=input();
  int largest=0;
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}