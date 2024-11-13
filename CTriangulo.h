//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_03_POLIGONOS_01_CTRIANGULO_H
#define INC_03_POLIGONOS_01_CTRIANGULO_H

#include "Definiciones.h"
#include "CPoligono.h"

class CTriangulo:public CPoligono
{
 public:
    CTriangulo():CPoligono(){}
    CTriangulo(TipoNumerico lado):CPoligono(lado){};
    virtual ~CTriangulo(){};

    TipoNumerico Apotema() override;
    TipoNumerico SemiPerimetro() override;
};


#endif //INC_03_POLIGONOS_01_CTRIANGULO_H
