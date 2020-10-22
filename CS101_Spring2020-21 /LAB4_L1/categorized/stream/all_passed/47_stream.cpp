#include <simplecpp>
main_program{

int n,d;
cin>>n;
d=n;
while(true){
    cin>>n;
    if(n==-1)
        break;
    if(n>d)
        d=n;
}
    cout<<d;

}
