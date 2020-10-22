#include<simplecpp>

main_program{

int Q,k=0,i=1;
cin>>Q;
    for(i=1;i<=Q;i++){

    int A,a,b,c,x,y;
    cin>>A;
    a=A%2;
    b=A%3;
    c=A%5;
    x=A%7;
    y=A%11;
    switch(a){
    case 0:k++;
    }
switch(b){
    case 0:k++;
    }
   switch(c){
    case 0:k++;
    }
    switch(x){
    case 0:k++;
    }
    switch(y){
    case 0:k++;
    }

    cout<<k<<endl;
    k=0;



    }

}
