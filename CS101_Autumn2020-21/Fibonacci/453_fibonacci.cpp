#include <simplecpp>

main_program{
    long long int F0=0, F1=1;

    long long int n;
    cin >> n;
    long long int k;
    cin >> k;

    long long int Fk;
    long long int i=3;

    while (i<=n){
        if (i==3){
            cout << F0%k << endl;
            cout << F1%k << endl;
        }
        Fk = (F0+F1)%k;
        F0 = F1%k;
        F1 = Fk%k;
        i++;
        cout << Fk << endl;
    }
}
