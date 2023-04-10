#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, cont;
    double soma, media, percentual;

    cout << "Digite o numero de pessoas: " << endl;
    cin >> N;

    string nomes[N];
    int idades[N];
    double alturas[N];

    for(int i = 0; i < N; i++)
    {
        cout << "dados da " << i+1 << " a pessoa: "<< endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idades: ";
        cin >> idades[i];
        cout << "Alturas: ";
        cin >> alturas[i];

    }

    soma = 0;

    for(int i = 0; i < N; i++)
    {
        soma = soma + alturas[i];

    }
    media = soma / N;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;

    cont = 0;

    for(int i = 0; i < N; i++)
    {
        if(idades[i] < 16)
        {
            cont++;
        }


    }
        for(int i = 0; i < N; i++){
            if(idades[i] < 16){
                cout << nomes[i] << endl;
            }
        }


    percentual = (double)cont * 100 / N;

    cout << fixed << setprecision(1);

    cout << "Pessoas com menos de 16 anos: " << percentual << "%" << endl;
    return 0;
}
