#include "point.h"

point::point() : m_x(0), m_y(0)
{

}
point::point(int x, int y )
{
    this->m_x = x;
    this->m_y = y;
}

point::point (const point& rhs)
{
    this->m_x = rhs.get_x();
    this->m_y = rhs.get_y();

}
point& point::operator= (const point& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    
    this->m_x = rhs.get_x();
    this->m_y = rhs.get_y();

    return *this;
}