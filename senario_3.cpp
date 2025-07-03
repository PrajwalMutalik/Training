//Scenario 4: Jennie is a chatbot that classifies neutral , non neg & neg values
//generate a code to help Jennie
int main(){
	int number; 
	cin>>number;
	if(number==0) cout<<"Number "<<number<<" is Neutral"<<endl;
	else if(number<0) cout<<"Number "<<number<<" is Negative"<<endl;
	else cout<<"Number "<<number<<" is Non Negative"<<endl;
	return 0;
}