#include<simplecpp>
main_program{
  long unsigned int n, k, a = 0, b = 1, c, s;
  cin>>n>>k;
  cout<<a%k<<endl<<b%k<<endl;
  repeat(n-2){
    s = a + b;
    cout<<s%k<<endl;
    a = b;
    b = s;
  }
}
