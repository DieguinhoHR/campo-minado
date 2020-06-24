#include <iostream>

using namespace std;

#define TAM 2
#define BOMBAS 2

int main()
{
    char mat[TAM][TAM] = {};

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (BOMBAS >= 2 && TAM > 1) {
                mat[i][j] = '2';
            } else {
                cout << "A quantidade de bombas não pode ser menor que 2 \n";
                return 0;
            }
        }
    }
    // Exibe a matriz
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}
