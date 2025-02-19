class Solution {
public:
    string numToBinaryString(uint32_t num) {
        string result;

        for (int i=0; i<32; i++) {
            
            if (num & 1) {
                result = '1' + result;
            } else {
                result = '0' + result;
            }

            
            num = num >> 1;
        }

        return result;
    }

    uint32_t reverseBits(uint32_t n) {
        
        string binStr = Solution::numToBinaryString(n);
        int i=0, j=31;
        char temp;
        while (i < 16) {
            temp = binStr[i];
            binStr[i] = binStr[j];
            binStr[j] = temp;
            i++;
            j--;
        }


        uint32_t result = 0;
        int pow = 0;
        i = 31;
        while (i >= 0) {
            if (binStr[i] == '1') {                
                result = result + (1U << pow);
            }

            pow++;
            i--;
        }

        return result;
    }
};

Input: 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
