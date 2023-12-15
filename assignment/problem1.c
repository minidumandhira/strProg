#include <stdio.h>



int main()
{
  int a, b, c, d, e, f, g, x, y, m, s;

  int i = 5;
  int n = 10;
  int k = 25;
  int z = 50;

  int aoc50 = a;
  a = 15;
  int aoc25 = b;
  b = 20;
  int aoc10 = c;
  c = 30;
  int aoc5 = d;
  d = 40;
  // stamp amount

  int aos10 = e;
  e = 22;
  int aos15 = f;
  f = 12;
  int aos25 = g;
  g = 16;

  // full amount of coins
  do{
    int coinamount = x;

    // full amount of stamps

    int stampamount = y;
    
    x = a + b + c + d;
    y = e + f + g;

    // get inputs
    int coin = m;
    int stamp = s;
    printf("enter value of stamp And insert a coin?");
    scanf("%d %d", &s, &m);

    if (s == 10)
    {
      if (m == 5)
      {
        
        printf("sorry,amount is insuficient for transaction\n");
        printf("amount of rs 10 stamp:%d", e);
      }
      else if (m == 10)
      {
        
          printf("payment successful\n");
        printf("amount of rs 10 stamp:%d\n 10coin amount:%d", --e, ++c);

        
        
        
      }
      else if (m == 25)
      {
        
        printf("payment successful\n");
        printf("change is:rs%d\n", i + n);
        printf("amount of rs 10 stamp:%d\n 25coin amount:%d\n 10coin amount:%d", --e, ++b,--c);
        
      }
      else if (m == 50)
      {
        
        printf("payment successful\n");
        printf("change is:rs%d\n", i + n + k);
        printf("amount of rs 10 stamp:%d\n 50coin amount:%d\n", --e, ++a);
        printf("25coin amount:%d\n 10coin amount:%d\n 5coin amount:%d", --b, --c, --d);
       
      }
      else{
        printf("invalid coin\n");
      }
    }

    else if (s == 15)
    {
      if (m == 5)
      {
        printf("sorry,amount is insuficient for transaction\n");
        printf("amount of rs 15 stamp:%d", f);
      }
      else if (m == 10)
      {
        printf("sorry,amount is insuficient for transaction\n");
        printf("amount of rs 15 stamp:%d", f);
      }
      else if (m == 25)
      {
        
        printf("payment successful\n");
        printf("change is:rs%d\n", n);
        printf("amount of rs 15 stamp:%d\n 10coin amount:%d\n 25coin amount:%d", --f, --c, ++b);
        
      }
      else if (m == 50)
      {
        
        printf("payment successful\n");
        printf("change is:rs%d\n", n + k);
        printf("amount of rs 15 stamp:%d\n 50coin amount:%d\n 10coin amount:%d\n 25coin amount:%d", --f, ++a, --c, --b);
       
      }
      else{
        printf("invalid coin\n");
      }
    }
    else if (s == 25)
    {
      if (m == 5)
      {
        printf("sorry,amount is insuficient for transaction\n");
        printf("amount of rs 25 stamp:%d", g);
      }
      else if (m == 10)
      {
        printf("sorry,amount is insuficient for transaction");
        printf("\namount of rs 25 stamp:%d\n", g);
      }
      else if (m == 25)
      {
       

        printf("payment successful\n");
        printf("amount of rs 25 stamp:%d\n 25coin amount:%d", --g, ++b);
       

      }
      else if (m == 50)
      {
        
        printf("payment successful\n");
        printf("change is:rs%d\n", k);
        printf("amount of rs 25 stamp:%d\n 50coin amount:%d\n 25coin amount:%d", --g, ++a, --b);
       
      }
      else{
        printf("invalid coin\n");
      }
    }
    else
    {
      printf("invalid stamp value OR ivalid coin");
    }
  if((a*b*c*d >0) && (e*f*g>0)){
    printf("\nDo you want to do another transaction (y/n)?");
    char conti;
    scanf(" %c", &conti);
    if (conti!='y')
    {
      break;
    }
    }
  else{
    printf("\nerror");
    break;
  }
  }
  while (1);
    
  return 0;
}
