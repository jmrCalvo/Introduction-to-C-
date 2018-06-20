#include <iostream>
#include <vector>

using namespace std;

int fibonacii(int ini,int fin,int pos,int ya){
  if(pos==ya){return ini;}
  else{
    int aux=ini+fin;
    fin=ini;
    ini=aux;
    fibonacii(ini,fin,pos+1,ya);
  }
}




int main(){

int t=3;

int ini=0;
int fin=1;

cout<<fibonacii(ini,fin,0,t);
}
