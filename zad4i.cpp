#include <iostream>
using namespace std;



int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	int x, y;
	x=10;
	y=x;
	
	int *p_test;
	p_test=&x;
	
	cout<<p_test;
	
	p_test=&y;
	cout<<p_test<<endl;
	
	
	
	return 0;
}
