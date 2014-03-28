#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int s,n,i,t,x,count=0;
int a[30];
long double c,d;
clrscr();
c=3+sqrt(5);
l1:
scanf("%d",&n);
if(n>100)
{printf("\n!! Test cases should not be more than 100");
goto l1;
}
for(i=0;i<n;++i)
{l2:
scanf("\n %d",&a[i]);
if(a[i]<2)
{
printf("\nn should not be less than 2\n");
goto l2;
}
}
for(i=0;i<n;++i)
{printf("\nCase #%d: ",i+1);
d=pow(c,a[i]);
s=(int)d;
t=s;
while(t)
{
t=t/10;
count++;
}
if(count==2)
{
printf("0%d",s);
}
else if(count==1)
{
printf("00 %d",s);
}
else if(count==0)
{
printf("000");
}
else
{
 x=s%(1000);
 printf("%d",x);
  }
  }
getch();
}
