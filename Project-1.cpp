#include<iostream>
using namespace std;

int main(){
	int n,h,m,ts,s,hs,ms;
	cout<<"Press 1 to convert seconds to HH:MM:SS\n";
	cout<<"Press 2 to convert  HH:MM:SS to seconds\n";
	
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Enter total seconds:\n";
			cin>>ts;
			h=ts/3600;
			m=(ts%3600)/60;
			s=(ts%3600)%60;
			cout<<"HH:MM:SS=>";
			cout<<h<<":"<<m<<":"<<s;
			break;
		case 2:
			cout<<"Enter hour:\nEnter minute:\nEnter seconds:\n";
			cin>>h>>m>>s;
			hs=h*3600;
			ms=m*60;
			ts=hs+ms+s;
			cout<<"Total seconds:"<<ts;
		    	
	}
	return 0;
}
