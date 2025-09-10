#include<bits/stdc++.h>
using namespace std;



void print13(int n){
    int num = 1;                 // starting number
    for(int i=1; i<=n; i++){     // loop for rows
        for(int j=1; j<=i; j++){ // loop for numbers in each row
            cout << num;         // print current number
            num = num + 1;       // increment number
        }
        cout << endl;            // move to next line after row
    }
}

int main(){
    int n;
    cin >> n;     // input number of rows
    print13(n);   // call function to print pattern
    return 0;
}
