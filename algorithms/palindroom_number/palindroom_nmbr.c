#include <stdio.h>
#include <stdbool.h> 



bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
     int r = 1; 
    while (x / r >= 10) 
        r *= 10; 
  
    while (x != 0) 
    { 
        int l = x / r;  
        int t = x % 10; 
  
        // If first and last digit  
        // not same return false 
        if (l != t)   
            return false; 
  
        // Removing the l and t 
        // digit from number 
        x = (x % r) / 10; 
  
        // Reducing r by a factor  
        // of 2 as 2 digits are dropped 
        r = r / 100; 
    } 
    return true; 
}

int main(){
    
    int i = 0;
    while (i != -1)
    {
        printf("geef getal in 0 is geel pali 1 wel: ");
        scanf("%d", &i);
       printf("%d\n", isPalindrome(i));
    }
    return 0;
}