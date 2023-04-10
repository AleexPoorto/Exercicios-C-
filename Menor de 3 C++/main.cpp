#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Primeiro valor: " << endl;
    cin >> a;
    cout << "Segundo valor: " << endl;
    cin >> b;
    cout << "Terceiro valor: " << endl;
    cin >> c;
    cout << "Primeiro valor: " << a << endl;
    cout << "Segundo valor: " << b << endl;
    cout << "Terceiro valor: " << c << endl;
    if(a <= b && a <= c)
    {
        cout << "Menor: " << a << endl;
    }
    else if(b <= c)
    {
        cout << "Menor: " << b << endl;

    }
    else
    {
        cout << "Menor: " << c << endl;

    }
    return 0;
}
