#include<simplecpp>
main_program{
  long unsigned int fx=0,fy=1,fz,n,k;
  cin>>n>>k;

  cout<<fx%k<<endl;
  if (n>1) {cout<<fy%k<<endl;
  repeat(n-2){
    fz=fx+fy;
    fz=fz%k;
    fx=fy;
    fy=fz;

    cout<<fz<<endl;






  }
};





}
