#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
//-------------------------------------------------------------FUNCION DE EXPORTAR A .html--------------------------------------------------------
void exportat(string cadena,string nombre)
{
nombre=nombre+".html";
//convert to char to be able to create the file
char *cstr = new char[nombre.length() + 1];
strcpy(cstr, nombre.c_str());
//create the file and send the text to the file
ofstream fs(cstr);
fs<<cadena;
//close the file descriptor
cout<<"The "<<nombre<<" has been created"<<endl;
fs.close();
}
//______________________________________________________FUNCION PARA SEPARAR DOS CADENAS SEGUN UN DELIMITADOR_____________________________________
void sacarcadena(string &original,string &s1,string &s2,string delimitador){
  s1=original.substr(0,original.find(delimitador));
  s2=original.substr(original.find(delimitador)+1,original.size());
}
//_____________________________________________________FUNCION PARA LEER LOS TEXTOS CON LOS SIGNIFICADOS DE LAS EXPRESIONES-----------------------
bool load(map<string,string> & caracteres, const string & s,string delimitador) {
 ifstream fe;
 string cadena;

 cout << "Open  "<< s << endl;
 fe.open(s.c_str(), ifstream::in);
 if (fe.fail()){
   cerr << "Error to open the file" << s << endl;
 }
 else {
	getline(fe,cadena,'\n');
	//read the line until the end
	while (cadena!="fin" ){
		string original= cadena;
		string s1,s2;
		//divide the string into two string delimiter 
		sacarcadena(original,s1,s2,delimitador);
		//add to the map caracteres the key and the value
		caracteres.insert(pair<string,string>(s1,s2));
		getline(fe,cadena,'\n');
    	}
    	fe.close();
    	return true;
 } 
 fe.close();
 return false;
}

/*****************************************************************MAIN**************************************************************************/
int main(int argc, char *argv[]){
if(argc<=2){
	cout<<"error it must be= ./lectura name_out_file_noneededputtheformat the text written with spaces"<<endl;
}
else{  
	string cualquiera,solucion,minisolucion,copia;
	  map<string,string>mymap;//create the container map
	  //load the two files 
	  load(mymap,"/home/el_h0racu0/Documents/introducere to progromming/Proyecto/abreviaciones.txt",":");
	  load(mymap,"/home/el_h0racu0/Documents/introducere to progromming/Proyecto/emoticonos/emoticonos.txt"," ");
	  std::map<string,string>::iterator it;//create an iterator about the map

	//read each word passes has parameter
	for(int i=2;i<argc;i++){
	  string minicopia(argv[i]);
	  copia=copia+minicopia;
	  copia=copia+" ";
	}
	//translate the original text into the translated one, searching on the map if there is any translation posible
	while(copia.size()!=0){
	  minisolucion=copia.substr(0,copia.find(" "));
	  copia=copia.substr(copia.find(" ")+1,copia.size());
	  if(mymap.find(minisolucion)!=mymap.end()){
	    solucion=solucion+mymap.find(minisolucion)->second;
	  }
	  else{
	    solucion=solucion+minisolucion;
	  }
	  solucion=solucion+" ";
	}

	//to be a text on html written
	string comienzo="<tittle>H0racul0</tittle><body><p>";
	string finali="</p></body>";
	string total=comienzo+solucion+finali;

	//to export to html
	exportat(total,argv[1]);
 }
}
