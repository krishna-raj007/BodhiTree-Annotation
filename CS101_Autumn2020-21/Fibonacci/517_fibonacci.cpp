# include <simplecpp>

main_program{
  int n , k   ;
  int f0=0 , f1=1 , a = f0%k , b = f1%k , c;
  cin >> n >> k ;
  cout << a << endl ;
  cout << b << endl ;
  for(int i=1;i<=n-2;i++){
    c = (a%k) + (b%k);
    while(c > k){
    c=c-k;
    }
    cout << c << endl ;
    a=b ; b=c ;
  }
}
