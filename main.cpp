#include <iostream>
#include "House.h"
#include <string>

using namespace std;

int main() {
    House myhouse;
    House yourHouse;
    House theirHouse(2,10,"green");

    myhouse.setNumStories(2);
    myhouse.setNumWindows(6);
    myhouse.setColor("red");

    yourHouse.setNumStories(5);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    myhouse.printHouse();
    yourHouse.printHouse();
    theirHouse.printHouse();
    return 0;
}