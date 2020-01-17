#include <stdio.h>

int* selfDividingNumbers(int left, int right, int* returnSize){
    for (int i = left; i <= right; i++)
    {
        int tmp= i;
        while (1)
        {
          int v = tmp %10;
          if (tmp%v ==0)
          {
              printf(">>%d", v);
          }
          
        }
        
    }
    

}