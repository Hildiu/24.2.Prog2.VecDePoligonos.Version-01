//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#include "CPoligono.h"

TipoNumerico CPoligono::Area()
{
  return SemiPerimetro() * Apotema();
}