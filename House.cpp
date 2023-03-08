#include "House.h"
#include <string>

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