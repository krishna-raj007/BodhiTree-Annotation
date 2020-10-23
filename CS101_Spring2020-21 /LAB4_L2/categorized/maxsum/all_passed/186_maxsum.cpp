#include<simplecpp>

main_program{
int a,b,c,d,e,f,n,sum1,sum2,sum3,sum4,sum5,maximumsum,suma,sumb,sumc,sumd,sume,sumf;
cin>>n;
cin>>a>>b>>c>>d>>e>>f;
sum1=a+b;
sum2=b+c;
sum3=c+d;
sum4=d+e;
sum5=e+f;
suma=max(sum1,sum2);
sumb=max(sum2,sum3);
sumc=max(sum3,sum4);
sumd=max(sum4,sum5);
sume=max(suma,sumb);
sumf=max(sumd,sumc);
maximumsum=max(sume,sumf);
cout<<maximumsum<<endl;
}
