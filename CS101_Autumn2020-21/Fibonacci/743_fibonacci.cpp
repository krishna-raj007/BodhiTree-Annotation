#include<simplecpp>

main_program{
long  n,k,a=0,b=1, temp;
cin >> n >> k;
for (long  i=1;i<=n ;++i)
{
cout << a%k << endl;
temp =b;
b=(b+a)%k;
a= temp;
}

}
