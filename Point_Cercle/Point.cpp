#include "pch.h"
#include "Point.h"

namespace geo {
	Point::Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	void Point::print() const
	{
		cout << "le point:(" << this->x << ',' << this->y << ")." << endl;
	}

	double Point::distance(Point p) const
	{
		return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
	}
	bool Point::operator==(Point p) const
	{
		return (this->x==p.x)&&(this->y==p.y);
	}
}
