#include <iostream>
using namespace std;

double zbroji(double a, double b) {
    return a + b;
}

double oduzmi(double a, double b) {
    return a - b;
    
    
}

double pomnozi(double a, double b) {
    return a * b;
}

double podijeli(double a, double b) {
    return a / b;
}

void ispisiRezultat(double rezultat) {
    cout << rezultat << endl;
}

int main() {
    double a, b;

    cout << "Unesi dva broja podijeljena razmakom: ";
    cin >> a >> b;

    cout << "Zbroj: ";
    ispisiRezultat(zbroji(a, b));

    cout << "Razlika: ";
    ispisiRezultat(oduzmi(a, b));

    cout << "Umnozak: ";
    ispisiRezultat(pomnozi(a, b));
    
    if(b!=0)
    { 
    cout << "Kolicnik: "; 
    ispisiRezultat(podijeli(a, b));
    }
    else cout << "Drugi broj je nula";

    

    return 0;
}
