#include<simplecpp>

main_program{
int F0=0,F1=1;
int n , k ;
cin >> n >> k ;
cout << F0 << endl;
cout << F1 << endl ;
repeat(n-2){
 int F ;
 F=(F0+F1)%k ;
 cout << F <<endl ;
 F0=F1;
 F1=F ;
 }
}
