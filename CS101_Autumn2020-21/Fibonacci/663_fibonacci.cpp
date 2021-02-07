#include<simplecpp>

main_program{
  int n,f0=0,f1=1,a,b,c,f2,e,f,f3;
  cin>>n;
    cin>>c;
    a=f0%c;
    b=f1%c;
    cout<<a<<endl<<b<<endl<<b<<endl;
    f2=b;
    f3=f2+b;
    for (int x=3;x<n;x++){
      e=f2%c;
      f=f3%c;
      cout<<f<<endl;
      f2=f;
      f3=f2+e;
    }




}
