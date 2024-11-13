//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_03_POLIGONOS_01_CHEXAGONO_H
#define INC_03_POLIGONOS_01_CHEXAGONO_H

#include "Definiciones.h"
#include "CPoligono.h"

class CHexagono:public CPoligono
{
  public:
    CHexagono():CPoligono(){}
    CHexagono(TipoNumerico lado):CPoligono(lado){};
    virtual ~CHexagono(){};

    TipoNumerico Apotema() override;
    TipoNumerico SemiPerimetro() override;
};





#endif //INC_03_POLIGONOS_01_CHEXAGONO_H
