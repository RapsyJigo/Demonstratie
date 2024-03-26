#include <iostream>
#include <vector>
#include <fstream>
//Scrieti o functie recursiva care testeaza
//daca un vector cu n numere naturale
//retine numai valori distincte
using namespace std;
bool unic (int v[], int n)
{

}

int main ()
{
    ifstream fin("input.in");
    int n, v[100];
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> v[i];
    cout << unic(v, n - 1);
}