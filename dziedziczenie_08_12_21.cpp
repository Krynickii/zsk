#include <iostream>
using namespace std;

//klasa bazowa
class Worker{
	public:
		string name{" "};
		string surname{" "};
		string getData(){
			return name + " " + surname + "\n";
		}
};

//klasa pochodna
class Teacher: public Worker{
	public:
	string classesAtSchool {""};
	string getData(){
		return name + " " + surname + " " + classesAtSchool + "\n";
	}
};

class Wychowawca: public Worker{
	public:
		static string classWych;
		string getDataW(){
			return name + " " + surname + " " + classWych + "\n";
		}
};

string Wychowawca::classWych = "2E"

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Teacher nowak;
	Wychowawca kamil;

	nowak.name="Marek";
	nowak.surname="Pawlak";
	nowak.classesAtSchool="PO";
	cout << "Dane nauczyciela: "<<nowak.getData()<<endl;

	kamil.name="Kamil";
	kamil.surname="Kowalski";
	cout<<"Dane wychowawcy: "<<kamil.getDataW()<<endl;

	return 0;
}
