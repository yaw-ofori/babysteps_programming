#include "rect.h"

int rect::getLength() const { return this->length; }

int rect::getWidth() const { return this->width; }

int* rect::getPhase() const { return ptr; }

void rect::setPhase(int* ph) {
     this->ptr =  ph;
}
rect::rect(int l, int w)
{
    this->length = l;
    this->width = w;
}

rect::rect(int l) 
{
    this->length = this->width = l;
    
   
}

//copy constructor
// rect::rect(const rect& rhs) {
//     //std::cout << "Copy constructor. " << std::endl;
//     this->width = rhs.width;
//     this->length = rhs.length;
//     // this->length = 23;

// }
//destructor
rect::~rect() {
    std::cout << "Destructing" << std::endl;
    this->ptr = nullptr;
}


