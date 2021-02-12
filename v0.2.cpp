#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void ireminimas(string eil){
    int n=eil.size();
    string pr("* ");
    string pab(" *");
    string eil2(pr+string(n, ' ')+pab);
    string eil1(eil2.size(), '*');
    string eil3(pr+eil+pab);
    string eil4=eil2;
    string eil5=eil1;

    cout<<eil1<<endl;
    cout<<eil2<<endl;
    cout<<eil3<<endl;
    cout<<eil4<<endl;
    cout<<eil5<<endl;
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
    string eil, vardas, v;
    cout<<"Iveskite savo varda: ";
    cin>>vardas;
    if(vyr(vardas)){
        eil="Sveikas, "+vardas+"!";
    }
    else{
        eil="Sveika, "+vardas+"!";
    }
    ireminimas(eil);
}
