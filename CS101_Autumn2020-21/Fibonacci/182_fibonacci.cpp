#include<simplecpp>

main_program{
    long int n, k, s=0, t=1, m;
    cin >> n >> k;
    if(n==1) cout << s;
    else
        cout << s << endl << t;
        repeat(n-2){
            m = s + t;
            cout << endl << m%k;
            s = t; t = m;
        }

}
