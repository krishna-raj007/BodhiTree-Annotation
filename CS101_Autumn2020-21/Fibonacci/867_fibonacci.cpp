#include<simplecpp>

main_program{
int n,k,F3;
int F1=0,F2=1;
cin>>n>>k;
cout<<F1<<endl;
cout<<F2<<endl;
for(int i=1;
    i<=(n-2);
    i=i+1)

   { F3=F1+F2;
    cout<<F3%k<<endl;
    F1=F2%k;
    F2=F3%k;
    }

}
