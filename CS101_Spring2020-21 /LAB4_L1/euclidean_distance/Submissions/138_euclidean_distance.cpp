#include<simplecpp>
main_program{
float a[80],b[80],NoOfQueries,n;
cin>>NoOfQueries;
for(int j=0;j<NoOfQueries;j++)
{
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>a[i]>>b[i];

 }

 float distance=0;
 for(int k=0;k<n;k++)
 {
  distance+=pow((a[k]-b[k]),2);
 }
 printf("%.2f\n",sqrt(distance));
}
}
