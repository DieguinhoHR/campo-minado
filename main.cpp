#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#define TAM 3
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

           mat[i][j] = 'x';
           quantidade_bombas++;
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            // Garante que o mapa tenha pelo menos 2 bombas
            if (BOMBAS >= 2 && TAM > 1) {
                cout << "Informe a linha: ";
                cin >> linha;
                cout << "Informe uma coluna: ";
                cin >> coluna;
                cout << "Informe o valor: ";
                cin >> mat[linha][coluna];

                if (mat[i][j] == 'x') {
                    cout << "Vc perdeu, meu caro amigo! " << endl;
                    cout << mat[i][j] << " ";
                    return 0;
                } else {
                    cout << "Parabéns, vc ganhou! " << endl;
                }
                cout << "\n";
            } else {
                cout << "A quantidade de bombas não pode ser menor que 2 \n";
                return 0;
            }
            // Este trecho de código monta a matriz
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
                    if (mat[i][j] != 'x') {
                        cout << mat[i][j] << " ";
                    }
                }
                cout << endl;
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
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
