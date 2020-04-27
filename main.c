#include <stdio.h>

void fltCheck (int loop)
{
  float a = 0.30f;
  float b = 0.0f;


 int c = 0;
  while (c < loop)
    {

      printf ("\t%.2f * %d = %.24f\n", a, c, b);
      b += a;
      c++;
    }
}

void dblCheck (int loop)
{
  double a = 0.30f;
  double b = 0.0f;



  int c = 0;
  while (c < loop)
    {

      printf ("\t%.2f * %d = %.24f\n", a, c, b);
      b += a;
      c++;
    }
}

void thirdCheck()
{
    double d = (double)((double)1.0 / (double)3.0);
    printf("\tDouble 1/3: %.24f\n",d);
    float f = 1.0 / 3.0;
    printf("\tSingle 1/3: %.24f\n",f);
    
    printf("\tDifference => %.24f\n", (double)(f-d));
}

int main ()
{
    int loop = 23;
    printf("single float check:\n");
    fltCheck(loop);
    
    printf("double float check:\n");
    dblCheck(loop); 
    
    
    printf("Third Check:\n");
    thirdCheck();   

    return 0;
}
