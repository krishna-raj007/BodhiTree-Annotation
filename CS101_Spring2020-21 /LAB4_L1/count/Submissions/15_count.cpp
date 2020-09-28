#include<simplecpp>

main_program{
    int n,q,i=0;
    cin>>q;
    repeat(q){
        cin>>n;
        if(n%2==0){
            i+=1;
        }
         if(n%3==0){
            i+=1;
        }
         if(n%5==0){
            i+=1;
        }
         if(n%7==0){
            i+=1;
        }
         if(n%11==0){
            i+=1;
        }
        cout<<i<<endl;
        i=0;
    }
}
