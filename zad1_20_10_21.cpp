#include <iostream>
using namespace std;

class Book{
	public:
		string title;
		string author;
		
		string getTitle();
		string getAuthor();
		string setAuthor();
};

Book::getTitle(){
	cout<<"tytu³: "<<title<<endl;	
}
Book::getAuthor(){
	cout<<"autor: "<<author<<endl;
}
Book::setAuthor(){
	cout<<"podaj autora: "<<endld
	cin>>author;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Book Bok;
	
	Bok.setAuthor();
	Bok.getAuthor();
	
	return 0;
}
