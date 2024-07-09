//User function Template for C++
class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> output(10);
        for(int i=1;i<=10;i++){
            output[i-1]=N*i;
        }
    return output;
        
    }
};