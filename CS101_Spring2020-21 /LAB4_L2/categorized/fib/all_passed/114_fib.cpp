#include<simplecpp>

main_program{

int n, i=1 ;
long long int T1=0, T2=1, k=1 ;

    cin >> n ;

        while(n > k) {

            k = T1+T2 ;
            T1 = T2 ;
            T2 = k ;
            i++;

        }

    if (n == k) cout << i << endl;
    else cout << "-1" << endl;

}
