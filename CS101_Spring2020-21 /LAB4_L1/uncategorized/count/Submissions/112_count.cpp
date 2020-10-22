#include<simplecpp>
main_program{

    int Q;
    cin>>Q;
    repeat(Q){
        int n;
        cin>>n;
        int count=0;
        switch(1){
        case 1: if(n%2==0)count++;
        case 2: if(n%3==0)count++;
        case 3: if(n%5==0)count++;
        case 4: if(n%7==0)count++;
        case 5: if(n%11==0) count++; break;
        }
        cout<<count<<endl;

    }
}
