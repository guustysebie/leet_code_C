#include <stdio.h>
#include <stdlib.h>

//start with 65 ASCII
char * convertToTitle(int n){
    if(!n) return NULL;
    char *r = malloc(8);
    r[7] = 0;
    int idx = 6, tmp;
    char GAP = 'A' - 1;
    while(n > 0)
    {
        tmp = n % 26;
        if(!tmp)
        {
            n -= 26;
            tmp = 26;
        }
        r[idx--] = tmp + GAP;
        n /= 26;
    }
    return r + idx + 1;
}

int main()
{
   printf("%.6s\n",convertToTitle(2444554));
    return 0;
}