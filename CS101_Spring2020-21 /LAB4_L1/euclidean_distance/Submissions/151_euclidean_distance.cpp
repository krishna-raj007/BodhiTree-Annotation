#include<simplecpp>

main_program{
int n;
cin >> n;
repeat(n){
int m;
float eucledian_distance = 0.0;
cin >> m;
 repeat(m){
 float a,b;
 cin >> a >> b;
 eucledian_distance = eucledian_distance + pow((a-b),2);
 }
  double ans = sqrt(eucledian_distance);
 printf("%.2f\n",ans);

}

}
