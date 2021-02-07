#include<simplecpp>

main_program{

long int n,k,x=0,y=1,z=0;
cin>>n>>k;
repeat(n){
    z=(z+x)%k;
    x=y;
    y=z;
    cout<<z<<endl;
    }

}
