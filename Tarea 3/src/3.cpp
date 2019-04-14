#include <iostream>
 using namespace std;
 
 int main (int argc,char** argv){
 	
 	int numero;
 	
	cout<<"Ingrese un numero"<<endl;
	cin>>numero; 
	
	if (numero % 2 == 0){
	cout<<"El numero es multiplo de 2"<<endl;	
	}
	if (numero > 12){
	cout<<"El numero es mayor que 12"<<endl;	
	}	
 		if (numero % 3 == 0){
	cout<<"El numero es multiplo de 3"<<endl;	
	}	
		if (numero < 21 ){
	cout<<"El numero es menor que 21"<<endl;	
	}	
 }
