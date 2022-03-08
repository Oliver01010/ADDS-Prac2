#include "Human.h"
#include <iostream>
using namespace std;

Human::Human() {

}

char Human::makeMove() {
    // get input from the user of RPS
    char playerChoice;
    cin >> playerChoice;
    return playerChoice;
}   