#include <iostream>
using namespace std;

int main() {
    bool flag;
    int testCase,l;
	cin>>testCase;
	while(testCase--)
	{
	    flag=true;
	    cin>>l;
	    int arr[l];
	    for (int i=0;i<l;i++)
	    {
	        cin>>arr[i];
	        if(i!=0 && arr[i-1]>arr[i])
	        {
	            flag=false;
	            break;
	        }
	    }
	    if(flag) cout<<1<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}