#include "House.h"
#include <string>
#include <iostream>

using namespace std;

void House::setNumStories(int numStories) {
    this->numStories = numStories;
}

void House::setNumWindows(int numWindows) {
    this->numWindows = numWindows;
}

void House::setColor(string color) {
    this->color = color;
}

int House::getNumStories() {
    return numStories;
}

int House::getNumWindows() {
    return numWindows;
}

string House::getColor() {
    return color;
}

void House::printHouse(House house){
    cout << "The house is " << house.getColor()
        << " and has " << house.getNumStories()
        << " stories and " << house.getNumWindows() << endl;
}