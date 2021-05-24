#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    
    cout<<s1.size()<<" "<<s2.size()<<endl<<s1+s2<<endl;
    
    // char c1;
    // c1=s1[s1.size()];
    // c2=s2[0];
    
    s1[0]=s2[0]+s1[0];
    s2[0]=s1[0]-s2[0];
    s1[0]=s1[0]-s2[0];
    cout<<s1<<" "<<s2;
  
    return 0;
}