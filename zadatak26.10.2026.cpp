#include <iostream>
using namespace std;

const double CIJENA_ULAZNICE = 5.0;
const int PRAG_POPUSTA = 5;
const double STOPA_POPUSTA = 0.10;

int ukupnoUlaznica = 0;
double ukupniPrihod = 0.0;

bool ispravanUnos(int kolicina);
double izracunajIznos(int kolicina);
void evidentirajKupnju(int kolicina, double iznos);
void ispisiKupnju(int redniBroj, double iznos);
void ispisiSazetak();

int main() {
    int kolicina;
    double iznos;

    for (int i = 1; i <= 3; i++) {
        cout << "Unesi broj ulaznica za kupnju " << " (1-30): ";
        cin >> kolicina;

        while (!ispravanUnos(kolicina)) {
            cout << "Neispravan unos! Unesi broj od 1 do 30: ";
            cin >> kolicina;
        }

        iznos = izracunajIznos(kolicina);
        evidentirajKupnju(kolicina, iznos);
        ispisiKupnju(i, iznos);
    }

    cout << endl;
    ispisiSazetak();

    return 0;
}

bool ispravanUnos(int kolicina) {
    if (kolicina >= 1 && kolicina <= 30) {
        return true;
    }
    else {
        return false;
    }
}

double izracunajIznos(int kolicina) {
    double osnovniIznos = kolicina * CIJENA_ULAZNICE;
    double konacniIznos = osnovniIznos;

    if (kolicina >= PRAG_POPUSTA) {
        konacniIznos = osnovniIznos * (1 - STOPA_POPUSTA);
    }

    return konacniIznos;
}

void evidentirajKupnju(int kolicina, double iznos) {
    ukupnoUlaznica = ukupnoUlaznica + kolicina;
    ukupniPrihod = ukupniPrihod + iznos;
}

void ispisiKupnju(int redniBroj, double iznos) {
    cout << "Kupnja " << redniBroj << ": "
         << iznos << " EUR" << endl;
}

void ispisiSazetak() {
    cout << "Ukupno prodanih ulaznica: "
         << ukupnoUlaznica << endl;

    cout << "Ukupni prihod: "
         << ukupniPrihod << " EUR" << endl;
}