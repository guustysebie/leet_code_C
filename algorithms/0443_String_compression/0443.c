#include <stdio.h>
#include <stdlib.h>

int compress(char* chars, int charsSize){
   
    
    return currPlace;
}

int main()
{
    int size= 7;
    char * arr = malloc(size * sizeof(char));

    arr[0] = 'a';
    arr[1] = 'a';
    arr[2] = 'b';
    arr[3] = 'b';
    arr[4] = 'c';
    arr[5] = 'c';
    arr[6] = 'c';

    int ln = compress(arr,size);
    printf(">>%d\n", ln);
    for (int i = 0; i < size; i++)
    {
        printf(" %c " , arr[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;

}