#include "stats.h"
#include "character.h"
#include <iostream>



int main(){
    Character Casus({2, 9, 0, 6, 10}, 6, "Casus");
    Character Nhel({6, 1, 6, 5, 8}, 6, "N\'hel");
    Character Nuuo({2, 2, 12, 0, 10}, 6, "Nuuo");
    Character Nickel({2, 8, 2, 12, 0}, 6, "Nickel");
    Character Nick({4, 4, 10, 0, 9}, 6, "Nick");
    Character Cillian({4, 3, 10, 4, 6}, 6, "Cillian");
    int granica=22;
    std::cout << std::endl;
    Casus.chance(granica);
    Nhel.chance(granica);
    Nuuo.chance(granica);
    Nickel.chance(granica);
    Nick.chance(granica);
    Cillian.chance(granica);
}