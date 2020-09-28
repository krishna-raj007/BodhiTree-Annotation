#include<simplecpp>

main_program{
  int q,a;
  cin>>q;
  repeat(q){
  int c=0;
    cin>>a;
    int rem2=a%2;
    int rem3=a%3;
    int rem5=a%5;
    int rem7=a%7;
    int rem11=a%11;
    if(rem2==0)
        c++;
    if(rem3==0)
        c++;
    if(rem5==0)
        c++;
    if(rem7==0)
        c++;
    if(rem11==0)
        c++;



  cout<<c<<"\n";
  }

}
