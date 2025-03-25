#include <iostream>
void rozkladNaCzynnikiPierwsze(int n, int czynniki[], int& index, int dzielnik = 2) {
    if (n < 2) return;

    if (n % dzielnik == 0) {
        czynniki[index] = dzielnik;  
        index++;  
        std::cout << n << " / " << dzielnik << " = " << n / dzielnik << std::endl;
        rozkladNaCzynnikiPierwsze(n / dzielnik, czynniki, index, dzielnik);  
    }
    else {
        rozkladNaCzynnikiPierwsze(n, czynniki, index, dzielnik + 1);  
    }
}

int main() {
    int n;
    std::cout << "Podaj liczbe do rozkladu: ";
    std::cin >> n;

    int czynniki[100];
    int index = 0;

    std::cout << "Rozklad na czynniki pierwsze:" << std::endl;
    rozkladNaCzynnikiPierwsze(n, czynniki, index);

    std::cout << "Czynniki pierwsze liczby " << n << ": ";
    for (int i = 0; i < index; ++i) {
        std::cout << czynniki[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
