#include <iostream>
using namespace std;

int main()
{
	int x,n;
	std::cout<<"please enter the number:";
        cin>>n;
      a:cout<<n<<" ";
	if(n==1) goto b;
	else x=n%2 ;
        switch(x)
	{
	case 0:
	       n=n/2;
   		break;
	case 1:
	     n=3*n+1;
	      break;
	default: 
              cout<<"error"<<endl;
	}
	goto a; 
	b:return 0;
}
	
