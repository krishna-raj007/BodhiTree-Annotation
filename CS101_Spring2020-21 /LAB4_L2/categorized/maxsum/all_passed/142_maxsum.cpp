#include<simplecpp>

main_program{
float a,b=0,t,maximum,sum=0;
int n;
cin>>n;
cin>>a>>b;
repeat(n-2){
    cin>>t;

maximum=b+t;
maximum=max(a+b,maximum);
sum=max(sum,maximum);
a=b;
b=t;
}
cout<<sum;
}


