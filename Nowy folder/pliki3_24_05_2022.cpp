#include <iostream>
#include <fstream>
using namespace std;

struct football{
	string nameSurname, club;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	ifstream file("plik.txt");
	
	football pilkarz;
	if(file){
		getline(file, pilkarz.nameSurname);
		getline(file, pilkarz.club);
		file.close();
		cout<<"dane o pi�karzu:\n"<<"imi� i nazwisko:"<<pilkarz.nameSurname<<endl<<"Klub: "<<pilkarz.club;
	}
	
	else{
		cout<<"Otwarcie pliku nie powiod�o si�\n";
	}
	
	return 0;
}
