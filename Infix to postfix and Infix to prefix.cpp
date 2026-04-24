#include<bits/stdc++.h>
using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}
string infixtopostfix(string infix)
{
     stack<char> st;
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }
        else { // operator
            while (!st.empty() && prec(st.top()) >= prec(c))
                {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }


    return postfix;

}

string infixtoprefix(string infix)
{
    reverse(infix.begin(), infix.end());
    for (char &c : infix) {
    if (c == '(') c = ')';
    else if (c == ')') c = '(';
}


    stack<char> st;
    string prefix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            prefix += c;  // operand
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                prefix += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }
        else { // operator
            while (!st.empty() && prec(st.top()) > prec(c))
                {
                prefix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        prefix += st.top();
        st.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;

}

int main() {
    string infix;
    cout<<"Inter Infix :";
    cin >> infix;
     string prefix=infixtoprefix(infix);
     string postfix=infixtopostfix(infix);

     cout<<"Postfix :";
    cout<<postfix  <<endl;
    cout<<"Prefix :";
    cout << prefix << endl;


}

