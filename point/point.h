#ifndef _POINT_H_
#define _POINT_H_

class point
{
public:
    point();
    point(int, int);

    point(const point&);

    point& operator=(const point&);
    ~point() {}

    int get_x() const { return m_x; }
    int get_y() const { return m_y; }

private:
    int m_x, m_y;
};

#endif