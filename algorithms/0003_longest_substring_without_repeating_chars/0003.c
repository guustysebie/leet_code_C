#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#define NO_OF_CHARS 256 

int lengthOfLongestSubstring(char * s){

    int n = strlen(s); 
    int cur_len = 1; // length of current substring 
    int max_len = 1; // result 
    int prev_index; // previous index 
    int i; 
    int* visited = (int*)malloc(sizeof(int) * NO_OF_CHARS); 

     for (i = 0; i < NO_OF_CHARS; i++) 
        visited[i] = -1; 
    
    printf("%s\n", word);
    

}


int main(){

    lengthOfLongestSubstring("qsdflqkjsdf");

    return 0;
}