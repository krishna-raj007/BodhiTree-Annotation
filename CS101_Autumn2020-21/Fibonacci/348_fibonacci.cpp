#include<simplecpp>
main_program{
    long int n,k;
    //cout<<"Enter n and k: ";
    cin>>n>>k;
    long int f=0,g=1;
    for(int i=0;i<n;i++){
        f=f%k;
        g=g%k;
        cout<<f<<endl;
        long int temp=g;
        g=g+f;
        f=temp;
    }

}
