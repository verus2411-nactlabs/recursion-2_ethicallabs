//
//  main.cpp
//  recursion#2
//
//  Created by Ethical Hacking Labs on 28/11/24.
//

#include <iostream>

using namespace std;
int T, n;

bool checkPrime( int numberCheck, int checkValue){
    if (numberCheck == checkValue) {
        return true;
    }
    if (numberCheck % checkValue == 0) {
        return false;
    }
    else{
        checkValue += 1;
        checkPrime( numberCheck, checkValue );
    }
    
    return true;
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio();
//    freopen("sample_input.txt", "r", stdin);
    cin >> T;
    
    for( int test_no = 1; test_no <= T; test_no++){
        cin >> n;
        int sumPrime = 0;
        // getPrime from 1 to n
        for( int i = 0; i <= n; i++){
            if (checkPrime(i, 2)) {
                sumPrime += i;
            }
            
        }
        cout << "#" << test_no << "" << sumPrime << endl;
    }
    return 0;
}
