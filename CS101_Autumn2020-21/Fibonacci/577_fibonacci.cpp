#include<simplecpp>

main_program{
  long int n,k,i=0,i1=1;
  cin >> n >> k ;
  repeat(n){
    cout << i%k << endl;
    long int s=i1+i;
    i=i1%k;
    i1=s%k;
  }
}
