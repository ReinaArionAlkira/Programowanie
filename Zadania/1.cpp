#include <iostream>
using namespace std;

void zad1(){
	int g;
	cout << "Podaj ilosc gwiazdek: ";
	cin >> g;
	for(int i = 0; i < g; i++){
		
		cout << "*";
	}
	cout << endl;
}

void zad2(){
	
	int g{};
	cout << "Podaj wysokosc trojkata: ";
	cin >> g;
	cout << endl;
	for(int i = g; i > 0; i--){
		for(int j = i; j > 0; j--){
			
			cout << "*";
		}
		cout << endl;
	}
}

void zad3(){
	
	
}
int main(){
	
	//zad1();
	//zad2();
	zad3();
	system("Pause");
}
