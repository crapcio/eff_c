#include <stdlib.h>
#include <stdio.h>

void monsterSlain(int gold, char hero)
{
//    printf("You`ve slain %s.\n", monster);
}

void hit(int *hpGoblin,unsigned int *gold){
    if (*hpGoblin == 0) {
        puts("You`ve slain a goblin");
        gold += 20;
        printf("Your award: %d \n Your gold: %d", 20, *gold);
        return;
    }
    puts("You`ve hitted a goblin.");
    *hpGoblin -= 1;
    printf("Goblin HP: %d",*hpGoblin);
    
}
int main(void)
{
    signed int gold = 0;
    int hpGoblin = 3;
    char hero = '@';

    printf( "You were attacked by goblin.Goblin HP: %d\n", hpGoblin);

    while (hpGoblin > 0){
        hit(&hpGoblin, &gold);
        if (hpGoblin == 0) break;
    }
    puts("You won!");


    return EXIT_SUCCESS;
}



