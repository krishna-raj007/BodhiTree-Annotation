#include<simplecpp>

main_program
{
    int a{0},b{1},next{1},i{1},n;
    bool found{false};
    cin>>n;
    while(next<=n){
        if(n==next)
        {

            found=true;
            break;
        }
        next=a+b;
        a=b;
        b=next;
        i++;
    }
    if(n==1 || n==2){cout<<1;
    }else if(n==0){
    cout<<0;
    }
    else if(found){
        cout<<i;
    }
    else{cout<<-1;}
}
