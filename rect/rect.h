#ifndef _RECT_H_
#define _RECT_H_

#include <iostream>

class rect
{
private:
    int length;
    int width;
    int* phase;
    int* ptr;
public:
int getWidth() const;
int getLength() const ;
int* getPhase() const;
void setPhase(int*);
public:

    rect(int, int); // rectangle

    rect(int); // square
    // rect(const rect&); //copy constructor
    ~rect();
};

#endif

