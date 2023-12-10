class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0;
        int odd=0;
        int count=1;

        while(n){
            int bit= n&1;
            n = n>>1;
            count++;
            if(bit ==1){
                if(count%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        return {even,odd};
    }
};