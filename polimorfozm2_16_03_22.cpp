#include <iostream>
using namespace std;

class Animal{
	public:
	float weight, age;
	void look(){
		cout<<"zwierz� patrzy"<<endl;
	}
	virtual void breathe(){
		cout<<"zwierz� oddycha"<<endl;
	}
};
class Fish : public Animal{
	public:
	virtual void breathe(){
		cout<<"Oddycha skrzelami"<<endl;
	}
	void swim(){
		cout<<"P�ywa"<<endl;
	}
};

class Mammal : public Animal{
	public:
	virtual void breathe(){
		cout<<"Oddycha p�ucami"<<endl;
	}
	void swim(){
		cout<<"Biega"<<endl;
	}
};

class Bird : public Animal{
	public:
	virtual void breathe(){
		cout<<"Oddycha p�ucami"<<endl;
	}
	void swim(){
		cout<<"Lata"<<endl;
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Fish karp;
	Animal *wsk = &karp;
	wsk->breathe();
	
	Bird gawron;
	wsk = &gawron;
	
	return 0;
}
