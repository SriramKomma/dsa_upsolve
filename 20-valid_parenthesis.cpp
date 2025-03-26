class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
    
            for(auto it : s){
                if (it == '(' || it == '{' || it == '['){
                    st.push(it);
                }
                else {
                    if (st.empty()) return false;
                    char topEle = st.top();
                    if ((it == ')' && topEle == '(') ||
                        (it == '}' && topEle == '{') ||
                        (it == ']' && topEle == '[' )){
                            st.pop();
                        }
                    else return false;
                }
            }
            return st.empty();
            
        }
    };