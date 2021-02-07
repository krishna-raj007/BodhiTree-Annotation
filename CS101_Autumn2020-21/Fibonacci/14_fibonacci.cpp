#include<simplecpp>

main_program{
long long int a=0 , b=1, c, n ,m ,i;
cin >> n >> m ;

cout << a % m << endl << b%m << endl;

for( i=2;i<n;i++){
c = (a+b)%m;
a=b;
b=c;
cout << c << endl ;

}
}
