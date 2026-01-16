class Solution {
public:
    int getSum(int a, int b) {
        int carry =0 ;int ans =0;
        for(int i =0 ;i<32;i++){
            int ai =(a>>i)&1;
            int bi =(b>>i)&1;
            int ci;
            if(ai^bi){ 
               if(carry==0) {
                ans|=1<<i;
               }
               else carry=1;
            }
            else{ 
                if(ai){  
                    if(carry)ans|=1<<i;
                     carry=1; 
                }else{ 
                    if(carry)ans|=1<<i;
                    carry=0;
                }
            }
        }
        return ans ;
    }
};