class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()) return false;
    
    unordered_map<char,char> stot; 
    unordered_map<char,char> ttos; 
    
    for(int i = 0; i < s.length(); i++)
    {
        char S = s[i];
        char T = t[i];
        
        if(stot.count(S)) {
            if(stot[S] != T) return false;
        } else {
            stot[S] = T;
        }
        
        if(ttos.count(T)) {
            if(ttos[T] != S) return false;
        } else {
            ttos[T] = S;
        }
    }
    
    return true;
}
};