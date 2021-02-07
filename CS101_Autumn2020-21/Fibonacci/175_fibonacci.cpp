#include<simplecpp>
main_program{
   long long f1 = 0, f2 = 1, i,n,k;
cin>>n>>k;
    cout << f1 <<endl;
    for (i = 1; i < n; i++) {
        cout << f2 <<endl;
        long long nex = (f1 + f2)%k;
        f1 = f2;
        f2 = nex;
    }
}
