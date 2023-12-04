#include<stdio.h>

int main (){

int cusid,units;
float charge,amount;

printf("enter customer id And used units per month:");
scanf("%d\n %d", &cusid,&units);

if (units>0 && units <=100)
{
    amount= units*5.50;
    printf("amount of bill =Rs%.2f",amount);
}

else if (units >100 && units <=200)
{
    units%=100;
    amount= (units*8.50) +100*5.50;
    printf("amount of bill=Rs%.2f",amount);

}

else if (units>200 && units <=300)
{
    units%=200;
    amount= (units*14.50)+(100*5.50)+(100*8.50);
    printf("amount of bill=Rs%.2f",amount);
}

else if (units>300 && units<=400)
{
    units%=300;
    amount= (units*21.50)+(100*5.50)+(100*8.50)+(100*14.50);
    printf("amount of bill=Rs%.2f",amount);
}
else if (units>400)
{
    units%400;
    amount=(units*32.50)+(100*5.50)+(100*14.50)+(100*8.50)+(100*21.50);
     printf("amount of bill=Rs.2%f",amount);
}    




return 0;
}