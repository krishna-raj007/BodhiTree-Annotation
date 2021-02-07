#include<simplecpp>

main_program{
//Write your code here







int n, a = 0, b = 1,temp = 0,k;
cin >> n>>k;

for (int i = 1; i <= n; ++i){
if(i == 1)
{
cout <<a<<endl;
continue;
}
if(i == 2)
{
cout << b <<endl;
continue;
}
temp = a + b;
a = b;
b = temp;

cout << temp%k << endl;
    }







}
