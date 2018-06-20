#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
struct node{
int informacion;
node *next;
};
//Escriba una función de C ++ que inserta un cierto valor antes de un elemento dado de una lista encadenada simple.

void crear(int valor,node *&n1){
	n1->informacion=valor;
	n1->next=0;

}



void push(int valor, node *&nodo,int valor_buscado){
	if(nodo->informacion==valor_buscado){
		node *n1=new node();
		n1->informacion=valor;
		n1->next=nodo;
		nodo=n1;
	}else{
		node *copia=new node;
		copia=nodo;
		while(copia->next->informacion!=valor_buscado){copia=copia->next;} 
		node *n1=new node();
		n1->informacion=valor;
		n1->next=copia->next;
		copia->next=n1;
	} 
}
void listar(node *n1){
	while(n1!=0){
	cout<<"the element n is "<<n1->informacion<<endl;
	n1=n1->next;
	}
}


int main(){
	node *n1=new node();
	crear(5,n1);
	//listar(n1);
	push(6,n1,5);
	//listar(n1);
	push(7,n1,5);
	//listar(n1);
	push(8,n1,5);
	//listar(n1);
	push(9,n1,5);
	listar(n1);
} 
