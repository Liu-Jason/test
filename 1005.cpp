#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    int i;
    int ele;
    int target;
    string outcome = "";
    stack<int> s1, s2;
    while (cin >> n) {
        i = 0;
        target = 1;
        outcome = "";
        while (i < n) {
           cin >> ele;
           if (!s1.empty() && ele <= s1.top()) {
               outcome += "a ";
               s1.push(ele);
           } else if (!s2.empty() *&& ele <= s2.top()) {
               outcome += "c ";
               s2.push(ele);
           } else {
               outcome = '0';
               break;
           }
           if (!s1.empty() && s1.top() == target) {
               outcome += "b ";
               s1.pop();
               target++;
           } else if (!s2.empty() && s2.top == target) {
               outcome += "d ";
               s2.pop();
               target++;
           }
        }
        if (outcome == "0") {
            cout << outcome << endl;
        } else {
            outcome = outcome.substr(0, outcome.length()-1);
            cout << outcome << endl;
        }
    }
}
