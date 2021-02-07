#include<simplecpp>
main_program{
int n,k; cin>>n >> k;
int t1=0 , t2=1; cout <<t1%k <<endl<< t2%k<<endl;
int x=t1,y=t2;
int z;
for (int s=1; s<=n-2;s++){

int t3;
t3=x+y;
z=t3%k;
cout << z<<endl;
x=y;y=t3;
}


}
