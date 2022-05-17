#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	srand(time(NULL));
	int game = 1;
	int choise = 0;
	int przerwa;

	cout<<"Menu:"<<endl;
        cout<<"0 - Wyjœcie"<<endl;
        cout<<"1 - Totolotek"<<endl;
        cout<<"2 - Ulubiony kolor"<<endl;
            cin>>choise;

	while(game==1){

            if (choise<0||choise>2){
            cout<<"error"<<endl;
        };

        switch(choise){
        case 0:
            cout<<"wyjœcie";
            game = 0;
            return 0;
        break;

        case 1:{
            int wylosowane[6];
            int podane[6];
            int trafione = 0;

            cout<<"pula liczb od 1 do 10"<<endl;
            cout<<endl;

            for(int i=0; i<6;i++){
                wylosowane[i] = rand() % 10 + 1;
                cout<<"podaj "<<i+1<<". liczbê:"<<endl;
                cin>>podane[i];
                cout<<endl;
            }
            cout<<"liczby wylosowane:"<<endl;
            for(int y=0; y<6; y++){
                cout<<wylosowane[y]<<endl;
            }
            for(int a=0; a<6;a++){
                for(int b=0; b<6;b++){
                    if(podane[a]==wylosowane[b]){
                        trafione+=1;
                    }
                }
            }
            cout<<"iloœæ liczb trafionych: "<<trafione<<endl;

            cout<<"Menu:"<<endl;
        cout<<"0 - Wyjœcie"<<endl;
        cout<<"1 - Totolotek"<<endl;
        cout<<"2 - Ulubiony kolor"<<endl;
            cin>>choise;

             system("cls");
        }
            break;

        case 2:
            string color;
            cout<<"jaki jest twój ulubiony kolor?"<<endl;
            cin>>color;
            cout<<"twój ulubiony kolor to: "<<color<<endl;

            cout<<"Menu:"<<endl;
        cout<<"0 - Wyjœcie"<<endl;
        cout<<"1 - Totolotek"<<endl;
        cout<<"2 - Ulubiony kolor"<<endl;
            cin>>choise;
            system("cls");

        break;
	}
	}
}

