#include <iostream>

using namespace std;

int main(){
	
	double herencia, reparto, plus1, plus2, plus3;
	int edad1, edad2, edad3;
	char con1, con2, con3;
	
	cout<<"Ingrese el monto de la herencia: "<<endl;
	cin>>herencia;
	
	cout<<"Ingrese edad de la persona 1: "<<endl;
	cin>>edad1;
	cout<<"Ingrese consangueneidad de la persona 1 (1/2): "<<endl;
	cin>>con1;
	cout<<"Ingrese edad de la persona 2: "<<endl;
	cin>>edad2;
	cout<<"Ingrese consangueneidad de la persona 2 (1/2): "<<endl;
	cin>>con2;
	cout<<"Ingrese edad de la persona 3: "<<endl;
	cin>>edad3;
	cout<<"Ingrese consangueneidad de la persona 3 (1/2): "<<endl;
	cin>>con3;
	
	if (con1 == '1'){
		plus1 = 0.5*edad1;
	}else{
		plus1 = 0.6*edad1;
	}
	
		if (con2 == '1'){
		plus2 = 0.5*edad2;
	}else{
		plus2 = 0.6*edad2;
	}
	
		if (con3 == '1'){
		plus3 = 0.5*edad3;
	}else{
		plus3 = 0.6*edad3;
	}
	
	reparto = herencia - (plus1+plus2+plus3);
	
	cout<<"Persona 1 recibe: "<<(reparto/3) + plus1<<endl;
	cout<<"Persona 2 recibe: "<<(reparto/3) + plus2<<endl;
	cout<<"Persona 3 recibe: "<<(reparto/3) + plus3<<endl;	
	
}
