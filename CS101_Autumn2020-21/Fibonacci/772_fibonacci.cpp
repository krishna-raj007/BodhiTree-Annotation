#include<simplecpp>

main_program{
//Write your code here

    int n,k;
    cin >> n;
    cin >> k;


    long i0=0,i1=1;

    cout<<i0%k<<endl<<i1%k<<endl;

    if(n>=2){
        repeat(n-2){
            long p= i0 +i1;
            i0=i1;
            i1=p;
            long y=p%k;
            cout<<y<<endl;
        }
    }


}
