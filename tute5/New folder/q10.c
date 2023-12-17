#include<stdio.h>

int main (){
char name[]="name";
int m;
float h,BMI;


printf("enter your name:\n");
scanf("%s",&name);
/*Display name*/
printf("your name is=%s\n",name);

/*get the  mass of user*/
printf("enter ur mass in Kg:");
scanf("%d",&m);
/*display mass*/
printf("your mass=%dKg\n",m);

/*get height*/
printf("enter your height in m:\n");
scanf("%f",&h);
/*display height*/
printf("your height=%.2fm\n",h);


/*calculate BMI */
BMI=m/(h*h);

if (BMI<18.5)
{
    printf("Risk of developing problems such as nutritional deficiency and osteoporosis");
}
else if (18.5<=BMI<=23)
{
    printf("Low Risk (healthy range)");
}
else if (23<=BMI<=27.5)
{
    printf("Moderate risk of developing heart disease, high blood pressure, stroke, diabetes ");
}
else 
{
    printf("High risk of developing heart disease, high blood pressure, stroke, diabetes");
}

}