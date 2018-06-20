#include <iostream>



using namespace std;


bool es_palindromo(int tama,int cadena[]){
for(int i=0;i<tama/2;i++){
  if(cadena[i]!=cadena[tama-1-i]){return false;}
}
return true;
}



bool es_p(int number){
int n[100];
int i=0;
while (number/10!=0) {
  n[i]=number%10;
  number=number/10;
  i++;
}
return es_palindromo(i,n);
}


int main(){
int t=1010;
cout<<"fjfjfj";
if(es_p(t)){cout<<"si";}
else{cout<<"no";}
}
