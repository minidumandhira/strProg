#include<stdio.h>

int main()
{ 
  int i,j,y,k;
  int row=i;
  int column=j;
  int matrixY[6][1];

  int matrixA[6][8]={{1,2,3,4,5,6,7,8},
                     {2,3,4,5,6,7,8,9},
                     {3,4,5,6,7,8,9,10},
                     {4,5,6,7,8,9,10,11},
                     {5,6,7,8,9,10,11,12},
                     {6,7,8,9,10,11,12,13}};

  int matrixX[8][1]={{1},{-8},{3},{-6},{5},{-4},{7},{-2}};

  //diplay matrix A
  printf("matrixA:\n");
   for(i=0;i<6;i++){
    for(j=0;j<8;j++){
      printf("%d ",matrixA[i][j]);
    }
    printf("\n");
   }
   //display matrixB
   printf("matrixB:\n");
    for(i=0;i<8;i++){
      printf("%d \n",matrixX[i][0]);
    }
    //multiply AX
    printf("matrixY:\n");
     for(k=0;k<6;k++){
       for(j=0;j<1;j++){
        matrixY[k][0]=0;
      for(i=0;i<8;i++){

      matrixY[k][0]+=matrixA[k][i]*matrixX[i][0];
      
      }
      printf("%d \n",matrixY[k][0]);
       }
      
     }
     printf("\n");

}   

    
  
    



















