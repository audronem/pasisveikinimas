#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void ireminimas(string eil, int n){
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

int main(){
    string vardas, v;
    cout<<"Iveskite savo varda: ";
    cin>>vardas;
    string eil="Sveikas, "+vardas+"!";
    int n=eil.size();
    ireminimas(eil, n);
    return 0;
}
