#include <iostream>

using namespace std;
void myPow(double x, int n) {
        double ans=1;
        if(n> 0){
            
            for(int i=0; i<n;i++){
               ans = ans * x; 
            }
            cout<<ans;
        }
        else{
            
            int p =(-1) * n;
            
            for(int i=0; i<p;i++){
               ans = ans * x; 
            }
            ans = 1/ans;
            cout<<ans;
        }
        
        
};

int main()
{
    cout<<"---->";
    myPow(2, -2);
    return 0;
}
