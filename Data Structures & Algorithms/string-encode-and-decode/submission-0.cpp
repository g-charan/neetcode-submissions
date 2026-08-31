class Solution {
public:

    string encode(vector<string>& strs) {
        string output = "";
        
        for(const string &str: strs){
            output += to_string(str.size()) + "#" + str;
        }

        return output;
    }

    vector<string> decode(string s) {
        vector<string> output;
        int i =0;


        while(i< s.size()){
            int j = i;

            while(s[j] != '#'){
                j++;
            }

            int length = stoi(s.substr(i,j-i));

            string word = s.substr(j+1, length);
            output.push_back(word);

            i = j + 1 + length;
        }

        return output;
    }
};