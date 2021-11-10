#include <iostream>
using namespace std;

class Animal{
	public:
		static int s_count;
		
		Animal();
		~Animal();
};

int Animal::s_count = 0;

void createObjectAnimal(){
Animal newAnimal;
}

Animal::Animal(){
	s_count++;
	cout<<"Nowa iloœæ obiektów to: "<<s_count<<endl;
}
Animal::~Animal(){
	s_count--;
	cout<<"Nowa iloœæ obiektów to: "<<s_count<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Animal Lew;
	Animal Pantera;
	
	return 0;
}
