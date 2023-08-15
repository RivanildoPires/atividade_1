#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double METROSPORLITRO = 3.0;
    const double LITROSLATA = 18.0;
    const double PRECO = 80.0;

    double areaParaPintar;
    cout << "Digite o tamanho em metros quadrados da area a ser pintada: ";
    cin >> areaParaPintar;

    double litrosNecessarios = ceil(areaParaPintar / METROSPORLITRO);

    int latasNecessarias = ceil(litrosNecessarios / LITROSLATA);

    double precoTotal = latasNecessarias * PRECO;

    cout << "Quantidade de latas de tinta a serem compradas: " << latasNecessarias << endl;
    cout << "Preco total: R$ " << precoTotal << endl;

    return 0;
}
