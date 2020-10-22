#include<simplecpp>

main_program{
float nextnumber;
int p ;
p=nextnumber;
while(nextnumber>0){
    cin >> nextnumber;
    if(nextnumber>p)
    p=nextnumber;
}
cout << p ;

}
