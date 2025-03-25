// rekurencja zad1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int silnia(int n) {
    if (n == 0) // warunek zakończenia
        return 1;
    else
        return n * silnia(n - 1); // wywołanie rekurencyjne
}

int main() {
    int n;
    cout << "Podaj liczbę: ";
    cin >> n;
    cout << "Silnia " << n << " wynosi: " << silnia(n) << endl;
    return 0;
}