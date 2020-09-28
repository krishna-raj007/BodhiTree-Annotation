#include<simplecpp>

main_program{
int n,s,t=0,k=0;
while (n!=-1){
cin >> n;
s = max(n,t);
k= max(s,k);
t = n;
}
cout << k;
}
