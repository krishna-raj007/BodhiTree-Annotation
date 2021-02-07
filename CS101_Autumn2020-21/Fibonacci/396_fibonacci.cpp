#include<simplecpp>

main_program{
long int n , k ,n1 =0, n2=1, n3 , i, m;
cin >> n;
cin >> k;
cout << "0" << "\n" << "1" << "\n";
if  ( (1 <= n) && (n <= 100000) && (1 < k) && (k <= 100000))
for (i = 2; (i < n) ; i++){
n3 = n1 + n2;
m = n3 % k;

cout << m << "\n";
n1 = n2;
n2 = m;


}
}
