#include<simplecpp>

main_program{
int q; cin >>q;
repeat(q){
   float sum=0.0;
   int n; cin >>n;
      repeat(n){
          float a,b;
          cin >> a >>b;
          sum = sum+ (a-b)*(a-b);

        }
       float rt;
       rt= sqrt(sum);
       printf("%.2f\n",rt);
        }
}
