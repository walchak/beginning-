#include <iostream>

#include "Point.hpp"
using namespace std;

int Point::compteur = 0;

int main(int, char**) {
    // Point p(2, 0) ;
    // Point p1();
    
    
    // p.affichage() ;

    // p.deplacerDe(2, -1);
    // std::cout << " A : " <<'\n';
    // p.affichage() ;

    // p.deplacerVers(2, 3);
    // std::cout << "deplacement du pt" << '\n';
    // p.affichage() ;
    // int r(9), w(1);
    // std::cout << max(r,w);

    Point *p1 = new Point(2,-7); cout <<'\n';
    (*p1).affichage();
    // delete p1;

    Point p2;
    p2.setX(3); p2.setY(99);
    p2.affichage();
    Point p3;
    p3.affichage();

    // int r = Point::getCompteur();
    cout << "le deriner point a le num : "<< p2.getCompteur() << endl;
    // double w = distance1(p2,p3);
    cout<< "la distance entre les deux points est :"<< Point::distance1(p3,p2)<< endl;
    

  return 0;
}