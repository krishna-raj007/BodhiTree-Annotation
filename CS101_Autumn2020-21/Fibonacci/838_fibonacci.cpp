#include<simplecpp>

main_program{
//Write your code here
int f0=0, f1=1;
long int n, k; cin>>n>>k;
long int fi,fa=f0,fb=f1;
long int a=f0%k, b=f1%k;
cout<<a<<endl<<b<<endl;
for(int l=1;l<=n-2;l++){
fi=(fa+fb)%k;
cout<<fi<<endl;
fa=fb;
fb=fi;
}

}
