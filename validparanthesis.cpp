bool valid(string s)
{
    // code here
    stack<char>ss;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        /// check condition
        if(ch == '{' || ch == '[' || ch =='(')
        {
            ss.push(ch);
        }
        else
        {
            if(!ss.empty())
            {
                char top=ss.top();
                if((ch == ']' && top == '[') || (ch == '}' && top == '{')||(ch == ')' && top == '(') )
                {
                    ss.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(ss.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
