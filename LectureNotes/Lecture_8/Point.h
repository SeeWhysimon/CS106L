#pragma once

#include <iostream>

class Point {
public:
	Point(int x, int y, std::string color);
	int getX();
	int getY();
	std::string getColor();
	void setX(int x);
	void setY(int y);
	void setColor(std::string color);

private:
	int x;
	int y;
	std::string color;
};