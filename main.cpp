#include <iostream>

using namespace std;

class Worker{
    public:
//deklaracja zmiennych cz�onkowskich (w���ciwo�ci)//
    string name = "Janusz";
    string surname;
//definicja funkcji cz�onkowskiej (metoda)//
    void showData(){
     cout << "Imi�";
    };
};

int main(int argc, char** argv){
Worker pracownik;
    setlocale(LC_CTYPE,"polish");

    cout << pracownik.name;
    pracownik.showData();

    pracownik.surname = "kowalski";
    pracownik.name = "Andrzej";
    cout << "imię i nazwisko" << pracownik.name << " " << pracownik.surname;
    return 0;
}
