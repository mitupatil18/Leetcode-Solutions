class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long size=0;
        int len=s.length();

        for(char c: s){
            if(isdigit(c)){
                size=size*(c-'0');
            }
            else{
                size++;
            }
        }

        for(int i=len-1; i>=0; i--){
            char c=s[i];
            k=k%size;
           if((k == 0 && isalpha(c)) || (k == size && isalpha(c))){
                return string(1, c);
            }
            if(isdigit(c)){
                size=size/(c-'0');
            }
            else{
                size--;
            }
        }
        return "";
    }
};