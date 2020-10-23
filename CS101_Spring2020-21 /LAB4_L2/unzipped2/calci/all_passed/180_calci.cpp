#include<simplecpp>

main_program{

	int Q;
	float num1,num2,ans;
	char ch;
	cin>>Q;
	repeat(Q)
	{
	  cin>>num1;
	  cin>>ch;
	  cin>>num2;
	  switch(ch)
	  {
	    case '*': ans=num1*num2;
        break;

	    case '+':
	    {
	      ans=num1+num2;
	      break;
	    }
	    case '-':
	    {
	      ans=num1-num2;
	      break;
	    }
	    case '/':
	    {
	      ans=num1/num2;
	      break;
	    }
	    default:
	    {
	      ans=-1;
	      break;
	    }
	  }
	  cout<<ans<<endl;
	}

}
