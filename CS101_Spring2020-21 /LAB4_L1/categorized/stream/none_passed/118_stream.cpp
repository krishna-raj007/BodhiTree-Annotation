#include <simplecpp>

main_program{


  float num,b;

  cin >> b;

  while(b!=-1){

    cin >> num;
    b = max(b,num);
    cin>>b;
  }
  cout << b << endl;
}
