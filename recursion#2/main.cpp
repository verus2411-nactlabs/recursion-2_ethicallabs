//
//  main.cpp
//  recursion#2
//
//  Created by Ethical Hacking Labs on 28/11/24.
//

#include <iostream>

using namespace std;
int T, n;

bool checkPrime( int numberCheck, int checkValue = 2){
    // base case
    if ( numberCheck <= 2)
        return numberCheck == 2 ? true : false;
    if( numberCheck % checkValue == 0 )
        return false;
    if( checkValue * checkValue > numberCheck ){\
        return true;
    }

    // recursion
    checkPrime( numberCheck, checkValue + 1);
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio();
   freopen("sample_input.txt", "r", stdin);
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
