#include <iostream>
using namespace std;
int main (){
	
	int numeroEntradas;
	double precioEntrada, montoFinal;
	char ubicacion, tipoPago;
	
	cout<<"Ingrese numero de entradas: "<<endl;
	cin>>numeroEntradas;
	
	cout<<"Ingrese ubicacion: Super Vip (1), Vip (2), Platea (3): "<<endl;
	cin>>ubicacion;	
	
	cout<<"Ingrese tipo de pago En efectivo (1), Credito (2): "<<endl;
	cin>>tipoPago;	
	
	if (numeroEntradas <= 4){
		switch (ubicacion){
			case '1':precioEntrada=245;break;
			case '2':precioEntrada=123;break;
			case '3':precioEntrada=57;break;
			default :"Ubicacion no valida";
		}	
	}
	
	if (numeroEntradas > 4){
		switch (ubicacion){
			case '1':precioEntrada=315;break;
			case '2':precioEntrada=197;break;
			case '3':precioEntrada=98;break;
			default :"Ubicacion no valida";
		}
	}
		
	if (tipoPago == '1'){
		montoFinal =  precioEntrada*numeroEntradas*0.9;	
	}else{
		montoFinal = precioEntrada*numeroEntradas;
		
	}
	
	cout<<"El monto final es: "<<montoFinal<<" soles"<<endl;
			
	
}
 
 
