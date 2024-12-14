using namespace std;
#include <cmath>
class Point{
    double x;
    double y;
    static int compteur  ;

    public:
        //Constructeur
        Point(double X, double Y): x(X), y(Y){ cout << "Creation constructeur avec arguments";compteur++;}
        Point(): x(0), y(0){cout << "Creation du constructeur sans argument: "; compteur++;}
        //Getters
        double getX()const{return x;};
        double getY()const{return y;};
        int getCompteur(){return compteur;}
        //Setters
        void setX(double X){x = X;}
        void setY(double Y){y = Y;} 
        //Méthodes divers
        void deplacerDe(double dx, double dy){x+=dx; y+=dy;}
        void deplacerVers(double a, double b){x = a; y = b;}
        void affichage() const {cout << "Le point se trouve dans (" << x << ", " << y << ").\n";}
        static double distance1(Point p1, Point p2){return sqrt(pow(p1.getX() - p2.getX(),2) + pow(p1.getY() - p2.getY(),2));}
        };