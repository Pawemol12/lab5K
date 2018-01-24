#pragma once
#include "ImaginaryNumber.h"
template < class CompareClass > //u¿ywamy szablonu
bool porownaj(CompareClass arg1, CompareClass arg2);
template<> bool porownaj(ImaginaryNumber arg1, ImaginaryNumber arg2);