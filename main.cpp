#include <iostream>
#include "House.h"
#include <string>

using namespace std;

void printHouse(House& house);


int main() {
    House myhouse;
    House yourHouse;

    myhouse.setNumStories(2);
    myhouse.setNumWindows(6);
    myhouse.setColor("red");

    yourHouse.setNumStories(5);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    printHouse(myhouse);
    printHouse(yourHouse);

    return 0;
}

void printHouse(House& house) {
    cout << "The house is " << house.getColor()
        << " and has " << house.getNumStories()
        << " stories and " << house.getNumWindows() << endl;
}