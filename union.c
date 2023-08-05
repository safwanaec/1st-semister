#include<stdio.h>

int main()
{
    union game_state 
    {
       char name[19];
       int health;
       int score;
       int position;
    };
    

    union game_state gs;
    
    /*An union can store one item at a time 
    the overall value changes when a value is assainged
    to an item of the union.
    
    the space an union takes is equivalant to the size
    of the largest data type assainged*/
    
    strcpy(gs.name,"safwan");
    printf("name = %s\n\n",gs.name);
    
    gs.health = 100;
    printf("health = %d\n\n",gs.health);
    
    gs.score = 1069;
    printf("score = %d\n\n",gs.score);
    
    gs.position = 101;
    printf("position = %d\n\n",gs.position);
    
    printf("health =%d\n\n",gs.health);
    printf("%d\n\n",sizeof(int));
    printf("%d\n\n",sizeof(gs.name));
    printf("%d\n\n",sizeof(gs.health));
    
    return 0;
}