 class Solution {
 public:
    int hammingWeight(int n) {
        int c=0;
        while(n>0){
            if(n%2==0){
                 n=n>>1;
            }else{
                 c++;
                n=n>>1; 
            }
        }
        return c;
    }
};
