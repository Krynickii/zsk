#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;
		void getData();
		Worker(){
			cout<<"konstrktor domy�lny"<<endl;
		}
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout<<"destruktor"<<endl;
		}
};

void Worker::getData(){
	cout<<"Imi� i nazwisko"<<endl;
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
	{
	cout<<"kontruktor parametryczny"<<endl;
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker Kowalski;
	
	return 0;
}
