// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        
        int temp = x-y;
        int ans = w+temp*z;
        cout<<ans<<endl;
    }
        
    
    
    
    
    return 0;
    
}
