#include<simplecpp>

main_program{
int n,t,m;
cin>>n;
int max[n];
for(int i=1;i<n;i++)
{
cin>>t;
max[i]=t;
}
max[n]=-1;
for(int z=1;z<n;z++)
{ if(max[z]>max[z+1])
  m=max[z];
  else m=max[z+1];
  }
  cout<<m;



	//Write your code here

}
