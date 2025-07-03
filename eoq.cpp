// MR A is a manufacturer who prepares a report of products that should 
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<double> eoq ;
	int t;
	cin>>t;
	double annual_demand, making_cost, storing_cost;
	while(t--){
	cin>>annual_demand>>making_cost>>storing_cost;
	int res = sqrt((2*making_cost*annual_demand)/storing_cost);
	eoq.push_back(res);
	}
	for(auto i : eoq) cout<<i<<endl;
	double percentage = (((eoq[1]-eoq[0])/282)*100);
	cout<<percentage;
	return 0;

}