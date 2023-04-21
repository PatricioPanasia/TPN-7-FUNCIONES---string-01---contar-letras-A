#include <iostream>
#include <string>
using namespace std;
int contarletraA (string f);

int main(){
	string f;
	cout<<"ingrese frase"<<endl;
	getline (cin,f);
	cout<<"El valor total de las letras es: "<<contarletraA(f);
	return 0;
}
int contarletraA(string f){
	int i;
	int x=0;
	int cont=0;
	
	for(i=0;i<f.size();i++){
		if(f[i]=='a' || f[i]=='e'){
			cont++;
		}
		if(f[i]=='o' || f[i]=='s'){
			cont+2;
		}
		if(f[i]=='d' || f[i]=='i'){
			cont+3;
		}
		if(f[i]=='n' || f[i]=='r'){
			cont+3;
		}
		if(f[i]=='c' || f[i]=='l'){
			cont+4;
		}
		if(f[i]=='t' || f[i]=='u'){
			cont+4;
		}
		if(f[i]=='m' || f[i]=='p'){
			cont+5;
		}
		if(f[i]=='b' || f[i]=='f'){
			cont+6;
		}
		if(f[i]=='g' || f[i]=='h'){
			cont+6;
		}
		if(f[i]=='j' || f[i]=='q'){
			cont+6;
		}
		if(f[i]=='v' || f[i]=='x'){
			cont+6;
		}
		if(f[i]=='y' || f[i]=='z'){
			cont+6;
		}
		if(f[i]=='k' || f[i]=='w'){
			cont+7;
		}
	}
	
	return cont;
}