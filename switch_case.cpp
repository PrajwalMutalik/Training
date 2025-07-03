#include<bits/stdc++.h>
#define fr(x) for(int i = 0; i<x; i++)
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x,a;
	cout<<"Categories:"<<endl;
	cout<<"1.Pizza 2.Meals 3.Desserts 4.Milkshakes"<<endl;cout<<endl;
	cout<<"Select your choice"<<endl; cout<<endl;

	cin>>x;
	switch(x){
	case 1: cout<<"Here is the Pizza menu"<<endl;
			cout<<"1.ABC ,2.XYZ, 3.PQR"<<endl;cout<<endl;

			cin>>a;
			switch(a){
			case 1: cout<<"Order placed for 1.ABC,Delivered in XYZ minutes."<<endl; break;
			case 2: cout<<"Order placed for 2.XYZ,Delivered in XYZ minutes."<<endl; break;
			case 3: cout<<"Order placed for 3.PQR,Delivered in XYZ minutes."<<endl; break;
			default: cout<<"Invalid"<<endl;
			}
			break;
	case 2: cout<<"Here is the Meals menu"<<endl;
			cout<<"1.ABC ,2.XYZ, 3.PQR"<<endl;	cout<<endl;
			cin>>a;
			switch(a){
			case 1: cout<<"Order placed for 1.ABC,Delivered in XYZ minutes."<<endl; break;
			case 2: cout<<"Order placed for 2.XYZ,Delivered in XYZ minutes."<<endl; break;
			case 3: cout<<"Order placed for 3.PQR,Delivered in XYZ minutes."<<endl; break;
			default: cout<<"Invalid"<<endl;
			}
			break;
	case 3: cout<<"Here is the Desserts menu"<<endl;
			cout<<"1.ABC ,2.XYZ, 3.PQR"<<endl;	cout<<endl;

			cin>>a;
			switch(a){
			case 1: cout<<"Order placed for 1.ABC,Delivered in XYZ minutes."<<endl; break;
			case 2: cout<<"Order placed for 2.XYZ,Delivered in XYZ minutes."<<endl; break;
			case 3: cout<<"Order placed for 3.PQR,Delivered in XYZ minutes."<<endl; break;
			default: cout<<"Invalid"<<endl;
			}
			break;
	case 4: cout<<"Here is the Milkshakes menu"<<endl;
			cout<<"1.ABC ,2.XYZ, 3.PQR"<<endl;	cout<<endl;

			cin>>a;
			switch(a){
			case 1: cout<<"Order placed for 1.ABC,Delivered in XYZ minutes."<<endl; break;
			case 2: cout<<"Order placed for 2.XYZ,Delivered in XYZ minutes."<<endl; break;
			case 3: cout<<"Order placed for 3.PQR,Delivered in XYZ minutes."<<endl; break;
			default: cout<<"Invalid"<<endl;
			}
			break;
	default: cout<<"Invalid choice";
	}
    return 0;
}

