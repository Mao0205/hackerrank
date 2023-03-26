/* 
For given string s & t, you need to move "s" to "t" by "k" step.
sample:
1. yu y 2 >> No
2.abesf fds 8 >> Yes 
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k) {
    int i, av, bv;
    int temp;
    for(i=0;i<s.size();i++)
    {
        if(s[i] != t[i])
            break;
    }
    av = s.size()-i;
    bv = t.size()-i;
    //case1: delet all form a
    if(k >= s.size()+t.size()){
        return "Yes";
    }
    //case2: a variants + b varints = k
    if(k == av+bv)
        return "Yes";        
    //case3: a variants + b varints + 2*n = k, where n=additional movement
    if( (k-av-bv)>=0 && (k-av-bv)%2 == 0 )
        return "Yes";
    else
        return "No";    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
