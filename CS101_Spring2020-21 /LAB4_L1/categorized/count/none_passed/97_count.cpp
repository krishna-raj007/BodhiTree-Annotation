#include<simplecpp>

main_program{

int n,a,div;
cin>>n;
repeat(n){
cin>>a;
div=0;
switch(1){
    case 1: if(a%2==0)
    div++;
    case 2: if(a%3==0)
    div++;
    case 3: if(a%5==0)
    div++;
    case 4: if(a%7==0)
    div++;
    case 5: if(a%11==0)
    div++;
cout<<div<<" ";
}
}

}
