class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>smap;
        unordered_map<char,int>tmap;
        for(int i=0;i<s.length();i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }

        for(int i=0;i<smap.size();i++){
            if(smap[i]!=tmap[i])
            {
                return false;
            }
        }
        return true;
    }
};