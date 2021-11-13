#include<iostream>

int main(int argc, char** argv) {
  Itv I1, I2(3, 1);

cout << "I1.getBorneInf() : " << I1.getBorneInf() << endl;
  cout << "I1.getBorneSup() : " << I1.getBorneSup() << endl;
  cout << "Appel de I1.setBorneInf(3)" << endl; I1.setBorneInf(3);
  cout << "Appel de I1.setBorneSup(2)" << endl; I1.setBorneSup(2);
  cout << "I1.Afficher() : "; I1. Afficher(); cout << endl; 
  cout << "I2.Afficher() : "; I2. Afficher(); cout << endl;
  cout << "I1.Longueur() = " << I1.Longueur() << endl;
  cout << "I2.Longueur() = " << I2.Longueur() << endl;
  cout << "I1.Appartient(2.5) = " << I1.Appartient(2.5) << endl; 
  cout << "I2.Appartient(2.5) = " << I2.Appartient(2.5) << endl; 
  I2.setBorneSup(4);
  I2.setBorneInf(3);
  cout << "I2.Afficher() : "; I2. Afficher(); cout << endl;
  cout << "I2.Appartient(2.5) = " << I2.Appartient(2.5) << endl; 

}

