#include<simplecpp>

main_program{

int q ,n;
double a,b,m;
float d;
d=0;
cin>> q;

repeat(q){
cin>> n;
repeat(n){

cin >> a >>b;
cout <<"\n";
m= a-b;
d=sqrt(m*m+d*d);
    }
printf("%.2f\n", d );
  }

}
