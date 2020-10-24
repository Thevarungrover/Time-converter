#include<iostream>
using namespace std;

//CLASS DECLARATION
class time{
	private :
		int H; // FOR HOURS
		int M; // FOR MINUTES
		int S; // FOR SECONDS
	public :
		gettime(); // FOR ENTERING TIME 
		displaytime(); // TO DISPLAY TIME THAT IS ENTERED
		calcusec();	 // TO CALCULATE TOTAL SECONDS
};

// TO GET INPUT
time :: gettime(){
	cout<<"\nEnter time : ";
	cout<<"\nHours : ";
	cin>>H;
	cout<<"\nMinutes : ";
	cin>>M;
	cout<<"\nSeconds : ";
	cin>>S;
}

// TO DISPLAY TIME
time :: displaytime(){
	cout<<"\nThe time is : "<<H<<":"<<M<<":"<<S;
}

// TO CALCULATE SECONDS
time :: calcusec(){
	int sum = 0;
	sum = sum + S;
	sum = sum + (M * 60);
	sum = sum + (H *60 * 60);
	cout<<"\nTime in total seconds : "<<sum;
}

// MAIN FUNCTION
main(){
	time a; // OBJECT 'a' IS CREATED OF 'time' CLASS
	cout<<"--Enter the required details to get your desired result--";
	a.gettime();
	
	cout<<"\nDo you want to display the time that you have entered ?\nEnter '1' for yes or '2' for no..";
	int choice;
	cin>>choice;
	if(choice == 1)
	{
		a.displaytime();
	}
	
	a.calcusec();
	
	return 0;
}
