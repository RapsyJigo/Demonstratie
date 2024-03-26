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

    for (int j = 0; j < t; j++)
    {
        int cnt = 0;
        int x, y;
        cin >> x >> y;
        for (int k = 0; k < n; k++)
        {
            if (v[k] >= x && v[k] <= y)
            {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
}