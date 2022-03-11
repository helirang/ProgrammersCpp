#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a;
    int b;
    string temp;
    
    cin >> a >> b;
    
    for(int i=0; i<a;i++){
        temp += '*';
    }
    for(int j=0;j<b;j++){
        cout << temp << endl;
    }
    
    return 0;
}
