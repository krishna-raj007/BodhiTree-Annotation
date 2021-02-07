#include<simplecpp>

main_program{
//Write your code here
long int n,k,a1,a2,a3,a,i=2;
int c=0,d=1;
cin >> n >> k;
cout << c%k << endl << d%k << endl;
a2 = c;
a3 = d;
while(i<=n-1){
a1=a2%k + a3%k;
a2=a3;
a3=a1;
a=a1%k;
cout << a << endl;
i++;
}
}

