#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	fstream file;
	file.open("plik.txt", ios::in);
	int tab[5];
	bool fileOpen = false;
	//good() = is_open()
	
	if(file.good()){
		for(int i=0; i<sizeof(tab)/sizeof(int); i++){
			file>>tab[i];
		}
		file.close();
		
		
		fileOpen=true;
	}
	
	else{
		fileOpen=false;
	}
	if(fileOpen){
		for(int i=0; i<sizeof(tab)/sizeof(int); i++){
			cout<<tab[i]<<" ";
		}
	}
	else{
		cout<<"Otwarcie pliku nie powiod³o siê\n";
	}
	return 0;
}
