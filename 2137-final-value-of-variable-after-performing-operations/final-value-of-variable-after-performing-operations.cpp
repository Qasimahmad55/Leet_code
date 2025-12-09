class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for (auto &op : operations) {
            if (op[1]=='+'){
                x += 1;}
            else{
                x -=1;}
        }
        return x;
    }
};