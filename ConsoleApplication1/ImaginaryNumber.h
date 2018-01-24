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

	friend std::ostream& operator<< (std::ostream& stream, const ImaginaryNumber& imaginaryNumber) {
		stream << "(" << imaginaryNumber.realNumber << ", " << imaginaryNumber.fakeNumber << ")";
		return stream;
	}

	/*bool operator==(const ImaginaryNumber& imagineNumber2) {
		return this->fakeNumber == imagineNumber2.fakeNumber &&
			this->realNumber == imagineNumber2.realNumber;
	}*/
};

