#include<simplecpp>

main_program{

  int n;
  cin >> n;
  repeat(n){
    int m;
    cin >> m;
    int i = 0;
    if( m % 2 == 0){
        i = i +1;
    }
  if( m % 3 == 0){
        i = i +1;
    }
    if( m % 5 == 0){
        i = i +1;
    }
    if( m % 7 == 0){
        i = i +1;
    }
    if( m % 11 == 0){
        i = i +1;
    }
    cout << i << endl;

  }

}
