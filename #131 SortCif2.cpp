#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    while (a > 9)
        a /= 10;

    while (b > 9)
        b /= 10;

    return a < b;
}

int main()
{
    unsigned int v[100];

    ifstream in("sortcif2.in");
    ofstream out("sortcif2.out");

    int n;

    in >> n;

    for (int i = 0; i < n; i++)
        in >> v[i];

    sort(v, v + n, compare);

    for (int i = 0; i < n; i++)
        out << v[i] << ' ';
}