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
//Escriba una función de C ++ que verifica si es palindromo

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

int tamanio(node *n){
	int solucion=1;
	while(n->next!=0){
		n=n->next;
		solucion++;	
	}
	
	return solucion;
}
bool comprobacion(bool es_palindromo,node *principio,int i,node *n1,node *&n2){
	if(es_palindromo){
		if(i<tamanio(principio)/2){
			return (es_palindromo=comprobacion(es_palindromo,principio,i+1,n1,n2));
		}
		else{
			if(n1->informacion==n2->informacion){
					n2=n2->next;
					return true;}
			else{return false;}
		}		
	}
	else{return false;}
}

bool es_palindromo(node *n){
node *copia=new node;
node *fin=new node;
copia=n;
fin=n;
bool es_palindromo=true;
for(int i=0;i<=tamanio(n)/2;i++){
fin=fin->next;		
}
return comprobacion(es_palindromo,n,0,copia,fin);
}

int main(){
	node *n1=new node();
	crear(5,n1);
	//listar(n1);
	push(5,n1,5);
	//listar(n1);
	push(4,n1,5);
	//listar(n1);
	push(3,n1,5);
	//listar(n1);
	push(5,n1,5);
	listar(n1);
	cout<<"el tamanio es "<<tamanio(n1)<<endl;
	if(es_palindromo(n1)){cout<<"es palindromo"<<endl;}
	else{cout<<"no lo es"<<endl;}
} 
