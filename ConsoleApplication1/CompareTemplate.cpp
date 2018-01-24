#include "stdafx.h"
#include "CompareTemplate.h"
//#include "ImaginaryNumber.h"
template < class CompareClass > //u¿ywamy szablonu
bool porownaj(CompareClass arg1, CompareClass arg2)
{
	return arg1 == arg2;
}

/*template<> bool porownaj(ImaginaryNumber arg1, ImaginaryNumber arg2)
{
	if (arg1.getFakeNumber() == arg2.getFakeNumber() && arg1.getRealNumber() == arg2.getRealNumber()) {
		return true;
	}

	return false;
}*/