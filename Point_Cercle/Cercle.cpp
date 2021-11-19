#include "pch.h"
#include "Cercle.h"

namespace geo {
	Cercle::Cercle(Point* centre, double rayon)
	{
		this->centre = centre;
		this->rayon = rayon;
	}
	void Cercle::print() const
	{
		this->centre->print();
		cout << "rayon: " << this->rayon << '.' << endl;
	}
	void Cercle::changer_rayon(double rayon)
	{
		this->rayon = rayon;
	}
	bool Cercle::operator==(Cercle c) const
	{
		return (*c.centre==*this->centre)&&(c.rayon==this->rayon);
	}
	double Cercle::perimeter() const
	{
		return 2*M_PI*this->rayon;
	}
	double Cercle::area() const
	{
		return M_PI*pow(this->rayon,2);
	}
	bool Cercle::apartenir(Point p) const
	{
		return (this->centre->distance(p)<=this->rayon);
	}
}