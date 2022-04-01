#include <iostream>
#include <vector>
#include <stdlib.h>
#include "ttt.hpp"
int main()
{
    int filled;
    std::cout << "Lets play Tic-Tac-Toe! Type the space which you want to play!\n";
    makeboard();
    while(filled<9){
      ask();
      filled++;
    }
}
