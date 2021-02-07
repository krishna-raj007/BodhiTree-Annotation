#include<simplecpp>

main_program{
//Write your code here
long long unsigned int n,l=0,m=1,p,q,s,i=1,o;
long long unsigned int k;
cin>>n>>k;
cout<<l%k<<endl<<m%k<<endl;
p=l;
q=m;
while(i<=(n-2))
{s=p+q;
p=p%k;
q=q%k;
o=(p+q)%k;
cout<<o<<endl;
p=q;
q=s;
i++;
}

}
