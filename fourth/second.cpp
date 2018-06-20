#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>


using namespace std;

struct pieza(
  string colour;
  string type;
  int x;
  int y
);

bool torre(pieza p1,pieza p2){
  if(p1.colour!=p2.colour){
        if (p1.x==p2.x || p1.y==p2.y){return true;}
        else{return false;}
        }
else{return false;}
}

bool alfil(pieza p1,pieza p2){
  if(p1.colour!=p2.colour){
    if(abs(p1.x-p2.x)==abs(p1.y-p2.y)){return true;}
    else{return false;}
  }
  else{return false;}
}
bool caballo(pieza p1,pieza p2){
    if(p1.colour!=p2.colour){
      if(p1.x-p2.x==-1 || p1.x-p2.x==-2 || p1.x-p2.x==2 || p1.x-p2.x==1){
        if(p1.y-p2.y==-1 || p1.y-p2.y==-2 || p1.y-p2.y==2 || p1.y-p2.y==1){
          return true;}
        else{return false;}
      }
      else{return false;}
  }
else{return false;}
}
bool reina(pieza p1,pieza p2){
    if(p1.colour!=p2.colour){
      return (torre(p1,p2) || alfil(p1,p2))
    }
    else{return false;}
}
bool peon(pieza p1,pieza p2){
  if(p1.colour!=p2.colour){
      if((p1.x-1==p2.x && p1.y-1==p2.y)|| (p1.x-1==p2.x && p1.y+1==p2.y))

  }
    else{return false;}

}
bool rey(pieza p1,pieza p2){
  if(p1.x==p2.x || p1.y==p2.y){return true;}
  else{return false;}

}

bool ataque(pieza p1,pieza p2){
  if(p1=="reina"){return reina(p1,p2);}
  if(p1=="peon"){return peon(p1,p2);}
  if(p1=="alfil"){return alfil(p1,p2);}
  if(p1=="torre"){return torre(p1,p2);}
  if(p1=="caballo"){return caballo(p1,p2);}
}



int main(){



}
