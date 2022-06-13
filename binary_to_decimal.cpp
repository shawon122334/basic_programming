#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0,i=0;
    while(n!=0){
        int digit = n%10;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<ans<<endl;
}

/*
    we can not take binary input, computer always treat inputs as an decimal. then it converts them into binary
    if we take 101 as input, computer treats it as decimal and converts into 1100101. but we dont want this, so we take the reminder(digit) and if it is 1 then execute the formula.

    if digit 1 
        2^3 + 2^2 + 2^1 + 2^0 = something
*/