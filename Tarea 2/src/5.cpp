#include <iostream>    

using namespace std;

int main () {

	int numero;
	
	cout<<"Ingrese numero: "<<endl;
	cin>>numero;	
	
	if (numero % 2 == 0){
		cout<<numero<< " es divisible por 2"<<endl;
	}
	if (numero % 3 == 0){
		cout<<numero<< " es divisible por 3"<<endl;
	}
	if (numero % 5 == 0){
		cout<<numero<< " es divisible por 5"<<endl;
	}	
	
	if (numero % 5 != 0 && numero % 3 !=  0 && numero % 3 !=  0){
		cout<<numero<< " no es divisible por 2, ni por 3 ni por 5"<<endl;
	}
}
