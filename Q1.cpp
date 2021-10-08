#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {

	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;

	cout << reverseWord(s) << endl;
	}
	return 0;

}
string reverseWord(string str){
    int n=str.size();

      int j=str.size()-1,temp=0;
    for(int i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[j-i];
        str[j-i]=temp;
    }
    return str;
}
