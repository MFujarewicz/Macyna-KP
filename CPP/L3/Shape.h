#pragma once
#include<iostream>
#include<math.h>
#include<stdlib.h>

class Shape{
protected:
	static double const PI = 3.14159265359;
public:
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
	virtual void print() = 0;
};