//
// Created by super on 5/10/23.
//
#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel;

Point::Point(double _xs, double _ys): _xs(_xs), _ys(_ys){}
Point::Point(): _xs(0), _ys(0){}

double Point::getX() const{
    return _xs;
}
double Point::getY() const{
    return _ys;
}

void Point::setX(double _xs){ ///???????
    this->_xs = _xs;
}

void Point::setY(double _ys){ ///???????
    this->_ys = _ys;
}

double Point::distance(const Point& other) {
    return sqrt( pow(this->getX() - other.getX(), 2) * 1.0 + pow(this->getY() - other.getY(), 2) * 1.0);
}


 Point Point::moveTowards(Point& src,Point& dst, double distance){

            if(distance < 0){
                throw invalid_argument("distance must be positive");
            }
            double d = src.distance(dst);
            if(d <= distance){
                return dst;
            }

            double xCor = (dst.getX() - src.getX())/d;
            double yCor = (dst.getY() - src.getY())/d;
      
            double xs = src.getX() + (xCor*distance);
            double ys = src.getY() + (yCor*distance);

            return {xs, ys};
        }


string Point::print() const{
    return "(" + to_string(_xs) + "," + to_string(_ys) + ")";
}


