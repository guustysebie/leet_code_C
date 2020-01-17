#include <stdio.h>



int romanToInt(char * s){
    int r = 0;
    int p = 2000;
    while (1)
    {
        char c = s[0];
        if (c == '\0')
            break;
        int v = 0;
            if (c == 'I')
        v = 1;
         if (c=='V')
        v = 5;
            if (c == 'X')
        v = 10;
         if (c =='L')
        v = 50;
        if (c=='C')
            v = 100;
        if (c =='D')
            v = 500;
        if (c== 'M')
        v = 1000;
        if (p < v){
            r += v-p*2;
            }
        else
            r += v;    

        p = v;
        s++;
    }
    return r;
}

int main()
{
    char i[4000]={""};
    printf(">>Enter Roman number: ");
    scanf("%s", i);
    printf(">>Converted: %d\n", romanToInt(i));
    return 0;
}