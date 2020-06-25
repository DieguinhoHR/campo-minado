#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#define LINHAS 2
#define COLUNAS 2
#define BOMBAS 2

int main()
{
    char mat[LINHAS][COLUNAS] = {0}, mat_rand[LINHAS][COLUNAS];
    int linha, coluna, quantidade_bombas = 0;

    srand(time(NULL));
    // Gera linha coluna randomicamente
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
           i = rand() % LINHAS;
           j = rand() % COLUNAS;

           mat[i][j] = 'x';
           quantidade_bombas++;
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            // Garante que o mapa tenha pelo menos 2 bombas
            if (BOMBAS >= 2 && LINHAS > 1 && COLUNAS > 1) {
                cout << "Informe a linha: ";
                cin >> linha;
                cout << "Informe uma coluna: ";
                cin >> coluna;
                cout << "Informe o valor: ";
                cin >> mat[LINHAS][COLUNAS];

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
            for (int i = 0; i < LINHAS; i++) {
                cout << "  " << i;
            }

            cout << "\n";

            for (int i = 0; i < LINHAS; i++) {
                cout << "---";
            }

            cout << "\n";
            // Exibe os valores contido na matriz
            for (int i = 0; i < LINHAS; i++) {
                if (i == 0) {
                    cout << "A ";
                } else if (i == 1) {
                    cout << "B ";
                } else if (i == 2) {
                    cout << "C ";
                }

                for (int j = 0; j < LINHAS; j++) {
                    if (mat[i][j] != 'x') {
                        cout << mat[i][j] << " ";
                    }
                }
                cout << endl;
            }
        }
    }
    cout << "\n";

    for (int i = 0; i < LINHAS; i++) {
        cout << "  " << i;
    }

    cout << "\n";

    for (int i = 0; i < LINHAS; i++) {
        cout << "---";
    }

    cout << "\n";
    // Exibe os valores contido na matriz
    for (int i = 0; i < LINHAS; i++) {
        if (i == 0) {
            cout << "A ";
        } else if (i == 1) {
            cout << "B ";
        } else if (i == 2) {
            cout << "C ";
        }

        for (int j = 0; j < LINHAS; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
