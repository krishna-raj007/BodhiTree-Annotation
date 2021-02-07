#include<simplecpp>

main_program{

  int fa = 0,fb = 1,n,k,nwfa,nwfb;

  cin >> n >> k;

  repeat(n){

    cout << fa << endl;

    nwfa = fb;

    nwfb = fa + fb;

    fa = nwfa%k;fb = nwfb%k;

  }

}
