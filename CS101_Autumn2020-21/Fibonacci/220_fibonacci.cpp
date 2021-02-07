#include<simplecpp>

main_program{
long int n, k, f0 = 0, f1 = 1, fi, fj, temp;
cin >> n >> k;
cout << f0%k << endl;
cout << f1%k << endl;
fi = f0 + f1;
fj = f1;
for(int i = 1; i<= n-2; i++){
  cout << fi%k << endl;
  temp = fi;
  fi = fi + fj;
  fj = temp;
}
}
