class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        bool ans  = true;
        for(auto it:bills) {
            if(it==5) {
                five++;
            }
            else if(it==10){
                if(five == 0) {
                    ans = false;
                    break;
                }
                five--;
                ten++;
            }
            else {
                if(ten>0 && five>0) {
                    five--;
                    ten--;
                }
                else if(five>=3) {
                    five -=3;
                }
                else {
                    ans = false;
                    break;
                }
            }
        }

        return ans; 
        
    }
};