#include<simplecpp>

main_program{
//Write your code here
long int x,k;
cin>>x>>k;
for(int i=0,s=1,totla=1;x>=totla;totla++){
    if(totla%2==0){
    cout<<s%k<<endl;
    s=i+s%k;
    }else{
    cout<<i%k<<endl;
    i=s+i%k;
    }
}
}
