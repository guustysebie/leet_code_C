#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * defangIPaddr(char * address){
    char *r;
    int ctr =0;
    r = malloc(sizeof(char)*50);
    while (1)
    {
        char c =address[0]; 
        char str[2];
        if (address[0] == '\0'){
            break;
        }
        str[0] = c;
        str[1]= '\0';
        if (address[0]=='.')
        {
            strcat(r,"[");
            strcat(r,str);
            strcat(r,"]");
        }else
        {
        strcat(r, str);
        }
        

        address++;
    }

    return r;
}

int main(){

    char address[15]={""};
    printf(">>Give a valid ip address: ");
    scanf("%s",address);
    
    printf(">>Solution: %s \n" , defangIPaddr(address));
    return 0;
}