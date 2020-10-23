#include<simplecpp>

main_program{

    int n;
    cin>>n;
    float ansByFour = 1;
    for(int i = 1; i<=n; i++)
    {
        ansByFour = ansByFour + pow(-1, i)/(2*i+1);
    }
    float answer = 4*ansByFour;
    cout<<answer<<endl;


}
