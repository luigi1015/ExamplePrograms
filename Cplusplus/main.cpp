#include <iostream>
#include "rectangle.h"

int main( int argc, const char* argv[] )
{
	std::cout << "Hello World!" << std::endl;
	Rectangle r;
	std::cout << "Area: " << r.getArea() << std::endl;
	r.setDimensions( 3, 4 );
	std::cout << "Area: " << r.getArea() << std::endl;
	return 0;
}
