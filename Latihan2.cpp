#include <iostream>
using namespace std;

double Luas, P, L;
void input (){
    cout << "masukan panjang = ";
    cin >> P;
    cout << "masukan lebar = ";
    cin >> L;
}

void process (){
    Luas = P*L;
}

void output (){
    cout << "Luasnya = " << Luas;
}

int main (){
    input();
    process();
    output();
}