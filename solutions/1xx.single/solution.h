#include <cstdio>
#include <algorithm>
using namespace std;

int n = 4;
int median(int b[]) {
    sort(b, b+n);
    int len = n;
    if(len%2 == 0)
        return b[len/2-1];
    else
        return b[len/2];
}

int main(){
    int a[10];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%d\n", median(a));
    return 0;
}
