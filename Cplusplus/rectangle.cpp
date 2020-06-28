#include "rectangle.h"

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle( int newWidth, int newHeight )
{
	width = newWidth;
	height = newHeight;
}

void Rectangle::setDimensions( int newWidth, int newHeight )
{
	width = newWidth;
	height = newHeight;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::getHeight()
{
	return height;
}

int Rectangle::getArea()
{
	return width*height;
}
