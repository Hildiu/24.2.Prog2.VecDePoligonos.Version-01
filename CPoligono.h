//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_03_POLIGONOS_01_CPOLIGONO_H
#define INC_03_POLIGONOS_01_CPOLIGONO_H

#include "Definiciones.h"

class CPoligono
{
protected:
    TipoNumerico m_lado;
public:
    CPoligono(){}
    CPoligono(TipoNumerico _lado):m_lado(_lado){}
    virtual ~CPoligono(){}
    void set_m_Lado(TipoNumerico lado) {m_lado=lado;}
    TipoNumerico getLado(){ return m_lado;}

    virtual TipoNumerico Apotema() =0;
    virtual TipoNumerico SemiPerimetro() =0;
    TipoNumerico Area();
};


#endif //INC_03_POLIGONOS_01_CPOLIGONO_H
