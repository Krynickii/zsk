#include <iostream>
using namespace std;

class longsquare{
	public:
		float tiny;
		float large;
	
	void showField();
	void showLong();
	void showAll();
	};
	
	void longsquare::showField(){
		cout<<"Pole wynosi: "<<tiny*large<<endl;
	};
	void longsquare::showLong(){
		cout<<"Obw�d wynosi: "<<2*tiny+2*large<<endl;
	};
	void longsquare::showAll(){
		cout <<"D�ugo�ci bok�w wynosz�: "<<tiny<<" "<<large<<"  "<<"Pole wynosi: "<<tiny*large<<"  "<<"Obw�d wynosi: "<<2*tiny+2*large<<endl;
	};
	
	int main(int argc, char** argv) {
		setlocale(LC_CTYPE,"Polish");
		
		longsquare prostokat;
		cout<<"wprowad� d�ugo�ci bok�w"<<endl;
		cin>>prostokat.tiny;
		cin>>prostokat.large;
	
	prostokat.showField();
	prostokat.showLong();
	prostokat.showAll();
	return 0;
}
