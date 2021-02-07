    #include<simplecpp>

main_program{
//Write your code here

    long n,k,s=0,x=1,y=0;

    cin>>n>>k;
     if(n>=2){
      cout<<"0"<<endl;
      cout<<"1"<<endl;

    for(int i=1;i<=n-2; i++){

        s=x+y;
        y=x;
        x=s;
        cout<<x%k<<endl;
    }

}
 else { cout<<"0"<<endl;
       cout<<"1"<<endl;}


}

