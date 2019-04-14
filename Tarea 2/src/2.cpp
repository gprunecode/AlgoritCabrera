#include <iostream>

using namespace std;

int main (int argc, char** argv){
		
double monto, desembolso;


cout<<"Ingrese monto: ";
cin>>monto;

if (monto > 500000){
	
	desembolso = 0.55*monto + 0.30*monto + 0.15*monto*1.2;	
	
}else{
	
	desembolso = 0.70*monto + 0.30*monto*1.2;
	
}	

cout<<"El desembolso es: "<<desembolso<<endl;
	
}			
