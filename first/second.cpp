#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){

int n;


cout<<"give me the number"<<endl;

cin>>n;
int n1=n;
vector<int> aux;


while(n1!=0){
int naux=n1%10;
aux.push_back(naux);
n1=n1/10;
}
cout<<"lega aqui"<<endl;
int i=0;
int solucion=0;
std::vector<int>::iterator it;

for(it=aux.end();it>=aux.begin();it--){
if(it!=aux.end()){
solucion=solucion+(*it)*pow(10,i);
i++;
}}

cout<<"la solucion es "<< solucion;

}
