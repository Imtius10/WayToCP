#include <bits/stdc++.h>
using namespace std;

#define nl "\n"


bool isKeyword(const string &s) {
    vector<string> keywords = {
        "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor",
        "bool", "break", "case", "catch", "char", "char16_t", "char32_t", "class",
        "compl", "const", "constexpr", "const_cast", "continue", "decltype",
        "default", "delete", "do", "double", "dynamic_cast", "else", "enum",
        "explicit", "export", "extern", "false", "float", "for", "friend", "goto",
        "if", "inline", "int", "long", "mutable", "namespace", "new", "noexcept",
        "not", "not_eq", "nullptr", "operator", "or", "or_eq", "private",
        "protected", "public", "register", "reinterpret_cast", "return", "short",
        "signed", "sizeof", "static", "static_assert", "static_cast", "struct",
        "switch", "template", "this", "thread_local", "throw", "true", "try",
        "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual",
        "void", "volatile", "wchar_t", "while", "xor", "xor_eq", "override",
        "final", "transaction_safe", "transaction_safe_dynamic", "import",
        "module", "requires", "co_await", "co_return", "co_yield"
    };
    return find(keywords.begin(), keywords.end(), s) != keywords.end();
}


bool isOperator(char c) {
    string operators = "+-*/=%<>&|!^~";
    return operators.find(c) != string::npos;
} 


bool isDelimiter(char c) {
    string delimiters = " ;(){}[],.:\"'";
    return delimiters.find(c) != string::npos;
}


bool isInteger(const string &s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}


bool isFloat(const string &s) {
    bool hasDot = false;
    int digitCount = 0;
    for (char c : s) {
        if (c == '.') {
            if (hasDot) return false;
            hasDot = true;
        } else if (!isdigit(c)) {
            return false;
        } else {
            digitCount++;
        }
    }
    return hasDot && digitCount > 0;
}


void classifyToken(const string &token) {
    if (token.empty()) return;

    if (isKeyword(token)) {
        cout << token << " : Keyword" << nl;
    } else if (isInteger(token)) {
        cout << token << " : Integer" << nl;
    } else if (isFloat(token)) {
        cout << token << " : Float" << nl;
    } else {
        cout << token << " : Identifier" << nl;
    }
}


void tokenize(const string &line) {
    string token;

    for (int i = 0; i < line.size(); ++i) {
        char c = line[i];

        if (isalnum(c) || c == '_' || c == '.') {
            token += c;
        } else {
            classifyToken(token);
            token.clear();

            
            if (isOperator(c)) {
                string op(1, c);
                if (i + 1 < line.size()) {
                    char next = line[i + 1];
                    string twoCharOp = op + next;
                    vector<string> multiOps = {"==", "!=", ">=", "<=", "++", "--", "&&", "||"};
                    if (find(multiOps.begin(), multiOps.end(), twoCharOp) != multiOps.end()) {
                        cout << twoCharOp << " : Operator" << nl;
                        ++i;
                        continue;
                    }
                }
                cout << op << " : Operator" << nl;
            } else if (isDelimiter(c)) {
                if (c != ' ')
                    cout << c << " : Delimiter" << nl;
            }
        }
    }

    classifyToken(token); 
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    string line;
    while (getline(cin, line)) {
        tokenize(line);
    }

    return 0;
}
