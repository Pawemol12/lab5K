#pragma once
class ImaginaryNumber
{
private:
	double realNumber;
	double fakeNumber;
public:
	ImaginaryNumber() : realNumber(0), fakeNumber(0) {

	};
	ImaginaryNumber(double realNumber, double fakeNumber) : realNumber(realNumber), fakeNumber(fakeNumber) {

	};

	~ImaginaryNumber();

	double getRealNumber() { return realNumber; };
	double getFakeNumber() { return fakeNumber; };
};

