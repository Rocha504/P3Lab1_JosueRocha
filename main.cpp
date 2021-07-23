#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <math.h>


int menu();


int main(int argc, char** argv) {
	
	int op;
	op=menu();
	if(op==1){
		int n;
		double acum=0;
		cout<<"Ingrese un valor"<<endl;
		cin>>n;
		for(int i=1;i<=n;i++){
			double aux1=2*i-1;
			double aux2=i*(i+1);
			double aux3=aux1/aux2;
			acum+=aux3;  
		}
		cout<<acum<<endl;	
	}	
	 else
		if(op==2){
			double x;
			double sig;
			cout<<"ingrese un valor"<<endl;
			cin>>x;
			double aux1=1;
			double aux2=1+exp(x);
			sig=aux1/aux2;
			cout<<sig<<endl;
		}
	
	return 0;
}
	int menu(){
		int op;
		cout<<"1-Calcular Sumatoria."<<endl;
		cout<<"2-Calcular funcion sigmoide"<<endl;
		cout<<"Porfavor ingrese una opcion."<<endl;
		cin>>op;
		return op;
	}
	 