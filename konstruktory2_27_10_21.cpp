#include <iostream>
using namespace std;

class Worker{
	public:
		int id{8};
		string name{"Katarzyna"};
		string surname{"Nowak"};
		
		Worker(int pId=1, string pName="Name", string pSurname="Surname");
		
		void getData();
};

Worker::Worker(){
	id=13;
	name="dimiê";
	surname="dnazwisko"
}

Worker::Worker(int pId, string pName, string pSurname){
	id=pId;
	name=pName;
	surname=pSurname;
}

void Worker::getData(){
	cout<<"Id: "<<id<<"\Imiê: "<<name<<", nazwisko: "<<surname<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker nowak = Worker();
	nowak.getData();
	
	Worker nowak1 = Worker(10, "Krystyna", "Pawlak");
	nowak1.getData();
	return 0;
}
