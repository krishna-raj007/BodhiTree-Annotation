#include<simplecpp>

main_program{
    int n,a=0;
    while(True){
        cin>>n;
        if(n==-1){
            break;
        }
        else{
            a = max(n,a);
        }
    }
    cout<<a;
}
