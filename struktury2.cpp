#include <iostream>
using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

struct Worker{
	public:
		unsigned int id{};
		string name {}, surname{};
		Date dateBirthday{};
		
		void showAllData();
		void setData(unsigned int id);
};

void Worker::showAllData(){
	cout<<"Dane pracownika\nIdentyfikator pracownika: "<<id
	<<"Imiê i nazwisko: "<<name<<" "<<surname
	<<"Data urodzinia: "<<dateBirthday.dd<<"-"
	<<dateBirthday.mm<<"-"
	<<dateBirthday.yyyy<<endl;
	
};
	void Worker::setData(unsigned int id){
	Worker::id=id;
};
 argc, char** argv) {
	setlocal
int main(inte(LC_CTYPE, "polish");
	
	Worker kowalski;
	kowalski.setData;
	kowalski.showAllData;
	
	return 0;
}
