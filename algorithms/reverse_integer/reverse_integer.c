#include <stdio.h>
#include <limits.h>


int reverse(int x)
{     
    long long r = 0;
    while (x != 0)
    {
        r = r * 10 + x % 10;
        x /= 10;
    }
    return (r < INT_MIN || r > INT_MAX) ? 0 : r;

}

int main(){

    int i = -1;
    while (i != 0)
    {
        printf("Geef nummer: ");
        scanf("%d" , &i);
        printf(">>%d :: %d\n", i, reverse(i));
    }
    

    return 0;
}