#include<iostream>
using namespace std;
int main()
{
	cout<<"1.add"<<endl<<"2.sub"<<endl<<"3.mul"<<endl<<"4.div"<<endl<<"5.modlo"<<endl;
	int option_no;
	cin>>option_no;
	int x,y;
	switch(option_no){
		case 1:
			cout<<"add of two value"<<endl<<"enter two numbers";
			cin>>x>>y;
			cout<<"adding two value"<<x<<"and"<<y<<"is:"<<(x+y);
			break;
		case 2:
			cout<<"sub of two value"<<endl<<"enter two numbers";
			cin>>x>>y;
			cout<<"subtract two value"<<x<<"and"<<y<<"is:"<<(x-y);
			break;
		case 3:
			cout<<"multiply of two value"<<endl<<"enter two numbers";
			cin>>x>>y;
			cout<<"multiply two value"<<x<<"and"<<y<<"is:"<<(x*y);
			break;
		case 4:
			cout<<"div of two value"<<endl<<"enter two numbers";
			cin>>x>>y;
			cout<<"division two value"<<x<<"and"<<y<<"is:"<<(x/y);
			break;
		case 5:
			cout<<"mod of two value"<<endl<<"enter two numbers";
			cin>>x>>y;
			cout<<"mod two value"<<x<<"and"<<y<<"is:"<<(x%y);
			break;				
	
	    default:
		cout<<"invalid key";
		break;
	}
	
	return 0;
}
