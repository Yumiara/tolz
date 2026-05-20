#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string lower(string s){
    for(char &c : s) c = tolower(c);
    return s;
}

bool hasWord(string s,string w){
    int n=s.size(), m=w.size();
    for(int i=0;i+m<=n;i++){
        if(s.substr(i,m)==w){
            if((i==0 || !isalpha(s[i-1])) &&
               (i+m==n || !isalpha(s[i+m])))
                return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();

    while(n--){
        string s;
        getline(cin,s);

        string t=lower(s);

        if(hasWord(t,"hello") || hasWord(t,"hi")){
            cout<<"Hello! How can I help you?\n";
            continue;
        }

        if(hasWord(t,"bye") || hasWord(t,"goodbye")){
            cout<<"Goodbye! Have a nice day!\n";
            continue;
        }

        if(!s.empty() && s.back()=='?'){
            cout<<"That's an interesting question!\n";
            continue;
        }

        bool digit=false;
        for(char c:s) if(isdigit(c)) digit=true;

        if(digit){
            cout<<"I see some numbers there!\n";
            continue;
        }

        int len=0;
        for(char c:s) if(!isspace(c)) len++;

        if(len>=20){
            cout<<"That's quite a long message!\n";
            continue;
        }

        cout<<"I understand.\n";
    }
}