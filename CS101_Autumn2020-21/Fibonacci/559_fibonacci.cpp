#include<simplecpp>

main_program{
int n,k1=0,k2=1,l;
cin>>n>>l;
cout<<k1%l<<endl<<k2%l<<endl;

repeat(n-2){
int k3,p=k1,q=k2;
k3=p+q;
cout<<k3%l<<endl;
k1=k2;
k2=k3;
}

}
