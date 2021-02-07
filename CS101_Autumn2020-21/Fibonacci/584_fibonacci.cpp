#include<simplecpp>

main_program{
//Write your code here
long int n, k, f, p, q, f0 = 0, f1 = 1;
cin>>n >> k;
f = f0 + f1;
cout << f0%k << endl;
cout << f1%k <<endl;

repeat(n-2){
cout << f%k << endl;
p = f1;
q = f;
f = p + q;

f1 = q;
}

wait(3);
}
