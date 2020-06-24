#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#define TAM 2
#define BOMBAS 2

int main()
{
    char mat[TAM][TAM] = {}, mat_rand[TAM][TAM] = {};
    int linha, coluna, quantidade_bombas = 0;

    srand(time(NULL));
    // Gera linha coluna randomicamente
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
           i = rand() % TAM;
           j = rand() % TAM;

           mat_rand[i][j] = 'x';

           quantidade_bombas++;
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (BOMBAS >= 2 && TAM > 1) {
                cout << "Informe a linha: ";
                cin >> linha;
                cout << "Informe uma coluna: ";
                cin >> coluna;
                cout << "Informe o valor: ";
                cin >> mat[linha][coluna];

                if (mat_rand[i][j] == 'x' && quantidade_bombas >= 2) {
                    cout << "GAME OVER, MAN! TRY AGAIN";
                    return 0;
                }
                cout << "\n";
            } else {
                cout << "A quantidade de bombas não pode ser menor que 2 \n";
                return 0;
            }
        }
    }
    cout << "\n";

    for (int i = 0; i < TAM; i++) {
        cout << "  " << i;
    }

    cout << "\n";

    for (int i = 0; i < TAM; i++) {
        cout << "---";
    }

    cout << "\n";
    // Exibe os valores contido na matriz
    for (int i = 0; i < TAM; i++) {
        if (i == 0) {
            cout << "A ";
        } else if (i == 1) {
            cout << "B ";
        } else if (i == 2) {
            cout << "C ";
        }

        for (int j = 0; j < TAM; j++) {
            cout << mat_rand[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
