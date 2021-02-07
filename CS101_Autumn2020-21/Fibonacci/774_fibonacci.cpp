#include<simplecpp>

main_program{
long int n,k,c=0;
cin >> n >> k;
long int a=0%k,b=1%k;
cout << a << "\n" << b <<"\n";
for(int i=1;i<=n-2;i++){
c=(a+b)%k;
cout << c << "\n" ;
a=b;
b=c;
}


}
