class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        bool has6 = false;
        for(char &c:s){
            if(c == '6'){
                has6 = true;
                c = '9';
                break;
            }                
        }
        if(!has6)
            return num;
        num = stoi(s);
        return num;
    }
};