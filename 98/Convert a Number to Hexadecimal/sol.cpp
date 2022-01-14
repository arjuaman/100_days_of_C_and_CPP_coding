class Solution {
public:
    string toHex(int n) {
        unsigned int num = n;
        string res;
        char arr[17] = "0123456789abcdef";
        
        do{
            res += arr[num%16];
            num /= 16;
        }while(num);
        
        // cout<<res;
        
        return {res.rbegin(), res.rend()};
    }
};

/*
Using a shorter 4 bit example: first bit is sign bit
1011 //-3 stored in 4-bit

convert to unsigned 4-bit, we will get 2^4-3= 13, represented as
1101 // this is exactly the 2-complement representation of -3.

Compared to naive way to convert -3 into 2-complement form. We first have 3, then do its 2-complement format:
0011 // +3
1101 // 2-complement of +3, it is the same as 2^4-3, or casting -3 to unsigned integer.
*/