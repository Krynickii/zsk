#include <iostream>

using namespace std;

class School{
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		void  getData();
		void setNameSurname(string name, string surname);
		
		static void s_getSchool();
};

string  School::s_school="ZSK";
string School::s_jobPosition="Uczeñ";

void School::getData(){
	cout<<"Imiê i Nazwisko: "<<name<<" "<<surname<<endl;
	
}

void School::setNameSurname(string name, string pSurname){
	School::name=name;
	surname=pSurname;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	cout<<School::s_school<<endl;
	cout<<School::s_jobPosition<<endl;
	
	School kowal;
	kowal.setNameSurname("Krystyna", "Kowal");
	kowal.getData();
	
	School::s_jobPosition="nauczyciel";
	cout<<"stanowisko: "<<School::s_jobPosition<<endl;
	cout<<kowal.s_jobPosition;
	
	kowal.s_jobPosition="Dyrektor";
	cout<<School::s_jobPosition;
	
	return 0;
}
