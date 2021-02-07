#include<simplecpp>

main_program{
//SAMARTH BANSAL200070073
 int n , k , a=0 , b=1 ,c ,d ;
  int i=0 ;
  cin >> n >>k ;
  cout<<a <<"\n";
  while(i<=(n-2)){
    c=b%k ;
    cout<< c <<"\n";
    d=a+c;
    a=c;
    b=d;
    i++;
  }
}
