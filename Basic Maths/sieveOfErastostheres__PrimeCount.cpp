//sieve of erastosthers algorithm which makes the code more optimized

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        
        int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i=2; i<n; i++){
            
            if(prime[i]){
                cnt++;
                
                for(int j = i*2; j<n; j = j+i) {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};