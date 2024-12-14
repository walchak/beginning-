#include <iostream>
#include "Point.hpp"

// Constructeur
Point::Point(double X, double Y) : x(X), y(Y) {cout << "Creation constructeur avec arguments";compteur++;}
Point::Point(): x(0), y(0){cout << "Creation du constructeur sans argument"; compteur++;}

double Point::getX() const {return x;}
int Point::getCompteur(){return compteur;}
double Point::getY() const {return y;}

void Point::setY(double Y){x =Y;}
void Point::setX(double X) {x =X;}

void Point::deplacerDe(double dx, double dy){x+=dx; y+=dy;}
void Point::deplacerVers(double a, double b){x = a; y = b;}
void Point::affichage() const {cout << "Le point se trouve dans (" << x << ", " << y << ").\n";}
double Point::distance1(Point p1, Point p2){return sqrt(pow(p1.getX() - p2.getX(),2) + pow(p1.getY() - p2.getY(),2));}
