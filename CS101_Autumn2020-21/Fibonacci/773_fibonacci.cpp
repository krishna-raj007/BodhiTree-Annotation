#include<simplecpp>

 main_program{
     unsigned int n,k, t1=0,t2=1,next=0;
    cin>>n>>k;
    for(int i=1,i<=n;++i){
    if(i==1)
    {cout<<t1%k<<endl;
    continue;}
    if(i==2)
    {cout<<t2<<endl;
    continue;}
    next=t1+t2;
    t2=next;
    cout<<next%k<<endl;
    
}
    
}