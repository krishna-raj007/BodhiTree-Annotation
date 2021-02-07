#include<simplecpp>
main_program{
int n,k,i;
cin>>n>>k; // n terms with modulo k
int p=0,q=1,r;
for (i=0;i<n;i++ )
 { cout<<p%n<<endl;
r=(p%k+q%k)%k;
p=q%(k);
q=r%(k);
}
}
