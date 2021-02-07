#include<iostream>
using namespace std;

int main(){

    int num, mod;
    cin >> num >> mod;
int a = 0, b = 1;

    if (num >= 1) cout << 0 << '\n';
    if (num >= 2) cout << 1 % mod << '\n';


    for (int i = 0; i < num - 2; ++i){
        int temp = (a + b) % mod;
        a = b;
        b = temp;
        cout << b << '\n';
    }

    return 0;
}