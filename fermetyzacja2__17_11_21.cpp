#include <iostream>
using namespace std;

class Rectangle{
	private:
	double sideA;
	double sideB;
	public:
	Rectangle();
	Rectangle(double pSideA, double pSideB);
	
	void getSides();
	void setSideA(double pSideA);
};

Rectangle::Rectangle(){};
Rectangle::Rectangle(double pSideA, double pSideB){
	sideA-pSideA;
	sideB-pSideB;
}

void Rectangle::getSides(){
	cin>>"Bok A: ">>sideA>>"Bok B: ">>sideB;
}

void getSides(double a, double b){
	cout<<"Bok A: "<<a<<"Bok B: "<<b<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	double a=10;
	double b=10;
	
	Rectangle p1;
	p1.getSides();
	
	return 0;
}
