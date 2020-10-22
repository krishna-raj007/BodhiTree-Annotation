#include<simplecpp>

main_program{
    int num,max;
    cin>>num;
    max=-100;
    while(num!=-1){
            if(num>max) max=num;
            cin>>num;
    }
    cout<<max;
}


