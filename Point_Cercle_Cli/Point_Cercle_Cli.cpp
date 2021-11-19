// Point_Cercle_Cli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Cercle.h"
using namespace geo;
int main()
{
    Point* p = new Point(0, 0);

    Cercle* c = new Cercle(p, 3);
    Point p2(0, 4);

    cout << c->perimeter() << endl;
    cout << c->area() << endl;

    if (c->apartenir(p2))    cout << "yes\n";
    else    cout << "no\n";

    delete p;
    delete c;

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
