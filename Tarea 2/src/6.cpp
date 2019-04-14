#include <iostream>

using namespace std;

int main (){
	
	char tipoEnfermedad;
	int edad;
	double costoPaciente;
	
	cout<<"Ingrese tipo de enfermedad (0/1/2/3): "<<endl;
	cin>>tipoEnfermedad;
	
	cout<<"Ingrese edad del paciente: "<<endl;
	cin>>edad;
	
	switch(tipoEnfermedad){
		
		case '0': costoPaciente= 25;
		break;
		case '1': costoPaciente= 16;
		break;
		case '2': costoPaciente= 20;
		break;
		case '3': costoPaciente= 32;
		break;
		default:cout<<"Entrada invalida"<<endl;
		
	}
	
	if (edad >= 14 && edad <= 22){
			costoPaciente = costoPaciente*1.1;
	}
	
	cout<<"El costo del paciente es: "<<costoPaciente<<endl;

}
