class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
    
        vector<int> hash(n+2,0);
        
        for(int x: nums){
            if(x>0 && x<=n){
                hash[x]++;
            }
        }
        int count=0;
        for(int i=1;i<=n;i++){
            if(hash[i]==0){
                return i;
            }
            
        }
        return n+1;
    }
};