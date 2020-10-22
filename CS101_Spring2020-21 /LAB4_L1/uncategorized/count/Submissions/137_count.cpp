#include<simplecpp>
main_program{
int NoOfQueries,a[80],count[80];
cin>>NoOfQueries;
for(int k=0;k<NoOfQueries;k++)
{
 count[k]=0;
}
for(int i=0;i<NoOfQueries;i++)
{
 cin>>a[i];
 cout<<endl;
}
for(int j=0;j<NoOfQueries;j++)
{
switch(2)
{
 case 2:
 {
  if(a[j]%2==0)
  {
   count[j]++;
  }
 }
 case 3:
 {
  if(a[j]%3==0)
  {
   count[j]++;
  }
 }
 case 5:
 {
  if(a[j]%5==0)
  {
   count[j]++;
  }
 }
 case 7:
 {
  if(a[j]%7==0)
  {
   count[j]++;
  }
 }
 case 11:
 {
  if(a[j]%11==0)
  {
   count[j]++;
  }
 }
}
}
for(int p=0;p<NoOfQueries;p++)
{
 cout<<count[p];
 cout<<endl;
}
}
