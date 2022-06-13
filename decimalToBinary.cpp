#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans= 0;
    int i =0;
    if(n<0){
        n = n * (-1);
    }
    while(n!=0){
        int bit = n&1;
        ans = (bit*pow(10,i)+ans);
        n = n >>1;
        i++;

    }
    cout<< "Answer is : "<< ans<<endl;;
}
/*
    loop continues until n is 0

    if we do &1 with n , we get the last bit (0/1)

    we use reverse order formula : ans = (ans * 10^i)+ans 
    right shift n, because we already have the last bit now we need previous bit

    i++



    we are getting the last bit, putting into reverse formula then doing right shift. thats it
*/
