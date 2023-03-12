#include "House.h"
#include <string>
#include <iostream>

using namespace std;

House::House() {
    this->numStories = 4;
    this->numWindows = 6;
    this->color = "white";
}

House::House(int numStories, int numWindows, string color) {
    this->numStories = numStories;
    this->numWindows = numWindows;
    this->color = color;
}

House::~House() {
    cout << "the " << getColor() << " house with " << getNumStories() << " stories and "
        << getNumWindows() << " windows is being destroyed!" << endl;
}

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

void House::printHouse(){
    cout << "The house is " << getColor()
        << " and has " << getNumStories()
        << " stories and " << getNumWindows() << endl;
}