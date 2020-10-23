#include<simplecpp>

main_program{int n=0;
cin>>n;
double sum=0.0;
for(int i=0;i<=n;i++)
{sum=sum+(pow(-1,i)*(1.0/((2.0*i)+1.0)));
}
sum=sum*4.0;
cout<<sum<<endl;
}
