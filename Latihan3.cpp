#include <iostream>
using namespace std;

double P, L;
void input (){
    cout << "masukan panjang = ";
    cin >> P;
    cout << "masukan lebar = ";
    cin >> L;
}

double process (){
    return P*L;
}


double process2 (double a, double b){
    return a*b;
}

void output (){
    cout << "Luasnya = " << process();
    cout << "\nLuas ke 2 = " << process2(P,L);
}

int main (){
    input();
    process();
    output();
}