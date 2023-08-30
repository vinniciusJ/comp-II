//
// Created by vinniciusj on 30/08/23.
//
#include <string>

#include "point.h"

using namespace std;

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::move() {
    x = 0;
    y = 0;
}

void Point::move(double xParam, double yParam) {
    x = xParam;
    y = yParam;
}

void Point::move(Point * point) {
    x = point->getX();
    y = point->getY();
}

bool Point::equals()  {
    return x == y;
}

double Point::getDistance(Point * point) const {
    return sqrt(pow(x - point->getX(), 2) + pow(y - point->getY(), 2));
}

void Point::setX(double xParam) {
    x = xParam;
}

void Point::setY(double yParam) {
    y = yParam;
}

Point * Point::clone() const {
    return new Point(x, y);
}

string Point::toString() const {
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}