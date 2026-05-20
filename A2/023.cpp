#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(char &c : s) c = toupper(c);

    bool onlyIT = true;
    for(char c : s)
        if(c!='I' && c!='T')
            onlyIT = false;

    if(onlyIT){
        cout<<"unknown "<<s.size();
        return 0;
    }

    int maxA = 0, curA = 0;

    for(int i=0;i<s.size();i++){

        if(s[i]!='R' && s[i]!='A' && s[i]!='B' && s[i]!='I' && s[i]!='T'){
            cout<<"no "<<i;
            return 0;
        }

        if(s[i]=='R'){
            int j=i+1;
            if(j>=s.size() || s[j]!='A'){
                cout<<"no "<<i;
                return 0;
            }

            while(j<s.size() && s[j]=='A'){
                curA++;
                maxA=max(maxA,curA);
                j++;
            }
            curA=0;
            i=j-1;
            continue;
        }

        if(s[i]=='B'){
            int j=i+1;
            if(j>=s.size() || (s[j]!='I' && s[j]!='T')){
                cout<<"no "<<i;
                return 0;
            }

            while(j<s.size() && (s[j]=='I' || s[j]=='T')){
                j++;
            }

            i=j-1;
            continue;
        }

        if(s[i]=='A'){
            curA++;
            maxA=max(maxA,curA);
        } else {
            curA=0;
        }
    }

    cout<<"yes "<<maxA;
}