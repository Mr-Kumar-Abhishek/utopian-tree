#include <iostream>
using namespace std;

int height(int n) {
    int init = 1, smmr = 1, spr=2, flag=0;
    for (int i = 0; i <n; i++){
        if (flag==0) {
            init = init*spr;
            flag=1;
        }else{
            init = init + smmr;
            flag = 0;
        }
    }
    return init;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}