#include<bits/stdc++.h>
using namespace std;
const int MAXN = 3005;  // 定义最大楼梯数
class BigInt {
public:
    int d[MAXN], len;
    BigInt() {
        memset(d, 0, sizeof(d));
        len = 1;
    }
    BigInt(int num) {
        *this = BigInt();
        while (num > 0) {
            d[len++] = num % 10;
            num /= 10;
        }
        len--;
    }
    BigInt operator + (const BigInt& b) const {
        BigInt c;
        c.len = max(len, b.len);
        for (int i = 1; i <= c.len; i++) {
            c.d[i] += d[i] + b.d[i];
            c.d[i+1] += c.d[i] / 10;
            c.d[i] %= 10;
        }
        if (c.d[c.len+1] > 0) {
            c.len++;
        }
        return c;
    }
    void print() {
        for (int i = len; i >= 1; i--) {
            cout << d[i];
        }
        cout << endl;
    }
};
BigInt dp[MAXN];
int BinarySearch(int *array, int aSize, int key)  
{  
    if ( array == NULL || aSize == 0 )  
        return -1;  
    int low = 0;  
    int high = aSize - 1;  
    int mid = 0;  
    while ( low <= high )  
    {  
        mid = (low + high )/2;  
        if ( array[mid] < key)  low = mid + 1;  
        else if ( array[mid] > key )     high = mid - 1;  
        else  return mid;  
    }  
    return -1;  
} 
int main() {
    // 初始化状态转移数组
    dp[1] = BigInt(1);
    dp[2] = BigInt(2);
    dp[3] = BigInt(4);
    for (int i = 4; i < MAXN; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    int n;
    while (cin >> n) {
        dp[n].print();
    }
    return 0;
}
