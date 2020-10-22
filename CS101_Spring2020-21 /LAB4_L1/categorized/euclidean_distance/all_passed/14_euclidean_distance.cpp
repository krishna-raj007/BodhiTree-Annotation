#include<simplecpp>
main_program{
  int q;
  cin>>q;
  repeat(q){
    double x1, y1, sum=0, n;
    cin>>n;
    repeat(n){
      cin>>x1>>y1;
      sum+=pow(x1-y1,2);
    }
    printf("%.2f\n",sqrt(sum));

  }
}
