#include<simplecpp>
#include<iomanip>

main_program{
//Write your code here
int n;
int k;
cin >> n >> k;
int anew = 0;
int aintm;
int aold = 1;
if (n>=1, n<=1e5, k>1, k<=1e5)
while(n>0){
  cout << anew%k << endl;
  aintm = anew%k, anew = (aold%k) + (aintm%k), aold = aintm%k;
  n--;
  }




}
