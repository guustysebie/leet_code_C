#include <stdio.h>



int singleNumber(int* nums, int numsSize){
    int x =0;
    for (int i = 0; i < numsSize; i++)
        x = x ^ nums[i];
    return x;
}

int main(){
    int s[] = {1,2,2,1,3,3,4,5,5,6,6,7,7};
    printf(">>%d\n<<", singleNumber(&s[0], sizeof(s)/sizeof(int)));
    return 0;
}