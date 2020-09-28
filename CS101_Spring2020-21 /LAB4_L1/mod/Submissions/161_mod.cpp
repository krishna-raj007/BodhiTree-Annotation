#include<simplecpp>

main_program{

       int n,m;
       long int p=1;
       cin >> n >> m;
       cout << "\n";
       repeat(n){

       p*=n%m;
       p%=m;

       n--;
       }
       cout << p;


}
