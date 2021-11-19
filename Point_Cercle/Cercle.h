#pragma once
#include "Point.h"
namespace geo {
	class Cercle
	{
	private:
		Point* centre;
		double rayon;
	public:
		Cercle(Point* centre, double rayon);
		void print()const;
		void changer_rayon(double rayon);
		bool operator==(Cercle c)const;
		double perimeter()const;
		double area()const;
		bool apartenir(Point p)const;
	};
}

