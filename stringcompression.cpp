class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1){
            return 1;
        }
        int ans=0;
        int i=0,j=0,n=chars.size();
       while(i<n){
           int count=1;
           while(i<n-1 && chars[i]==chars[i+1]){
               count++;
               i++;
           }
           chars[j++]=chars[i++];
           if(count>1){
               string countStr = to_string(count);
               for(auto it:countStr){
                   chars[j++]=it;
               }
           }
       }
       return j;
    }
};
