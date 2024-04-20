#include<iostream>

using namespace std;

int adunare(int a,int b){
    return a+b;
}
int scadere(int a,int b){
    return a-b;
}
int inmultire(int a,int b){
    return a*b;
}
float impartire(int a,int b){
    return float(a)/b;
}
int main(){
    char operatie;
    int numar1,numar2;
    
    cout<<"Introduceti numarul 1 : ";
    cin>>numar1;
    
    cout<<"Introduceti numarul 2 : ";
    cin>>numar2;
    
    cout<<"Introduceti operatia(+,-,*,/) : ";
    cin>>operatie;
    
    switch(operatie){
        case '+':
        cout << "Rezultatul adunarii: " << adunare(numar1, numar2) << endl;
            break;
        case '-':
            cout << "Rezultatul scaderii: " << scadere(numar1, numar2) << endl;
            break;
        case '*':
            cout << "Rezultatul inmultirii: " << inmultire(numar1, numar2) << endl;
            break;
        case '/':
            cout << "Rezultatul impartirii: " << impartire(numar1, numar2) << endl;
            break;
        default:
            cout << "Operatie invalida!";
            break;
    }

    return 0;
}
  