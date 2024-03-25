#include <iostream>
#include <string.h>

using namespace std;
//FizzBuzzTrissDuzz pana la 100
//Se numara incepand cu 1 si se afiseaza dupa urmatoare regula
//Daca este divizibil cu 3 Fizz
//Daca e divizibil cu 5 Buzz
//divizibl cu 7 Triss
//divizibl cu 11 Duzz
//Altfel numarul
int main ()
{


    for (int i = 1; i < 100; i++)
    {
        char c[100] = {0};
        if (i % 3 == 0) strcat(c, "Fizz");
        if (i % 5 == 0) strcat(c, "Buzz");
        if (i % 7 == 0) strcat(c, "Triss");
        if (i % 11 == 0) strcat(c, "Duzz");


        if (c[0])
            cout << c;
        else
            cout << i;

        cout << endl;
    }
}
