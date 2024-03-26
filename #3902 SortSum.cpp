#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


int cifsum(int n)
{
    int s = 0;
    while (n)
    {
        s+= n%10;
        n/=10;
    }
    return s;
}

int main()
{
    ifstream in("sortsum.in");
    ofstream out("sortsum.out");

    long v[1000000];
    
    int n = 0;
    int x;
    while (in >> x)
    {
        v[n] = cifsum(x) * 10000000 + 10000000 - x;
        n++;
    }

    sort(v, v + n);

    for (int i = 0; i < n; i++)
        out << 10000000 - v[i]%10000000 << ' ';
}