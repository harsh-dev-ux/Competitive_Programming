#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;

    while(n--){
        string s ;
        cin >> s;

        for(int j = 0; j < s.size(); j++){
            s[j] = toupper(s[j]);


        }

        if (s == "YES"){
            cout << "YES\n";

        }
        else {
            cout << "NO\n";

        }



    }


}