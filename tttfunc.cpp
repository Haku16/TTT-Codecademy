#include <iostream>
#include <vector>
#include <stdlib.h>
#include "ttt.hpp"
int replace;
std::vector<std::string> space = {"1","2","3","4","5","6","7","8","9"};
void makeboard(){
    std::cout << " " << space[0] << " | " << space[1] << " | " << space[2] << " \n" << "===========\n" << " " << space[3] << " | " << space[4] << " | " << space[5] << " \n" << "===========\n" << " " << space[6] << " | " << space[7] << " | " << space[8] << " \n";
    }
void ask_x(){
    std::cin >> replace;
    replace--;
    space[replace] = "X";
    makeboard();
}
void ask_o(){
    std::cin >> replace;
    replace--;
    space[replace] = "O";
    makeboard();
}
bool is_filled = false;
void check_filled(){
    space[0]!="1" && space[1]!="2" && space[2]!="3" && space[3]!="4" && space[4]!="5" && space[5]!="6" && space[6]!="7" && space[7]!="8" && space[8]!="9" ? is_filled=true : is_filled=false;
}
