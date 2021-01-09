#include<iostream>
#include<conio.h>
using namespace std;
class classArray
{
private:
	int data;
	public:
		void getdata(void){
			cout<<"\nEnter data";
			cin<<data;
			}
			void showdata(){
			cout<<"Data is"<<Data<<endl;}
};
int main()
{
	classArray a[5];  //for creating array of objects
	for(int i=0; i<5; i++);
	a[i].getdata();
	for(int i=0; i<5; i++);
	a[i].showdata();
	return 0;
}
