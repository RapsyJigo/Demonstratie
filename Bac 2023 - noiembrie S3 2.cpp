#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char a[100];
    int n;
    cin >> n;
    cin.get();
    cin.get(a, 100);

    char unu[100];
    char doi[100];

    while (strrchr(a, ' '))
    {
        char *cuvant = strrchr(a, ' ');

        if (strlen(cuvant) - 1 > n)
            {strcat(doi, cuvant);}
        else if (strlen(cuvant) - 1 < n)
            {strcat(unu, cuvant);}

        strcpy(cuvant, "");
    }
    if (strlen(a) > n)
        {   strcat(doi, " ");
            strcat(doi, a);}
    else if (strlen(a) < n)
        {   strcat(unu, " ");
            strcat(unu, a);}

    cout << unu << '\n';
    cout << doi;
}
