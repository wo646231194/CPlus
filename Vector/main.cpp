#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    vector<int > v1;
    vector<int > v2(v1);
    vector<int>v3 = v1;
    vector<int> v4(10,100);
    vector<int> v5(100);

    vector<string> v6;
    //���
    v6.push_back("hello huyang");
    v5.push_back(50);
    //ɾ��ĩβ
    v4.pop_back();

    cout << v4[2] <<endl;
    cout << v4.at(2) <<endl;
    cout << v4.front() <<endl;
    cout << v4.back() << endl;
    cout << v4.size() <<endl;
    cout << v4.empty() <<endl;

    string s;
    vector<string> v;
    while (getline(cin,s)){
        if(s=="q") break;
        v.push_back(s);
    }

    int length = 0;
    for(int i=0;i<v.size();i++){
        string t = v[i];
        length += t.size();
    }

    cout<<"���ַ���Ϊ "<<length<<endl;
    cout << "������Ϊ "<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        string t = v[i];
        cout << i+1 <<" "<< t << " " <<"�ַ���"<<t.size()<<endl;
    }

    return 0;
}