//programa1.cpp
#include <iostream>
#include <string>
 using namespace std;

int main (void)
{
    int i;
    string a[10];

    for (i=0;i<=9; ++i)
    {
      cout << "entre com nome" <<  i+1 << "  º "<< endl;
      getline(cin, a[i]);
    }
    return 0;
}
