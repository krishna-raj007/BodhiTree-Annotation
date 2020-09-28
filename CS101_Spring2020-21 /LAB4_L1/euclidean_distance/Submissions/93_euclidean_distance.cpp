#include<simplecpp>

main_program{
int n;
cin >> n;
repeat(n)
{
 int m;
 float euclidean_distance =0.0;
 cin >> m ;
 repeat(m)
 {
  float a,b;
  cin >> a >> b;
  euclidean_distance=euclidean_distance + pow((a-b),2);
 }
 double ans = sqrt(euclidean_distance) ;
 printf("%.2f\n",ans);
}



}
