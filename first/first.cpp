#include <iostream>
#include <cmath>


using namespace std;


int es_igual(int n1,int n2,int cifra,int i){
if(n1 ==0 && n2==0){return cifra;}
else{
int aux1=n1/10;
int aux2=n2/10;
int aux3=n1%10;
int aux4=n2%10;
if(aux3 >aux4){
cifra+=aux3*pow(10,i);
}
else{
cifra+=aux4*pow(10,i);
}
i++;
return es_igual(aux1,aux2,cifra,i);
}
}

int main(){

int i=0;
int cifra=0;
int n1,n2;
cout<<"give me the first number"<<endl;
cin>>n1;
cout<<"give me the second number"<<endl;
cin>>n2;
int resultado=es_igual(n1,n2,cifra,i);
cout<<"el resultado es "<<resultado<<endl;
}
