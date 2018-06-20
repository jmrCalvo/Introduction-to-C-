#include <iostream>
#include <cmath>


using namespace std;


int funcion(float a0,float x){

  float an=(pow(a0,2)+x)/(2*a0)
  if(fabs(an)-fabs(a0)==0.000000001){
        return an;
  }
  else{
    funcion(an,x)
  }
}



int main(){

float n;
cout<<"dame un numero";
cin>>n

cout<<"el numero es "<<funcion(1,n);

}
