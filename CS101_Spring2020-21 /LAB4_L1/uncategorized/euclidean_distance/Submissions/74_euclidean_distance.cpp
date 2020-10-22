#include<simplecpp>

main_program{

  float a,b;
  float t;
  int n,m;
  float distance;
  cin >> m;
  repeat(m){
   cin >> n;
   float sum = 0;
    repeat(n){
    cin >> a >> b;
    t =  ((a - b)*(a - b));
    sum = sum + t;
  }
  distance = sqrt(sum);
  printf("%.2f\n",distance);

  }



}
