#include <iostream>
using namespace std;

int main()
{
    int v[1000];
    int n, mi = INT_MAX, ma = INT_MIN;
    int imi, ima;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (mi > v[i])
        {
            mi = v[i];
            imi = i;
        }
        if (ma < v[i])
        {
            ma = v[i];
            ima = i;
        }
    }

    if (imi > ima)
    {
        int aux;
        aux = imi;
        imi = ima;
        ima = aux;
    }

    for (int i = imi; i <= ima; i++)
    {
        for (int j = i + 1; j <= ima; j++)
        {
            if (v[i] > v[j])
            {
                int aux;
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
}