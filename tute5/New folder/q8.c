#include<stdio.h>

int main (){


int a,b,c;
int p;



printf("ax^2+bx+c=0\n");

/*find the root*/

printf("insert a value for a:\t insert value for b:\t insert value for c:\n ");
scanf("%d %d %d", &a,&b,&c);

p=((b*b) -(4*a*c));

/*display inputs*/

printf(" a=%d\n b=%d\n c=%d\n",a,b,c);

if (a==0 && b==0)
{
   printf("no solution!");
}
else if (a==0&& b!=0&& c!=0)
{
    printf("There is only one root");
}

else if (p<0)
{
    printf("There are no roots");
}
else if (p>=0)
{
    printf("There are two real roots");
}








return(0);



}