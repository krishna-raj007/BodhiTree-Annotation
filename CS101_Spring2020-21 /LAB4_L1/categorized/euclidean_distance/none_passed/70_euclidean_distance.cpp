#include<simplecpp>

main_program{
int q;
cin>>q;
cout<<"\n";
repeat(q){
int n;
cin>>n;
cout<<"\n";
float a,b,sum=0;
repeat(n){
    cin>>a>>b;
    cout<<"\n";
    sum+=(a-b)*(a-b);
}
float answer=sqrt(sum);
printf("%.2f\n",answer);
}
}
