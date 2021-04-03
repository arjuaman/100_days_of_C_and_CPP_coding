
class Solution {
public:
    bool squareIsWhite(string s) {
        int addr = s[0]-'a';
        int pos = s[1]-'0';
        pos -= 1;
        cout<<addr<<" "<<pos;
        if((addr+pos)%2==0)
            return false;
        return true;
    }
};