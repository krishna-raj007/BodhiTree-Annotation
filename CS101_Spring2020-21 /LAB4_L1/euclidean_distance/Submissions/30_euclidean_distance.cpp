#include<simplecpp>

main_program{
int q,n;
float p;
cin >> q;
repeat(q){
    float s=0;
    cin >> n;
    repeat(n){
      float x,y;
      cin >> x >> y;
      s= s + (x-y)*(x-y);}
      p= sqrt(s);
      printf("%.2f\n", p);
    }

}
