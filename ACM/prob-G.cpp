#include<bits/stdc++.h>

using namespace std;


int main(){
    vector <long> left, right;
    int h;
    long tmp, sumLeft = 0, sumRight = 0;
    cin >> h;
    for(int  i = 0; i < h; ++i){
        cin >> tmp;
        if(tmp > 0){
            right.push_back(tmp);
            sumRight += tmp;
        }
        if(tmp < 0){
            left.push_back(tmp);
            sumLeft += -1*tmp;
        }
    }
    sort(right.front(),right.back());
    sort(left.front(),left.back());
    return 0;
}
