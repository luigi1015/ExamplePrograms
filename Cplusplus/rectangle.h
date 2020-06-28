#include <iostream>

class Rectangle
{
	private:
		int width; int height;

	public:
		Rectangle();
		Rectangle( int newWidth, int newHeight );
		void setDimensions( int newWidth, int newHeight );
		int getWidth();
		int getHeight();
		int getArea();
};
