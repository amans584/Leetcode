class Solution {
public:
    double myPow(double x, int n) {
        
        long long nn = n;
        double ans = 1.00;
        if(n<0) nn *= -1;
        
        while(nn){
            if(nn%2) {
                ans = ans *x;
                nn -= 1;
            }
            else{
                x =x*x;
                nn = nn/2;
            }
        }
        if(n<0) return (double)1.00 / ans;
        else return ans;
            
           
    }
};