#include <iostream>
using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
	int id=10;
	string brand="Fiat" , model="126p";
	

	void getData();
	
	Car(int id=13, string brand="FIAT", string model="XXXXX");
};

void Car::getData(){
	cout<<"\nID: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<endl;
};

Car::Car(int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
};


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car maluch;
	maluch.getData();
	
	Car opel = Car(9, "opel", "Tigra");
	
	maluch.getData();
	return 0;
}
