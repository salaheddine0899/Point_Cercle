#pragma once
#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>
using namespace std;
namespace geo {
	class Point
	{
	private:
		double x, y;
	public:
		Point(double x, double y);
		void print()const;
		double distance(Point p)const;
		bool operator==(Point p)const;
	};
}

