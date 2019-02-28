#include <bits/stdc++.h>
using namespace std;
const int MAXN=3000000; 
int main() {
    int n;
    scanf("%d", &n);
    int ar[MAXN];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    sort(ar, ar+n);
    for(int i=0; i<n; i++){
        printf("%d", ar[i]);
    }
}
