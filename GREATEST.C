#INCLUDE<CONIO.H>
#include<conio.h>
main()
{
int a,b,c,d;
printf("enter the value of a,b,c,d);
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
{
printf("a");
}
else if(b>c&&c>d)
{
printf("b");
}
else if(c>d)
{
printf("c");
}
else 
{
printf("d");
}
getch();
}
