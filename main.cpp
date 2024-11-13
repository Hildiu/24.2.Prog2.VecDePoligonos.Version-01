
#include "Definiciones.h"
#include "CCuadrado.h"
#include "CTriangulo.h"
#include "CHexagono.h"
#include <vector>
#include <iomanip>

int main()
{
 vector<CPoligono*> vec={ new CCuadrado(7), new CTriangulo(8), new CHexagono(9)};
 int tipo;
 double lado;

 srand(time(nullptr));
 for(int i=0; i<10; i++)
 {
     tipo = rand() % 3 + 1;
     lado = rand() % 100 + 1;
     switch(tipo)
     {
         case 1: vec.push_back(new CCuadrado(lado)); break;
         case 2: vec.push_back(new CTriangulo(lado)); break;
         case 3: vec.push_back(new CHexagono(lado)); break;
     }
 }
 //--- imprimimos todas las figuras y sus areas
 cout << "\n";
 cout <<setw(5) << "Num"<< setw(10) << "Lado" << setw(10) << "Area" << "\n";
 int i = 1;
 for(const auto elemento:vec) {
     cout << setw(5) << i << setw(10) << elemento->getLado() << setw(10) << elemento->Area() << "\n";
     i++;
 }
 //--- eliminamos la memoria
 for(int i=0; i<vec.size(); i++)
     delete vec[i];

  return 0;
}

