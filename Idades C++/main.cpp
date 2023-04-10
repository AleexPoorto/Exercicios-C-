#include <bits/stdc++.h>

using namespace std;

int main()
{
    int idade1, idade2;
    string nome1, nome2;
    double media;

    cout << "Nome da primeira pessoa: " << endl;
    getline(cin, nome1);
    cout << "Idade da primeira pessoa: " << endl;
    cin >> idade1;
    cout << "Nome da segunda pessoa: " << endl;
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade da segunda pessoa: " << endl;
    cin >> idade2;

    media = (double)(idade1+idade2)/2;

    cout << "A idade media entre " << nome1 << " e " << nome2 << " e " << media << endl;
    return 0;
}
