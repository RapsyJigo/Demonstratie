#include <iostream>
#include <string.h>
using namespace std;
//Se dă un şir de cel mult 20 caractere
//ce conţine numai litere mici ale alfabetului englez.
//Să se afişeze şirul obţinut prin înlocuirea fiecărei
//vocale cu litera mare corespunzătoare.
int main ()
{
  char a[21];
  cin>>a;
  for(int i=0;i<=19;i++)
  {
      if(strchr("aeiou",a[i]))
        a[i]-='a'-'A';
  }
  cout<<a;
}
