#include<simplecpp>
main_program{
int n,i;
long int a[i];
long long int maxsum,s1,s2;
cin>>n;
i=0;
repeat(3){
cin>>a[i];
i++;
}
maxsum=max(a[0]+a[1],a[1]+a[2]);
i=3;
while(i<n){
cin>>a[i];
s1=a[i-1]+a[i-2];
s2=a[i]+a[i-1];
if(maxsum<s2)
maxsum=s2;
if(maxsum<s1)
    maxsum=s1;


i++;
}
cout<<maxsum;
}
