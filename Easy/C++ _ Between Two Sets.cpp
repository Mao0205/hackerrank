/*先找A的最小公倍數a再找B的最大公因數b，在這兩個範圍a~b之間，計算n*a可以倍b整除的數量並回傳，其中n=1,2,3,4....*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int GreatCommonFactor(int a, int b)
{
    int temp;
    if(a<b)
    {
        temp =a;
        a=b;
        b=temp;
    }
    int r;
    while(a%b!=0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int FindLeastCommonMultiple(int a, int b)
{
    int r = GreatCommonFactor(a,b);
    return a*b/r;
}


int getTotalX(vector<int> a, vector<int> b) {
    int i, factorA, factorB;
    int count=0, temp;
    
    
    /*Find Least Common Multiple */
    factorA = a[0];   
    for(i=1;i<a.size();i++)
    {
        factorA = FindLeastCommonMultiple(a[i],factorA);
    }
    
    /*Find Great Common Factor*/
    factorB = b[0];
    for(i=1;i<b.size();i++)
    {
        factorB = GreatCommonFactor(b[i],factorB);        
    }
    
    printf("%d %d\n", factorA, factorB);
    
    /* From factorA~factorB find (n*factorA) | factorB , and count it. */
    temp = factorA;
    while(temp <= factorB)
    {
        if(factorB%temp == 0)
            count++;
        temp += factorA; 
    }
    
    
    
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
