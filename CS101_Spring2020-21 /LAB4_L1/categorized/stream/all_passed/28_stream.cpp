#include<simplecpp>

main_program{
int st[100];
int i=0;
while(true){
    cin>>st[i];
    if(st[i]==-1){
        break;
    }
    i++;
}
int mx=0;
for(int j=0;j<=i;j++){
    mx=max(mx,st[j]);
}
cout<<mx;
}
