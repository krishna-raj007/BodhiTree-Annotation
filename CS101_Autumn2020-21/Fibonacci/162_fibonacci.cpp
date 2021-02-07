#include<simplecpp>

main_program{
long int n, a = 0, b = 1, nextTerm = 0;
long int k;
cin >> n;
cin>>k;
for (int i = 1; i <= n; ++i)
{
if(i == 1)
{
cout << a<<endl;
continue;
}
if(i == 2)
{
cout << b <<endl;
continue;
}
nextTerm = a + b;
a = b%k;
b = nextTerm%k;

cout << nextTerm%k <<endl;
}
}
