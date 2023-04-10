#include <iostream>

using namespace std;

int main()
{
    int x, y, soma, troca;


    cout << "Digite 2 valores:" << endl;
    cin >> x >> y;

    soma= 0;
    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }

    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0)
            soma = soma + i;
    }

    cout << "Soma dos Impares: " << soma << endl;

    return 0;
}
