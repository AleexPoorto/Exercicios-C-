#include <bits/stdc++.h>
using namespace std;

int main()
{
    double base, altura, perimetro, diagonal, area;

    cout << "digite a base do retangulo" << endl;
    cin >> base;
    cout << "digite a altura do retangulo" << endl;
    cin >> altura;
    area = base*altura;
    perimetro = 2*(base+altura);
    diagonal = sqrt(base*base+altura*altura);
    cout << fixed << setprecision(4);
    cout << "Area: " << area << endl;
    cout << "Perimetro " << perimetro << endl;
    cout << "Diagonal " << diagonal << endl;


    return 0;
}
