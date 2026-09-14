#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int f = 0;
    string cars[20] = 
    {
    "BMW", "Ferrari", "Porsche" 
    };
    
    string model[20] = 
    {
    "320i","M3 comp","M4 coupe", "Z3", "X6",
    "LaFerrari","SF90","F40", "F42","F50",
    "911 Carrera", "GT3RS", "GTR","Spyder", "911 Coupe"
    };
    for(int i = 0 ; i <= 3 ; i++)
    {
        cout << cars[i] << endl;
        for(int j = 0 ; j < 5 ; j++)
        {
            cout << model[j+f] << endl;
        }
        f = f + 5;
        cout << endl;
    }
    
    
    
    return 0;
}
