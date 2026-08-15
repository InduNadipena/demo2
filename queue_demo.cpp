#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> tasks;
    tasks.push("Build");
    tasks.push("Test");
    tasks.push("Deploy");

    while (!tasks.empty()) {
        cout << tasks.front() << endl;
        tasks.pop();
    }
}