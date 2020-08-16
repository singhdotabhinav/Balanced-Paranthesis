class Solution {
public:
    
    bool ArePair(char opening,char closing){
        
	    if(opening == '(' && closing == ')')
            return true;
	    else if(opening == '{' && closing == '}')
            return true;
	    else if(opening == '[' && closing == ']') 
            return true;
	    return false;
    }
    
    bool isValid(string s)
{
	stack<char>  stk;
	for(int i =0;i<s.length();i++)
	{
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
			stk.push(s[i]);
		else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
		{
			if(stk.empty() || !ArePair(stk.top(),s[i]))
				return false;
			else
				stk.pop();
		}
	}
	return stk.empty() ? true:false;
}
    
};
