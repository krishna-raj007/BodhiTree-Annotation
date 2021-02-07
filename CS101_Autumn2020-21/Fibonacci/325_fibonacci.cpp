#include<simplecpp>

main_program{

    int n,k;
    cin>>n>>k;

    int fi=0, fj=1, temp;

    cout<<fi<<endl<<fj%k<<endl;

    for(int i=2;i<n;i++){

        temp=fj;
        fj=(fj+fi)%k;
        fi=temp;

        cout<<fj<<endl;


    }

}
