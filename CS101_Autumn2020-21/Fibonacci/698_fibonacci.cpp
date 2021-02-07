#include<simplecpp>

main_program{
     unsigned long long int n,k,s1=0,s2=1,s3;
     cin>>n>>k;

     cout<<s1%k<<endl;

     if(n>1) cout<<s2%k<<endl;

     for(unsigned long long int i=0;i<n-2;i++){
        s3=s1+s2;
        cout<<s3%k<<endl;
        s1=s2%k;
        s2=s3%k;
        }
}


