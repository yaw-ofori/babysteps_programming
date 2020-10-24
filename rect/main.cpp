
#include <iostream>

#include "rect.h"

using namespace std;

float area(rect);

int main(int argc, char const *argv[])
{
    rect square(10);
    int ph = 29;
    square.setPhase(&ph);
    float r = area(square);
cout << *(square.getPhase()) << endl;
    return 0;
}

float area(rect sq) {
cout << "I get called " << endl;
    std::cout << sq.getWidth() << std::endl;
    std::cout << sq.getLength() << std::endl;

    float a = sq.getWidth() * sq.getLength();

    return a;
}
