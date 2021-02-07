#include<simplecpp>

main_program{
long long int n,k, t1 = 0, t2 = 1, t3 = 0;
cin >> n>>k;
for (int i = 1; i <= n; ++i){
if(i == 1)
{cout <<abs(t1%k)<<endl;continue;}
if(i == 2)
{cout << abs(t2%k)<<endl;continue;}
t3 = (t1 + t2)%k;
t1 = t2;
t2 = t3;
cout << t3<<endl;}
}


