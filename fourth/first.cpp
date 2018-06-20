#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>

using namespace std;
bool iguales(vector<int> v1,vector<int> v2){
  if(v1.size()!=v2.size()){return false;}
  else{
    std::vector<int>::iterator it2=v2.begin();
    std::vector<int>::iterator it1;
    for(it1=v1.begin();it1<v1.end() && it2<v2.end();it1++){
      if((*it1)!=(*it2)){return false;}
      it2++;
    }
    return true;
  }
}
bool incluye(vector<int> v1,vector<int> v2){
  std::vector<int>::iterator it1=v1.begin();
  std::vector<int>::iterator it2;
  for(it2=v2.begin();it2<v2.end();it2++){
      if(it1==v1.end()){return true;}
      else{
            if(*it1==*it2){it1++;}
            else{it1=v1.begin();}
    }
  }
  return false;
}

int funcion(vector<int> v1,vector<int> v2){
  if(iguales(v1,v2)){return 0;}
  else{
    if(incluye(v1,v2)){return 1;}
    else{
        if(incluye(v2,v1)){return 2;}
        else{return 3;}
    }
  }
}


int main(){

std::vector<int> t1;
std::vector<int> t2;
std::vector<int> t3;
std::vector<int> t4;
t3.push_back(0);t3.push_back(0);t3.push_back(0);t3.push_back(0);//0000
t4.push_back(0);t4.push_back(0);t4.push_back(0);t4.push_back(0);//0000
t1.push_back(1);t1.push_back(2);t1.push_back(3);t1.push_back(4);t1.push_back(5);//12345
t2.push_back(1);t2.push_back(2);t2.push_back(3);t2.push_back(4);//1234
cout<<" "<<"son iguales "<<funcion(t3,t4)<<endl;
cout<<" "<<"1 contiene 2 "<<funcion(t2,t1)<<endl;
cout<<" "<<"2 contiene 1 "<<funcion(t1,t2)<<endl;
cout<<" "<<"nada "<<funcion(t1,t4)<<endl;


}
