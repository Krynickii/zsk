#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	ifstream file("plik.txt");
	if(file){
		string lineOfText;
		while(!file.eof()){
			getline(file, lineOfText);
			cout<<lineOfText<<endl;
		}
		file.close();
	}
	else{
		cout<<"Otwarcie pliku nie powiod�o si�\n";
	}
	
	return 0;
}
