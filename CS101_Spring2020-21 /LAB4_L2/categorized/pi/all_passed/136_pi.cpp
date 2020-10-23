#include<simplecpp>
main_program

{
    int n,i{1};
    double a{1};
    cin>>n;
    repeat(n){
    if(i%2==0){
        a+=1.0/((2*i)+1);
    }
    else{
        a-=1.0/((2*i)+1);

    }i++;
    }
    a*=4;
    cout<<a;
}
