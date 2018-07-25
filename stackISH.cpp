#include <bits/stdc++.h>

using namespace std;

bool brackets(string exp){
    stack<char> mem;
    for(char c: exp){
        if(c == '['){
            mem.push(']');
        }
        else if(c == '{'){
            mem.push('}');
        }
        else if(c == '('){
            mem.push(')');
        }
        else{
            if(mem.empty() || c != mem.top()){
                return false;
            }
            mem.pop();
        }
    }
    return mem.empty();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string expression;
        getline(cin, expression);
        if(brackets(expression)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
