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
	cout<<"Imiê i nazwisko"<<endl;
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
