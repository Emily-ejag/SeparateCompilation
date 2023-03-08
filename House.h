#include <string>
using namespace std;

class House {
public:
    void setNumStories(int numStories);

    void setNumWindows(int numWindows);

    void setColor(string color);

    int getNumStories();

    int getNumWindows();

    string getColor();

private:
    int numStories;
    int numWindows;
    string color;

};
