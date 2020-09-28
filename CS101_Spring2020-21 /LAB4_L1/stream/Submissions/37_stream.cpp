#include<simplecpp>

main_program{

    int m;
    cin>>m;
    int max=m;

    while(m != -1){
        cin>>m;
        if (m>max){
            max= m;
        }
    }

    cout<<max;
}
