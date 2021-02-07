#include<simplecpp>
main_program{
    int a,b=1, c = 0, d,e;
    cin>>d>>e;
    cout<<c%e<<endl<<b%e<<endl;
    for(int i=1; i<=d-2; i++){
    a=b%e+c%e;
    cout <<a%e<<endl;
    c=b;
    b=a;

    }

}
