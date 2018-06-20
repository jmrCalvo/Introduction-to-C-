#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;
struct node{
node *previous;
int informacion;
node *next;
};
//typedef node *List;

void crear(int valor,node *&n1){
	n1->informacion=valor;
	n1->previous=0;
	n1->next=0;

}
void pop(node *&pact){
	cout<<"deleting "<<cauct->informacion<<endl;
	if(cauct->next!=0){
		cauct=cauct->next;
		cauct->previous=0;	
	}
	else{
		cauct=0;	
	}
}

void push(int valor, node *&nodo){
	if(nodo==0){
		nodo->informacion=valor;
		nodo->previous=0;
		nodo->next=0;
	}
	else{
	node *n1=new node();
	n1->previous=0;
	n1->informacion=valor;
	n1->next=nodo;
	nodo->previous=n1;
	nodo=n1;
	}
} 
void listar(node *n1){
	while(n1->previous!=0){n1=n1->previous;}
	while(n1!=0){
	cout<<"the element n is "<<n1->informacion<<endl;
	n1=n1->next;
	}
}
void top(node *n1){
	while(n1->previous!=0){n1=n1->previous;}
	cout<<"the element in the top is "<<n1->informacion<<endl;

}

int main(){
	node *n1=new node();
	ifstream fe;
	const string s="/home/n30/Documentos/introducere to progromming/five/ejemplo.txt";
	fe.open(s.c_str(), ifstream::in);
	if (fe.fail()){
  		 cerr << "Error to open the file" << s << endl;
 	}
 	else {
		getline(fe,cadena,'\n');
	//read the line until the end
		while (cadena!="fin" ){
			int numero=stoi(cadena);
			push(numero,n1);
			getline(fe,cadena,'\n');
	    	}		
	}
		
	fe.close();
		
       

	listar(n1);
	pop(n1);
	pop(n1);
	cout<<"now I show how the stack is"<<endl;
	listar(n1);
	pop(n1);
	pop(n1);
	top(n1);
}
