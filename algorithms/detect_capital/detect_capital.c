#include <stdio.h>
#include <stdbool.h>


bool detectCapitalUse(char * word){
    int f1C=0,ctrC = 0, ctrL = 0;
    int len =0;
    while (1)
    {
        if (word[0] == '\0')
            break;
        len ++;
        if (word[0] >= 65 && word[0] <= 90)
        {
            ctrC ++;
            if (len == 1)
            {
                f1C = 1;
            }
            
        }else if (!(word[0] >= 65 && word[0] <= 90))
        {
            ctrL ++;
        }
        
        word++;
    }
    if (len == ctrC || len == ctrL || (len == ctrL+1 && f1C == 1 ) )
        return true; 
    return false;
}


int main(){
   
   while (1)
   {
    
    char word[50];
    printf("Geef woord: ");
    int y =scanf("%s", word);
    printf("%d \n",detectCapitalUse(word));
   }
   
    return 0;
}