class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int i = 0, j = 0, star = -1, match = 0;
        while (i < s.size())
        {
            if (j < p.size() and (s[i]==p[j] or p[j]=='?')){
                i++;j++;
            }else if (j<p.size() and p[j]=='*'){
                match = i;
                star = j;
                j++;
            }else if (star!=-1){
                match++;
                i=match;
                j=star+1;
            }else {
                return false;
            }
        }
        while (j<p.size() and p[j]=='*'){
            j++;
        }
        return j==p.size();
    }
};
