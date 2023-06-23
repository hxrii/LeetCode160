class Solution {
public:





    int minAddToMakeValid(string s) {
        
        int op=0;
        int cl=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                op++;
            }

            if(s[i]==')')
            {
                if(op>0)
                {
                    op--;
                }
                else
                {
                    cl++;
                }
            }



        }

        return op + cl;



    }
};