#include<simplecpp>

main_program{
//Write your code here
long long int k,n;
                  cin>>n>>k;
                long long int t_0,t_1,S_0;
                 int f_1=1,f_0=0;
                 t_0=f_0;
                  t_1=f_1;
                    cout<<f_0%k<<endl<<f_1%k<<endl;
repeat(n-2){
            S_0=((t_1)%k+(t_0)%k)%k;
             t_0=(t_1)%k;
             t_1=S_0;
             cout<<S_0<<endl;
    }
}
