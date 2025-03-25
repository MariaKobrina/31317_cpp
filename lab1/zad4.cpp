#include <iostream>
using namespace std;

int liczbaWystapien(int n, int cyfra) {
    if (n == 0) return 0;
    return ((n % 10 == cyfra) ? 1 : 0) + liczbaWystapien(n / 10, cyfra);
} 

int main() {
    int n, cyfra;
    cout << "Podaj liczbę: ";
    cin >> n;
    cout << "Podaj cyfrę: ";
    cin >> cyfra;
    cout << "Cyfra " << cyfra << " występuje " << liczbaWystapien(n, cyfra) << " razy." << endl;
    return 0;
}