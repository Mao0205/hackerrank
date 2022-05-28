#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    int i;
    string ans;
    if((year%4 == 0 && year%100 != 0) || ((year <= 1917)&&(year%4==0))||((year>1918)&& (year%400==0)))
    {
        ans.append("12.09.");
    }
    else if(year == 1918)
    {
        ans.append("26.09.");
    }
    else {
    
        ans.append("13.09.");
    }
    ans.append("0000");
    for(i=0;i<4;i++)
    {  
        ans[9-i] = (char)(year%10)+'0';
        
        year /= 10;
    }
    
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

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
