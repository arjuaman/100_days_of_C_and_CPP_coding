class Solution {
public:
    double angleClock(int hour, int minutes) {
        // hour hand = 30, minute hand = 6
        double hourHand = hour + (double)minutes/60;
        // cout<<hourHand<<" ";  
        // hourHand = abs(hourHand-12);
        double minHand = (double)minutes * 6;
        hourHand *= 30;
        // if(hourHand>=360){
        //     hourHand = abs(hourHand-360);
        // }
                
        double ans = abs(hourHand - minHand);
        if(ans>180){
            ans = 360.0-ans;
        }
        
        return ans;
    }
};
