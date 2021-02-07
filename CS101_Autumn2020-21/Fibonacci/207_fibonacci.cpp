#include<simplecpp>
main_program{

long long int n,k,F0=0,F1=1,F;
cin>>n>>k;
if(n==1)cout<<F0%k;
if(n!=1){
    cout<<F0%k<<endl;
    cout<<F1%k<<endl;
    for(int i=3; i<=n ;i++){
        F = F0+F1;
        cout<<F%k<<endl;
        F0=F1%k;
        F1 = F%k;
    }
}

}




