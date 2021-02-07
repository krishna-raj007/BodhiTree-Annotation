#include<simplecpp>

main_program{
long long n, k, a, b, c, s;
cin >> n >> k;
a=0, b=1;
cout << a%k << endl << b%k;
repeat(n-2){
c = a + b;
s = c%k;
cout << "\n" << s;
a = b;
b = s;
}

}
