#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void ireminimas(string eil, int plotis){
    string pasisveikinimas("* "+eil+" *");

    int n=eil.size();
    int ilgis=pasisveikinimas.size();

    cout<<string(ilgis, '*')<<endl;
    for(int i=0; i<plotis; i++){
        cout<<"*"<<string(n+2, ' ')<<"*"<<endl;
    }
    cout<<pasisveikinimas<<endl;
    for(int i=0; i<plotis; i++){
        cout<<"*"<<string(n+2, ' ')<<"*"<<endl;
    }
    cout<<string(ilgis, '*')<<endl;
}

bool vyr(string vardas){
    char r=vardas.back();
    if(r=='s'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int plotis;
    string eil, vardas, v;
    cout<<"Iveskite savo varda: ";
    cin>>vardas;
    if(vyr(vardas)){
        eil="Sveikas, "+vardas+"!";
    }
    else{
        eil="Sveika, "+vardas+"!";
    }
    cout<<"Iveskite remelio ploti: ";
    cin>>plotis;
    ireminimas(eil, plotis);
}
