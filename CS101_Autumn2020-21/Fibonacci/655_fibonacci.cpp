#include<simplecpp>

main_program{
unsigned int n, k, i;
long long unsigned int f0=0, f1=1, fi;
cin>>n>>k;
cout<<(f0%k)<<endl;
if(n>1)
{
cout<<(f1%k)<<endl;
for(i=1;i<=(n-2);i++)
{
    fi=((f0%k)+(f1%k))%k;
    cout<<(fi%k)<<endl;
    f0=f1;
    f1=fi;
    }
}
}
