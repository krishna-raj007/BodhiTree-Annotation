#include<simplecpp>

main_program{
    int q,a,count=0;
    cin>>q;
    repeat(q){
        cin>>a;
        if(a%2==0) count+=1;
        if(a%3==0) count+=1;
        if(a%5==0) count+=1;
        if(a%7==0) count+=1;
        if(a%11==0) count+=1;
        cout<<count<<endl;
        count=0;
    }
}
