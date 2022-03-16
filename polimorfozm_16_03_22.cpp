#include <iostream>
using namespace std;

class c1{
	int a, b, c;
	virtual void f(){
		cout<<"Funkcja"<<endl;
	}
};

class c2{
	int a, b, c;
	void f1(){
		cout<<"Funkcja"<<endl;
	}
	void f2(){
		cout<<"Funkcja"<<endl;
	}
	void f3(){
		cout<<"Funkcja"<<endl;
	}
};

class c3{
	int a, b, c;
	void f(){
		cout<<"Funkcja"<<endl;
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	c1 *wsk1 = new c1;
	cout<<sizeof(*wsk1)<<endl;
	
	c2 *wsk2 = new c2;
	cout<<sizeof(*wsk2)<<endl;
	
	c3 *wsk3 = new c3;
	cout<<sizeof(*wsk3)<<endl;
	
//sizeof

cout<<"Typ int zajmuje: "<<sizeof(int)<<" bajt�w"<<endl;
cout<<"Typ char zajmuje: "<<sizeof(char)<<" bajt�w"<<endl;
cout<<"Typ string zajmuje: "<<sizeof(string)<<" bajt�w"<<endl;
cout<<"Typ float zajmuje: "<<sizeof(float)<<" bajt�w"<<endl;
cout<<"Typ double zajmuje: "<<sizeof(double)<<" bajt�w"<<endl;
cout<<"Typ bool zajmuje: "<<sizeof(bool)<<" bajt�w"<<endl;
	
	return 0;
}
