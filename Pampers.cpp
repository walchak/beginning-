#include <iostream>
using namespace std;


class Tableau
{
   int * tab;
   int taille;

 public:
   Tableau():tab(nullptr), taille(10)
   {
       tab = new int[taille]; // si problème ?
       for (int i = 0; i<taille; i++){tab[i]=i;}
   }
   Tableau(int TAILLE): taille(TAILLE)
   {
       tab = new int[taille]; // si problème ?
       for (int i = 0; i<taille; i++){tab[i]= rand();}
   }
   int getTaille()  {return taille;}
   void afficher(){
     for (int i=0; i< getTaille(); ++i){
         cout << tab[i] << endl;}
         }


    void mergeSort(int start, int end) {
        if(start == end ){ return ;}
        // Diviser en deux parties
        int mid =start+(end-start)/2;
        mergeSort(start,mid);
        mergeSort(mid+1, end);

        // Fusionner les deux parties triées
        TriFusion(start,mid, end);

    }



    void TriFusion(int start,int mid, int end){
        int leftSize = mid - start + 1;
        int rightSize = end - mid;
        int *tabL = new int [leftSize];
        int *tabR = new int [rightSize];

        for(int i= 0; i<leftSize;++i ){tabL[i]=tab[start+i];}
        for(int j= 0; j<rightSize;++j ){tabR[j]=tab[1+mid +j];}

        int i(0), j(0), k(start);
        while(i<leftSize && j<rightSize){
            if(tabL[i] <= tabR[j]){tab[k++]=tabL[i++];}
            else{tab[k++]=tabR[j++];}
        }
        while (i < leftSize) tab[k++] = tabL[i++];
        while (j < rightSize) tab[k++] = tabR[j++];

        // Libérer la mémoire des tableaux temporaires
        delete[] tabL;
        delete[] tabR;}
    void tri(){
        if (getTaille()==0 || getTaille()==1){cout<< "Le tableau est deja trie" << endl; return ;}
        mergeSort(0, getTaille()-1 );}
    ~Tableau(){delete[] tab;cout << "destruction\n";}

};



int main(int, char **)
{
   Tableau t(9);
   Tableau tt;

   cout << "la taille de tt : " << tt.getTaille() << endl;
   cout << "la taille de t : " << t.getTaille() << endl;
   cout << "affichage du contenu des deux tables:" << endl;
   t.afficher();
//    tt.afficher();

   cout << "Le tri du tableau tt ---> \n" << endl;
   t.tri();
   t.afficher();


   return 0;
}