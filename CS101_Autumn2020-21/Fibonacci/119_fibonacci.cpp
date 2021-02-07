#include<simplecpp>

main_program{
int n, k;
cin>>n>>k;
int ta=0, tb=1, tc;
cout<<ta%k<<endl<<tb%k<<endl;
repeat(n-2){
tc=ta+tb;
ta=tb;
tb=tc;
cout<<tc%k<<endl;
}

}
