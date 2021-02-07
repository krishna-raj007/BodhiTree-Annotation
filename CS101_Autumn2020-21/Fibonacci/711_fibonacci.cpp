#include <iostream>

using namespace std;

int main(){

    long int n;
    long long int k, a1=0, a2=1, a3;

    cin >> n >> k;

    cout << a1%k << '\n';
    cout << a2%k << '\n';

    for(long int i = 0; i<n-2; i++){
        a3 = (a1%k + a2%k)%k;
        a1 = a2%k;
        a2 = a3%k;

        cout << a3 << '\n';
    }

   return 0;
}
