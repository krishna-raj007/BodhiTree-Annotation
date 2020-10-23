#include<simplecpp>

main_program{

    int n; cin >> n;
    int i=0,j=1,fib=i+j,answer=1;
    while (fib<n) {
        i=j;
        j=fib;
        fib=i+j;
        answer++;
    }
    if (n==0) {cout << 0;}
    else if (n==1) {cout << 1;}
    else if ((fib-n)==0) {cout << (answer+1) << endl;}
    else {cout << -1 << endl;}

}
