#include<simplecpp>

main_program{
//Write your code here
 int n,k,a,s,d,f, ans;
cin>>n>>k;
d=0;
s=0;
cout<< s<<endl;
s=s+1;
repeat(n-1){ans=s%k;
cout <<ans<<endl;
f=s;
s=s+d;
d=f;
}
}
