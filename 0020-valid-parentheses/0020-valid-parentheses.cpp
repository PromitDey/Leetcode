class Solution {
public:
    bool isValid(string str) {
        stack <char> s;
        
        for(int i=0; i<str.length();i++){
            char first=str.at(i);
            if(openBrace(first)){
                s.push(first);
            }
            else{
                if(s.empty()){
                    return false;
                }
                else if(!matchBrace(s.top(), first)){
                    return false;
                }
                else{
                    s.pop();
                }
            }
        }
        return s.empty();
    }
    bool openBrace(char c){
        return(c=='(' || c=='{' || c=='[');
    }
    bool matchBrace(char a,char b){
        return(
        (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
};