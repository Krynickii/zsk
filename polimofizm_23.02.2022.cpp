#include <iostream>
using namespace std;

class Vehicle{
	public:
		void stop(){
			cout<<"zatrzymaj pojazd\n";
		}
};

class Car : public Vehicle{
	public:
		void stop(){
			cout<<"zatrzymaj samochód\n";
		}
};

class Bike : public Vehicle{
	public:
		void stop(){
			cout<<"zatrzymaj rower\n";
		}
};

class Rolls : public Vehicle{
	public:
		void stop(){
			cout<<"zatrzymaj rolki\n";
		}
};

int main(int argc, char** argv) {
	
	//Vehicle pojazd = new Vehicle(); //nie dzia³a
	//Vehicle pojazd;
	Vehicle *pojazd = new Vehicle();
	pojazd->stop();
	
	Rolls *rolki = new Rolls();
	rolki->stop();
	 
	return 0;
}
