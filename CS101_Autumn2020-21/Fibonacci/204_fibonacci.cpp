#include<simplecpp>

main_program{
long int p, q, n0=0, n1=1, nn, m1, m2, mn;
cin >> p >>q;
m1 = n0%q;
m2 = n1%q;
cout << m1 << endl;
cout << m2 << endl;
repeat(p-2){
nn = m1 + m2;
mn = nn%q;
m1 = m2; m2 = mn;
cout << mn << endl;
 } // fibonacci
 }
