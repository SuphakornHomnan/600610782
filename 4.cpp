#include<iostream>
using namespace std;
int main()
{
	string text1,text2;
	int N;
	int count=0;
	cout<<"Enter the first text"<<text1;
	cin>>text1;
	cout<<"Enter the secord text"<<text2;
	cin>>text2;
	cout<<"Enter N:";
	cin>>N;
	while(count<N){
		if(count%2==0){
			cout<<text1<<" ";
		}
		else{
			cout<<text2<<" ";
		}
		count=count+1;
		}
	return 0;
}
