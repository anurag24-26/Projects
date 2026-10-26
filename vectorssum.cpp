#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums={5,10,15,20,25};
    int sum;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    cout<<sum;
}