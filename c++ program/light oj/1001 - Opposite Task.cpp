#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, i;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        if(n > 10) printf("10 %d\n", n - 10);
        else printf("0 %d\n", n);
    }
    return 0;
}
