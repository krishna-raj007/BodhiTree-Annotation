#include<simplecpp>

main_program{
    int F1=0,F2=1,F;
    int n,i=2,k;
    cin>>n>>k;
    if(n==1) cout<<F1;
    else {cout<<F1<<endl;cout<<F2<<endl;
        repeat(n-2){F=F1+F2;
        cout<<F%k<<endl;
        F1=F2%k;
        F2=F%k;}
}
}
