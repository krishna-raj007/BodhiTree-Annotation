#include <simplecpp>

main_program{

long long n, f0 =0, f1 =1, fi= 0,k;
cin >>n>>k;
for (int i = 1; i <= n; ++i)
    {if(i == 1){
     cout <<f0<<endl; continue;}
    if(i == 2){
     cout <<f1<<endl; continue;}
        fi= (f0+f1)%k;
        f0=f1;
        f1=fi;

        cout <<fi<<endl;
}
}
