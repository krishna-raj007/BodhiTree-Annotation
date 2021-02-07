#include<simplecpp>

main_program{
int n,k,m,i=0,j=1,nt=0;
cin >> n >> k;
if(n==1)
cout << (i%k) <<endl ;
if(n>=2)
cout<< (i%k) <<endl <<(j%k) <<endl;
nt=(i+j)%k;
if(n>2)
{
for(m=1;m<n-1;m++)
{
cout << (nt%k) << endl;
i=j%k;
j=nt%k;
nt=i+j;
}
}
}
