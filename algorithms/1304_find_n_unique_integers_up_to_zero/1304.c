#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int* sumZero(int n, int* returnSize){
    *returnSize = n;
    int *nmbrs = malloc(n* sizeof(int));
    int i = 0;
    if (n % 2 != 0){
        nmbrs[0]=0;
        i++;
    }
    for (i ;i < n; i+=2)
    {
        nmbrs[i] = i+1;
        nmbrs[i+1] = -(i+1);
    }
    return nmbrs;
}


int main(){
    int yeet= 0;
    for (int i = 0; i < 10; i++)
    {
        int * arr = sumZero(i,&yeet);
        for (int j = 0; j < i; j++)
        {
            
            printf("%d,",arr[j]);
        }
        printf("\n");
        free(arr);
    }
    
    
    return 0;
}