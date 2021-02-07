#include<simplecpp>

main_program{
int n, k;
cin>>n>>k;
int fk=1, a=0, sum=0;
if(n==1) cout<< "0"<<endl;
else {cout<<"0"<<endl;
cout << 1%k<<endl;
for(int i=1;i<=n-2;i++){

sum=fk+a;
cout<<sum%k<<endl;
a=fk;
fk=sum;
}
}
}
