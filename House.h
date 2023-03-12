#ifndef HOUSE_H
#define HOUSE_H
#endif



#include <string>
using namespace std;

class House {
public:

    House();

    House(int numStories, int numWindows, string color);

    ~House();

    void setNumStories(int numStories);

    void setNumWindows(int numWindows);

    void setColor(string color);

    int getNumStories();

    int getNumWindows();

    string getColor();

    void printHouse();

private:
    int numStories;
    int numWindows;
    string color;

};
