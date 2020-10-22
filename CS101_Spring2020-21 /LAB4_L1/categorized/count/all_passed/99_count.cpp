#include<simplecpp>
main_program{
  int Q,n=0;
  cin>>Q;
  repeat(Q){
    int a;
    cin>>a;
    n=0;
    if(a%2==0)
        n++;
    if(a%3==0)
        n++;
    if(a%5==0)
        n++;
    if(a%7==0)
        n++;
    if(a%11==0)
        n++;
    cout<<n << endl;
  }


}
