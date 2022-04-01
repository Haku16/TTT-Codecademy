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
bool has_winner = false;
void check_winner(){
    if (space[0]==space[3] && space[3]==space[6] && space[0] != ' '){
        space[0]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    } else if (space[1]==space[4] && space[4]==space[7] && space[1] != ' '){
        space[1]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    } else if (space[2]==space[5] && space[5]==space[8] && space[2] != ' '){
        space[2]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    } else if (space[0]==space[1] && space[1]==space[2] && space[0] != ' '){
        space[0]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    } else if (space[3]==space[4] && space[4]==space[5] && space[3] != ' '){
        space[2]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    } else if (space[6]==space[7] && space[7]==space[8] && space[6] != ' '){
        space[6]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    } else if (space[0]==space[4] && space[4]==space[8] && space[0] != ' '){
        space[0]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    } else if (space[2]==space[4] && space[4]==space[6] && space[2] != ' '){
        space[2]=='X' ? winner='X' : winner = 'O';
        has_winner = true;
    }
}
