#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    string s;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        cin >> s;
        if(s.length() <= 10) cout << s << endl;
        else cout << s[0] << s.length() - 2 << s[s.length()-1] << endl;
    }
    return 0;
}