#include <stdio.h>
#include <stdbool.h> 
bool judgeCircle(char * moves){
    int x = 0;
    int y = 0;

    while (1)
    {
        if (moves[0] == '\0')
            break;
        else if (moves[0] == 'U')
            y++;
        else if (moves[0] == 'D')
            y--;
        else if (moves[0] == 'L')
            x--;
        else if (moves[0] == 'R')
            x++;        
        moves++;
    }
    return ((x==0)&&(y==0))? true:false;
}

int main(){

   printf("%d\n", judgeCircle("LLUDLRUDRDDRRLLDDRRDDUULLRRRRRLLLLDDDDUUUUUUDDDDLLUDLRUDRDDRRLLDDRRDDUULLRRRRRLLLLDDDDUUUUUUDDDDLLUDLRUDRDDRRLLDDRRDDUULLRRRRRLLLLDDDDUUUUUUDDDDLLUDLRUDRDDRRLLDDRRDDUULLRRRRRLLLLDDDDUUUUUUDDDD"));
}