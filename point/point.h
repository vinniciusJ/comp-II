//
// Created by vinniciusj on 29/08/23.
//
#include <cmath>
#include <iostream>
#include <string>

#ifndef POINT_POINT_H
#define POINT_POINT_H

using namespace std;

class Point{
private:
    double x, y;
public:
    double getX() const;
    double getY() const;
    void setX(double xParam);
    void setY(double yParam);
    void move();
    void move(double xParam, double yParam);
    void move(Point * point);
    double getDistance(Point * point) const;
    Point * clone() const;
    string toString() const;

    bool equals();

    Point(){
        x = 0;
        y = 0;
    }

    Point(double xParam, double yParam){
        x = xParam;
        y = yParam;
    }

    Point(const Point &pointParam){
        x = pointParam.x;
        y = pointParam.y;
    }

    ~Point(){
        cout << "Point destructor has been called" << endl;
    }
};



#endif //POINT_POINT_H
