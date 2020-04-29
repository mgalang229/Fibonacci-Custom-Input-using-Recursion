#include <iostream>
using namespace std;

void fibo(int a, int b, int p){
    int t;
    if(p - 2 > 0){
        t = a + b;
        a = b;
        b = t;
        cout << t << " ";
        fibo(a, b,  p - 1);
    }
}
int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    printf("%d %d " , n1, n2);
    fibo(n1, n2, n3);
    return 0;
}