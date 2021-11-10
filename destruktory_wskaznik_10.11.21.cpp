#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;
		void getData();
		Worker(){
			cout<<"konstrktor domyœlny"<<endl;
		}
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout<<"destruktor"<<endl;
		}
};

void Worker::getData(){
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl;
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
	{
	cout<<"kontruktor parametryczny"<<endl;
}

void createObjectWorker(){
	Worker worker;
	cout<<"Wywo³ano funkcjê createObjectWorker"<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker Nowak;
	//Worker *p_nowak = new Worker("Janusz", "Nowak");
	//p_nowak->getData();
	//delete p_nowak;
	
	createObjectWorker();
	Worker kowalski;
	
	return 0;
}
