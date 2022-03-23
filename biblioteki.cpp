#include <iostream>
#include "add.h"
using namespace std;

class Animal{
	public:
	void className(){
		cout<<"Animal"<<endl;
	}
	virtual void speak(){
		cout<<"speak"<<endl;
	}
};

class Dog : public Animal{
	public:
		void className(){
			cout<<"Dog"<<endl;
		}
		void speak() override{
		cout<<"bark"<<endl;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	//add(2, 5);
	
	Dog pies;
	Dog *wsk = &pies;
	wsk -> className();
	wsk -> speak();
	
	return 0;
}
