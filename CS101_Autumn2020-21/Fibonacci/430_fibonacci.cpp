#include<simplecpp>

main_program{
//Write your code here

long long unsigned int n,k,fa=0,fb=1,t,r;

cin >> n >> k;


for (unsigned int i=0; i<=n-1; i=i+1){
    r=fa%k;
    cout<<r<<endl;

    t=fa%k;
    fa=fb%k;
    fb=t+fa;

}
}
