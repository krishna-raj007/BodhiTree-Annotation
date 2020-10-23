#include<simplecpp>

main_program{
    int n,a1,a2;
    cin>>n;
    cin>>a1>>a2;
    int maxsum{a1+a2};
    if(n>2){
        repeat(n-2){
            cin>>a1;

            if(a1+a2>maxsum){
                maxsum=a1+a2;
            }
            a2=a1;
        }

    }
    cout<<maxsum<<endl;


}
