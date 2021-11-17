#include <iostream>
using namespace std;

class Rectangle{
	public:
	double sideA;
	double sideB;
	
	Rectangle();
	Rectangle(double pSideA, double pSideB);
	
	void getSides();
};


Rectangle::Rectangle(double pSideA, double pSideB){
	sideA-pSideA;
	sideB-pSideB;
}

void Rectangle::getSides(){
	cout<<"Bok A: "<<sideA<<"Bok B: "<<sideB<<endl;
}

void getSides(double a, double b){
	cout<<"Bok A: "<<a<<"Bok B: "<<b<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	double a=10;
	double b=10;
	
	Rectangle p1;
	cout<<"Bok A: "<<p1.sideA<<endl;
	p1.sideA=100;
	cout<<"Bok B: "<<p1.sideB<<endl;
	p1.getSides();
	
	getSides(a, b);
	
	Rectangle p2(a, b);
	p2.getSides();
	
	return 0;
}
