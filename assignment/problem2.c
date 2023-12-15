#include<stdio.h>

int main()
{ 
  int i,j,m,n,sum;

  

  while (1)
  {

  printf("enter size of matrixA(m n) ");
  scanf("%d" "%d",&m,&n);
  if (m>0 && n>0)
  {
    break;
  }
  printf("\n enter positive value!\n");
  }



  int matrixY[m];

  int matrixA[m][n];
  int matrixX[n];

 for (int i = 0; i < m; i++)
 {
  printf("enter %dst line\n",i+1);
  for (int j = 0; j < n; j++)
  {
    printf("enter value for %dX%d: ",i+1,j+1);
    scanf("%d",&matrixA[i][j]);
  }
  
 }
   printf("\nenter matrixX");
   for (int i = 0; i < n; i++)
   {
    printf("enter value for %d line\n",i+1);
    scanf("%d",&matrixX[i]);
   }

 /*display matrixA*/  
 printf("\n matrixA\n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j <n ; j++)
    {
        printf("| %d |", matrixA[i][j]);
    }
      printf("\n");
  }
  
  /*display matrixX*/
  printf("\n matrixX\n");
   for (int i = 0; i < n; i++)
   {
       printf("| %d |",matrixX[i]);
      
   
   }
    /*multiply matrixA and matrixX*/
   printf("\nmatrixY:\n");
   for (int i = 0; i < m; i++)
   {
    sum=0;
    for(int j=0; j<n; j++){
    sum+=matrixA[i][j]*matrixX[i];
     
    }
    matrixY[i] = sum;
   }
   
printf("matrixY:\n");
   
   for (int i = 0; i < m; i++)
   {
    printf("| %d |",matrixY[i]);
   }
   
}   

    
  
    



















