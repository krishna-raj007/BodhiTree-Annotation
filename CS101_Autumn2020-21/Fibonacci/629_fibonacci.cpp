#include<simplecpp>

main_program{
int n, t1=0, t2=1, nextTerm = 0;
int k;
cin >> n >> k;
cout << t1%k << endl;
cout << t2%k << endl;
repeat(n-2){
    nextTerm = (t1 + t2)%k;
    t1 = t2;
    t2 = nextTerm;
    cout << nextTerm << endl;}

}
