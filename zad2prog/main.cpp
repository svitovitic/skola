#include <iostream>
#include <cmath>

using namespace std;

bool jeParan(int broj)
{
    if(broj%2==0) cout << "Paran";
    else cout << "Neparan";
}

int apsolutnaVrijednost(int broj)
{
    broj = abs(broj);
    return broj;
}

int kvadrat(int broj)
{
    broj *= broj;
    return broj;
}

void IspisiAnalizu(int broj)
{
    cout << jeParan(broj) << endl;
    cout << apsolutnaVrijednost(broj) << endl;
    cout << kvadrat(broj) << endl;

}


int main()
{
    IspisiAnalizu(5);
    return 0;
}
