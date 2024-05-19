#include "Point.h"

Point::Point(int x, int y, std::string color) : x(x), y(y), color(color) {
	std::cout << "Point located at (" << x << "," << y << ")" << std::endl;
}

int Point::getX() {
	return this->x;
}

int Point::getY() {
	return this->y;
}

std::string Point::getColor() {
	return this->color;
}

void Point::setX(int x) {
	this->x = x;
}

void Point::setY(int y) {
	this->y = y;
}

void Point::setColor(std::string color) {
	this->color = color;
}