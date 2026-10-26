
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums;
    cout<<"Enter";
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        nums.push_back(n);
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "<<endl;
    }
}