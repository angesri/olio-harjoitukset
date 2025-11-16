#include "rectangle.h"

Rectangle::Rectangle() {}

double Rectangle::getArea()
{
    return width * height;
}

double Rectangle::getCircum()
{
    return 2 * (width + height);
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

void Rectangle::setHeight(double height)
{
    this->height=height;
}
