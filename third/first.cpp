#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

//ejercicio 6

int next(int number){
  if(number/2==1){return 3;}
  else{
    return number%2;
  }

}

void sumBinaryFigure(int number,vector<int> &n){
    int numero;

    if((numero=next(number))==3){
      n.push_back(number%2);
      n.push_back(number/2);    }
    else{
      n.push_back(numero);
      number=number/2;
      sumBinaryFigure(number,n);
    }
}


int main(){


vector<int> n;

int t=28;
int pos=0;

  sumBinaryFigure(t,n);
  int solucion[n.size()];
for(int i=0;i<n.size();i++){
    solucion[i]=n[n.size()-1-i];
  }
for(int i=0;i<n.size();i++){
  cout<<solucion[i]<<" ";
}
}
