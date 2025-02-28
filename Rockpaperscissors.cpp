#include<bits/stdc++.h>

using namespace std;
int main(){
	int n1,n2;
	string s;
	cout<<"user choice: ";
	getline(cin,s);
	if(s=="rock" || s=="Rock"){
		n2=0;
	}
	else if(s=="paper" || s=="Paper"){
		n2=1;
	}
	else if(s=="Scissors" || s=="scissors"){
		n2=2;
	}
	srand(time(0));
	n1=rand()%3;

	cout<<"system's choice :";
	if(n1==0){
		cout<<"rock";
	}
	if(n1==1){
		cout<<"paper";
	}
	if(n1==2){
		cout<<"scissors";
	}
	cout<<"\n";
	if(n1==n2){
		cout<<"No result";
	}
	
	else if((n1==0 && n2==1)||(n1==1 && n2==2)||(n1==2 && n2==0)){
		cout<<"User won";
	}
	else{
		cout<<"System won";
	}
	
	return 0;
}
