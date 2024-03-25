//Un cuvânt este palindrom dacă se citește la fel în ambele direcții. De exemplu, capac este palindrom.

//Să se scrie un program care citește mai multe cuvinte
//și determină despre fiecare dacă este palindrom.

//Se citeste o propozitie cu unul sau mai multe spatii intre cuvinte
//sa se afiseze propozita cu spatiile in plus eliminate.

//ca    exemplu   propozitia aceasta    sa  devina
//ca exemplu propozita aceasta sa devina
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main ()
{
    ifstream fin("palindrom.in");
    ofstream fout("palindrom.out");
    int n;
    fin >> n;
    char a[21];
    for (int i = 0; i < n; i++)
    {
        fin >> a;
        int n = strlen(a);
        bool presupunere = true;
        for (int j = 0; j < n/2; j++)
        {
            if (a[j] != a[n - j - 1])
            {
                presupunere = false;
            }
        }
        if (presupunere)
            fout << 1;
        else
            fout << 0;
    }
}
