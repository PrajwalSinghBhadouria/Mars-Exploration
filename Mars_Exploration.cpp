#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int count=0;
    int c=0;
    for(int i=0; i<s.size(); ){
        if(s[i]=='S' && s[i+1]=='O' && s[i+2]=='S'){
            count++;
        }
        else{
             if(s[i]!='S'){
            c++;
             }
            if(s[i+1]!='O'){
                c++;
            }
            if(s[i+2]!='S'){
                c++;
            }
        
        }
        i=i+3;
    }
    return c;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
