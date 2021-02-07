#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;

unsigned long long int f0=0, f1=1;
cout<<f0<<endl<<f1<<endl;

for(int i=1; i<=(n-2); i++){
unsigned long long int f2=(f0+f1)%k;
cout<<f2%k<<endl;
unsigned long long int nextf0=(f1)%k, nextf1=(f0+f1)%k;
f0=nextf0;
f1=nextf1;
}

}
