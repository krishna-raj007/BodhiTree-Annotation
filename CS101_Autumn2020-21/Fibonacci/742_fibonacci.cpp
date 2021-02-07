#include<simplecpp>
main_program{
   long int n,k,a=0,b=1,c;
    cin>>n>>k;
        
    for(int i=0;i<n;i++){
        cout<<a%k<<endl;
        c=(a%k)+(b%k);
        a=b%k;
        b=c%k;
        
    }
}

