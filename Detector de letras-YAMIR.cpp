#include <iostream>
using namespace std;

char tipoDeMayus(char);

int main() {
	char letra;
	for(int i=1; i<=10; i++){
		do{
			cin>>letra;
		} while(letra < 'A' or letra > 'Z');
		
		cout << tipoDeMayus(letra) << endl;
	}
	
	return 0;
}

char tipoDeMayus(char x){
	char tipo;
	if(x=='A' or x=='E' or x=='I' or x=='O' or x=='U'){
		tipo='V';
	}
	else if(x=='Y'){
		tipo='S';
	}
	else{
		tipo='C';
	}
	return tipo;
}
	
	
