#include<simplecpp>

main_program{
int n,i=1,sum=0,maxsum=0;
cin>>n;
long a[n];
cin>>a[0]
repeat(n-1){
    cin>>a[1];
    sum=a[i]+a[i-1];
    maxsum=max(maxsum,sum);
    i=i+1;
}
cout<<maxsum;
}
//cccur code here


