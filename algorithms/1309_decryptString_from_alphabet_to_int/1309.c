#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * freqAlphabets(char * s){
    int lenS =strlen(s);
    int number = 0;
    for(int i=0; i<lenS; i++){
        if(s[i] == '#') number++;
    }
    int len = lenS - 2 * number;
    char *str = malloc((len+1) * sizeof(char)); 
    int ctr = 0;
    while (s[0] != '\0')
    {
        s+=2;
        if (s[0] == '#')
        {
            s -= 2;
            int f = s[0]-48;
            s++;
            char a = f*10+(s[0]-48)+96;
            str[ctr]= a;
            s+=2;
        }else
        {
            s-=2;
            str[ctr] = s[0]+48;
            s++;
        }
        ctr++;
    }
    str[ctr] = '\0';
    return str;

}



int main(){
   printf("%s\n", freqAlphabets("12345678910#11#12#13#14#15216546513213546516516546854351351354636514312321624#16#17#18#19#20#21#22#23#24#25#26#"));
    return 0;
}