#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "GeeksForGeeks";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
	    int n = str.size();
	    unordered_set<char> ss;
	    for(int i=0; i<n; i++){
	        if(ss.find(str[i])!=ss.end()){
	            str.erase(i, 1);
	            i++;
	        }else{
	            ss.insert(str[i]);
	        }
	    }
    
    
    return 0;
}