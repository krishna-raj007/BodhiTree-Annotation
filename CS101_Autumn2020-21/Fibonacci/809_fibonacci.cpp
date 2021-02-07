#include<simplecpp>

main_program{
  long unsigned int n,k,Fi,Fh,Fj,i=2,mod;
  int Fa=0,Fb=1;
  cin >> n >> k;
  cout << (Fa%k) << endl;
  cout << (Fb%k) << endl;
  Fh=Fa;
  Fj=Fb;
  while(i<=n-1){
    Fi=Fh%k+Fj%k;
    Fh=Fj;
    Fj=Fi;
    mod=Fi%k;
    cout << mod << endl;
    i++;
  }

}
