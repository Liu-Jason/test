#include<iostream>
#include<string>
#include<stack>
#include<iomanip>

using namespace std;

double calculate(string& exp) {
    int len = exp.length();
    int i = 0;
    double num;
    int left, right;
    stack<double> outcome;
    stack<char> Operator;
    while (i < len) {
        if (exp[i] >= 'a' && exp[i] <= 'z') {
            num = exp[i]-'a'+1;
            outcome.push(num);
        } else {
            left = outcome.top();
            outcome.pop();
            right = outcome.top();
            outcome.pop();
            switch (exp[i]) {
            case '+':
                num = left+right;
                break;
            case '-':
                num = left-right;
                break;
            case '*':
                num = left*right;
                break;
            case '/':
                num = left/right;
                break;
            }
            outcome.push(num);
        }
        i++;
    }
    return outcome.top();
}

int main() {
    int n;
    int i = 0;
    double output;
    string exp;
    cin >> n;
    while (i < n) {
        cin >> exp;
        output = claculate(exp);
        cout << fixed << setprecision(2) << output << endl;
    }
    system("pause");
    return 0;
}
