//S3 - Jack and Jill are playing an alphabet game, 
// Jack is interested in tracing consonants while Jill is interested in tracing non-consonants. 
// Help Jack and Jill with an appropriate code.
#include<bits/stdc++.h>
using namespace std;

int main(){
	char alpha;
	int t;
	cin>>t;
	while(t--){
	cin>>alpha;
	tolower(alpha);
	if(alpha == 'a'||'e'||'i'||'o'||'u')
	cout<<"Jack follows a consonant"<<endl;
	else cout<<"Jill follows a non-consonant"<<endl;
cout<<int(alpha)<<endl;
	}
	
	return 0;


}
