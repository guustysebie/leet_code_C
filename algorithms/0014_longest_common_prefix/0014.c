#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * longestCommonPrefix(char ** strs, int strsSize){
     if (strsSize  == 0 )
        return "";
    char * prefix = calloc(100, sizeof(char));
    int ctr= 0;
    int amount =0;
    if (strsSize == 0)
        return "";
    while (1)
    {
        for (int i = 0; i < strsSize; i++)
        {
            if (prefix[ctr] == 0 ){
                prefix[ctr] = strs[i][ctr];
            }
            if (prefix[ctr]==strs[i][ctr]){
                amount++;
            }
        }
        if (amount != strsSize){
            if (ctr == 0)
                prefix[ctr] = '\0';
            break;
        }
        else
        {
            amount =0;
        }
        
        ctr++;    
    }
    return prefix;
}

int main(){
    char ** myStrings = malloc(1000) ;
    myStrings[0] = "a";
  //  myStrings[1] = "rhall";
    //myStrings[2] = "ahallo";
    //myStrings[3] = "lhallo";

    printf("%s\n", longestCommonPrefix(myStrings,1));
    return 0;
}