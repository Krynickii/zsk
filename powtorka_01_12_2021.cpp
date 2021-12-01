#include <iostream>
using namespace std;

class Worker{
	private:
		string name, surname, pesel;
	public:
		short int height;
		void setName(string pName);
		string getName();
		Worker(string, string, string, short int);
		void getData();
};

void Worker::getData(){
    cout<<"imiê: "<<name<<endl;
    cout<<"nazwisko: "<<surname<<endl;
    cout<<"pesel: "<<pesel<<endl;
    cout<<"wzrost: "<<height<<endl;
}

void Worker::setName(string pName){
    name=pName;
}

string Worker::getName(){
	return name;
}

Worker::Worker(string pName, string pSurname, string pPesel, short int pHeight){
	name = pName;
	surname = pSurname;
	pesel = pPesel;
	height = pHeight;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");

	Worker Nowak("Janusz", "Nowak", "0123456789", 189);

	Worker *wsk=&Nowak;
	wsk ->setName("Krstian");

    Nowak.getData();

	return 0;
}
