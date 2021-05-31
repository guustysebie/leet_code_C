#include <stdio.h>
#include <stdlib.h>

int* decompressRLElist(int* nums, int numsSize, int* returnSize){
 int len = 0;
    for(int i=0; i< numsSize; i+=2){
        len += nums[i];
    }
    *returnSize =len;
    int * sol = malloc(len * sizeof(int*));
    int ctr =0;
    for (int i = 0; i < numsSize; i+=2)
    {
        int amt = nums[i];
        for (int j = 0; j < amt; j++)
        {
            sol[ctr] = nums[i+1];
            ctr++;
        }
        
    }
    return sol;
}


int main(){
    int* nums = malloc( 4 * sizeof(int));
    int length = 4;
    int *ptr_lenght = &length;
    nums[0] =1;
    nums[1] =2;
    nums[2] =3;
    nums[3] =4;
 

    int * arr = decompressRLElist(nums,length,ptr_lenght);
    free(arr);


}