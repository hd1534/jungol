#include <bits/stdc++.h>

using namespace std;


int main(int argc, char *argv[]) {
    map<string, int> m;
    string tmp;

    while(true) {
            cin >> tmp;

            if(tmp == "END")
                break;

            if (m.find(tmp) == m.end())
                m.insert({tmp, 1});
            else
                m[tmp]++;
    }

    for (auto c : m) {
        cout << c.first << " : " << c.second << "\n";
    }


    return 0;
}
