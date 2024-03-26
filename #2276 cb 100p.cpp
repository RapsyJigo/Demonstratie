#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int v[200];
    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v, v + n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;

        
    }
}