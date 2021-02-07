#include <simplecpp>
main_program{
     int n, k; cin >> n >> k;
     int a=0; int b=1; int r ;
     cout << "0" << endl;
     repeat(n-1){
         cout << b%k << endl;
         b=b%k;
        r=b; 
        b=a+b;
        a=r;

        
     }
}