class Solution
{
    public:
        void helper(string ip, string op, int index, map<char, string> &mp, vector<string> &ans)
        {

            if (index == ip.size())
            {
                ans.push_back(op);
                return;
            }
            string word = mp[ip[index]];
            for (int i = 0; i < word.size(); i++)
            {
                helper(ip, op + word[i], index + 1, mp, ans);
            }
        }
    vector<string> letterCombinations(string digits)
    {
        if (digits == "") return {};
        map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string> ans;
        string op = "";
        helper(digits, op, 0, mp, ans);
        return ans;
    }
};