#include <iostream>

using namespace std;

int main()
{
    int linhas, colunas;

    cout << "Digite o número de linhas e colunas: ";
    cin >> linhas >> colunas;

    int mat[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            mat[i][j] = 1;
        }
    }

    cout << "\n";

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}
