#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){

int n;

vector<int> myvector;


std::vector<int>::iterator it;
int max=0;
int min=10000000000;

for(it=myvector.begin();it!=myvector.end();it++){
if((*it)>max){max=(*it);}
}
for(it=myvector.begin();it!=myvector.end();it++){
if((*it)<mim){min=(*it);}
}

int resultado=abs(max-min);

}
