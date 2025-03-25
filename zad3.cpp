#incude <iostream>
using namespace std;

int sumaCyfr(int n) {
    if(n==0)
    return 0;
    return(n % 10) + sumaCyfr(n / 10);
}

int main() {
    int n;
    cout<< "Podaj iczbę: ";
    cin>>n;
    cout<< "Suma cyfr " << n << "wynosi: " <<sumaCyfr(n) << endl;
    return 0;
}