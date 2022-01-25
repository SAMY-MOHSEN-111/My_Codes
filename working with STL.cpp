#include<iostream>
#include<algorithm>
using namespace std;
void low(char& ch){
    ch=tolower(ch);
}
int main(){
    string tmp = "Hello I am trying to convert to lowercase";
    for_each(tmp.begin(),tmp.end(),low);
    string::iterator it = tmp.begin()+2;
    tmp.insert(it,'c');
    cout<<tmp;

    return 0;
}
