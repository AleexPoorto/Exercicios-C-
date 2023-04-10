#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do
    {
        system("color 0A");
        cout << "Digite dois valores" << endl;
        cin >> a;
        cin >> b;
        if(a > b)
        {
            cout << "Descrescente" << endl;

        }
        else
        {
            cout << "Crescente" << endl;
        }
    }
    while(a != b);


    return 0;
}
