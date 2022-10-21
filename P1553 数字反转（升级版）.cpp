#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int cnt = 0;
    int p = 1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= '9' && s[i]>='0')cnt++;
        else 
        {
            p = 0;
            cnt = i;
            break;
        }
    }
    int x = cnt;
    while (s[--cnt]=='0'){}
    for (int i = cnt; i >= 0; i--)cout << s[i];
    if (p == 1) return 0;
    cout << s[x];
    while (s[++x]=='0'){}
    for (int i = s.size()-1; i>=x; i--)cout << s[i];
    return 0;
}