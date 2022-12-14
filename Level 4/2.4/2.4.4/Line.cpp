#include "Line.h"
#include <cmath>
#include <iostream>
Line::Line() {} // default constructor
Line::Line(Point &p1, Point &p2) // constructor with start- and end-point
{
    stp = p1;
    endp = p2;
}
Line::Line(const Line &l) // copy constructor
{
    stp = l.stp;
    endp = l.endp;
}
Line::~Line() {} // destructor

// Selector
Point Line::Stp() const { return stp; }
Point Line::Endp() const { return endp; }

// Modifier
void Line::Stp(Point &nstp) { stp = nstp; }
void Line::Endp(Point &nendp) { endp = nendp; }

// Description
std::string Line::ToString() const {
    std::stringstream source;
    source << "A line between (" << stp.X() << "," << stp.Y() << ") and (" << endp.X() << "," << endp.Y() << ").";
    return source.str();
}

// Length
double Line::Length() { return stp.Distance(endp); }

// Operator
Line &Line::operator=(const Line &source) {
    stp = source.stp;
    endp = source.endp;
    return *this;
}