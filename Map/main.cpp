#include <iostream>
#include <map>
#include <string>
#include <stack>
#include <list>

using namespace std;

void print(map<int, string> m){
    for(map<int, string>::iterator iter = m.begin();iter != m.end(); ++iter){
        cout << iter->first << "," << iter->second << endl;
    }
}

int main() {
    map<int ,string> m;
    m.insert(make_pair(1000, "zhangsan"));
    m.insert(pair<int, string>(1001, "lisi"));
    m[1002]="huyang";

    print(m);

    stack<int> s;
    stack<string, list<string> > st;

    s.push(10);
    s.push(20);
    s.push(30);

    st.push("hello nwu");
    st.push("go nwu");

    cout << "s size:" << s.size() <<endl;
    while (!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }

    cout << "st size:" << st.size() <<endl;
    while (!st.empty()){
        cout << st.top() <<endl;
        st.pop();
    }

    return 0;
}