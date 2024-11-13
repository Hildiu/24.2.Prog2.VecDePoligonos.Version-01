//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_03_POLIGONOS_01_CCUADRADO_H
#define INC_03_POLIGONOS_01_CCUADRADO_H


#include "Definiciones.h"
#include "CPoligono.h"

class CCuadrado: public CPoligono
{
  public:
    CCuadrado():CPoligono(){}
    CCuadrado(TipoNumerico lado):CPoligono(lado){}
    virtual ~CCuadrado(){};

    TipoNumerico Apotema() override;
    TipoNumerico SemiPerimetro() override;
};


#endif //INC_03_POLIGONOS_01_CCUADRADO_H
