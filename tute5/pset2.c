#include<stdio.h>

int main ()
{

char grade();
int mark,snum;

printf("Enter studentnumber And mark:");
scanf("%d %d",&snum,&mark);

if(mark >=80)
{
    if(mark <=100)
    {
        printf("studentnumber %d : HONOURS ",snum );
        
    
    }
    else
    {
        printf("invalid");
    }
}

else if (mark>=60)
{
    printf("studentnumber %d : FIRST DIVISION ",snum );
}

else if (mark >=50)
{
    printf("studentnumber %d : SECOND DIVISION",snum );
}

else if (mark >=40)
{
     printf("studentnumber %d : THIRD DIVISION ",snum );
}

else
{

     printf("studentnumber %d : FAIL",snum );
}



}












