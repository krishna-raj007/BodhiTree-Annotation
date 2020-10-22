#include<simplecpp>

main_program{
int n;
cin>>n;

int a[n];


for(int i=0; i<n ; i++)
cin>>a[i];

int m=a[0];

for (int j=1; j<n ; j++)

{  if (a[j]>m) m=a[j];
}
cout<<m;


}
