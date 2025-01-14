#include<bits/stdc++.h>
using namespace std;

// First approach 
// int main(){
//     int num;
//     cin>>num;
//     while(num >= 10){
//         int sum = 0;
//         for(int i=num; i > 0; i/=10){
//         sum += i%10;
//         }
//         num = sum;
//     }
//     cout << num;
// }

// time complexity if O(log (n^2))

//Second approach Digital Root concept [Digital Root = 1 + (n-1) mod 9]
int main(){
    int num;
    cin>>num;
    if(num == 0) cout<<0;
    cout<< 1 + (num - 1) % 9;
}