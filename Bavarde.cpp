#include <iostream>
using namespace std; 

class Bavarde {
    int riri;
  
  public:
    Bavarde(int roro) : riri(roro){cout << "Construction de "<< riri << endl;}
    int get(){return riri;}
    void set(int riri){this->riri = riri;}
    ~Bavarde (){cout << "Tais-toi " << riri << endl;}
} bizarre(1);

Bavarde globale(2);

void fonction(Bavarde b) {
  std::cout << "code de la fonction \n";
}

int main(int, char **) { 
  cout << "main \n";
  std::cout << Bavarde(1111).get() << std::endl;
  cout << "finish \n";
  Bavarde b1(3);
  Bavarde b2(4);
  Bavarde * p = new Bavarde(5);
  fonction(b1);
  delete(p);
  return 0;
}