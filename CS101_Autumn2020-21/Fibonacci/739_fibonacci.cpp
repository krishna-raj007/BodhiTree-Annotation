#include<simplecpp>

main_program{
long int n ;
long int k ;
cin >> n >> k ;
long int F0 = 0 ;
long int F1 = 1 ;
long int newt  ;
for (long int i = 1 ;i<= n ; i= i+ 1  )
{
F0 = F0%k ;
cout << F0 << endl  ;
newt = F0 ;
F0 = F1 ;
F1 = F1 + newt ; }


}








