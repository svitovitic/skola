#include <iostream>

using namespace std;



double Zbroj(double a,double b)
{
    double zb = a+b;
    return zb;

}

double Oduzmi(double a,double b)
{
    double od = a-b;
    return od;

}

double Pomnozi(double a,double b)
{
    double pm = a*b;
    return pm;

}

double Podijeli(double a,double b)
{
    if(a==0 || b==0) cout << "Nijedan broj ne smije biti 0" << endl;
    else
        {
        double pd = a/b;
        return pd;
        }

}

void IspisiRezultate(double a,double b)
{
    cout << Zbroj(a,b) << endl;
    cout << Oduzmi(a,b) << endl;
    cout << Pomnozi(a,b) << endl;
    cout << Podijeli(a,b) << endl;

}



int main()
{
    IspisiRezultate(4,2);
    return 0;
}
