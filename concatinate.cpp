#include<iostream>
#include<string>

using namespace std;

int main(){
     string s1 = "fam";
     string s2 = "ily";

     s1.append(s2);
    //  s1 = s1 + s2;
     cout<< s1 <<endl;
    //  cout<< s1 + s2 <<endl;

    cout << s1[1] <<endl; //charater access

    return 0;
}