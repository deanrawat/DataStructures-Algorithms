// First go to binarysearch.com -> problems -> Reverse Words.
/*
Given a string s of words delimited by spaces, reverse the order of words.

Constraints

n ≤ 100,000 where n is the length of s
Example 1
Input
sentence = "hello there my friend"
Output
"friend my there hello"

*/
string solve(string st) {
    reverse(st.begin(),st.end());
    int i = 0, j = 0;
    for(int x = 0; x < st.length(); x++){
        if(st[x] == ' '){
            reverse(st.begin()+i, st.begin()+x);
            i = x+1;
        }
    }
    reverse(st.begin()+i, st.end());
    return st;
}