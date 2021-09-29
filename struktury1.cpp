#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

struct Student{
	string name, surname;
	unsigned int id;
	unsigned short int gradeInformatics[5];
	Date dateBirthdate;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Student kowalski{"Janusz", "Nowak", 10, {5, 3, 4, 5, 2}, {29, 9, 2021}};
	
	cout<<"Imiê i Nazwisko: "<<kowalski.name<<" "<<kowalski.surname
		<<"\nidentyfikator u¿ytkownika: "<<kowalski.id<<"\nData urodzenia: "
		<<kowalski.dateBirthdate.dd<<"-"<<kowalski.dateBirthdate.mm<<"-"<<kowalski.dateBirthdate.yyyy<<endl;
		
	for(unsigned int i=0; i<5; i++){
		cout<<i+1<<" ocena"<<kowalski.gradeInformatics[i]<<endl;
		cout<<1+1<<" ocena: "<<kowalski.gradeInformatics[i]<<endl;
	}
	return 0;
}
