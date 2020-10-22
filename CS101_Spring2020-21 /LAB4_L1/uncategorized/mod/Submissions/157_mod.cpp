#include<simplecpp>

main_program{

    int i=1;


     long int n;
     cin>>n;
     long int m;
     cin >> m;
     long int nfac=1;

     repeat(n){

         nfac = nfac*i;

         i= i+1;


     }

     int k;
     k= nfac % m;

     cout << k <<endl;


}
