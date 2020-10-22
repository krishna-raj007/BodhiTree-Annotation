#include<simplecpp>

main_program{
int Q;
cin >> Q;
repeat(Q){
double N ;
cin >> N ;
float sum=0.0;
repeat(N){
float p,q ;
cin>>p>>q;
sum=sum+(p-q)*(p-q);
}
printf("%.2f\n", sqrt(sum));
}

}
