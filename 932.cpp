class Solution {
public:
    vector<int> beautifulArray(int n) 
    {
        vector<int> res = {1};
        while (res.size() < n) 
        {
            vector<int> temp;
            for (int it : res) 
            {
                if (it * 2 - 1 <= n) 
                  temp.push_back(it * 2 - 1);
            }
            for (int it : res)
            {
                if (it * 2 <= n) 
                  temp.push_back(it * 2);
            }
            res = temp;
        }
        return res;
    }
};



Input: 4
  Output: [1,3,2,4]
