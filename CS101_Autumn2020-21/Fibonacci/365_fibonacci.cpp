#include<simplecpp>
main_program
{
    unsigned int f0=0,f1=1,fz=f0,fo=f1,ft;
    int n,k;
    cin>>n>>k;
    if(n>=1)
        cout<<f0%k<<endl;
    if(n>=2)
        cout<<f1%k<<endl;
    while(n>2)
    {
        ft=(fz+fo)%k;
        fz=fo%k;
        fo=ft%k;
        cout<<ft%k<<endl;
        n--;
    }
}
