#include<iostream>
using namespace std;
   int main()   {
   	int option;
   	double withdraw=0 , balance=0,deposite=0 ;
   	
   	do{
	   
   	   	       	
   	cout<<"\n1. Check balance "<<endl;
   	cout<<"2. Deposite money "<<endl;
   	cout<<"3. Withdraw Money "<<endl;
   	cout<<"4. Exit"<<endl;
   	
   	cout<<"\nPlease slelect your execution type (1-4)"<<endl;
   	cin>>option;
   	 
   	switch(option){
   		case 1:
   			cout<<"Your current balance is :Rs."<<balance<<endl;
   			break;
   			
   		case 2:
   			cout<<"Enter the amount you want to deposite : "<<endl;
   			cin>>deposite;
   			if(deposite>0){
   			balance=balance+deposite;
   			cout<<"your amount is successfully deposited"<<endl;
   			cout<<"you deposited :Rs."<<deposite<<endl;
   			cout<<"your current balance is :Rs."<<balance<<endl;
   		                  }
   		    else{
			   
			   cout<<"please input positive amount and try again !"  <<endl; 
			   continue;
		}
   			break;
   			
   		case 3:
   			cout<<"Enter the amount you want to withdraw : "<<endl;
   			cin>>withdraw;
   			if(withdraw>0){
   				if(withdraw<=balance){
   			balance=balance-withdraw;
   			cout<<"your amount is successfully withdrawed"<<endl;
   			cout<<"you withdrawed :Rs."<<withdraw<<endl;
   			cout<<"your current balance is :Rs."<<balance<<endl;
   			
   		}
   		else
		   
   		cout<<"error limit exceeded! please renter the withdrawal amount!"<<endl;
   	}

   		else{
		   cout<<"please input positive amount and try again !"  <<endl;
   		   continue;
   	}
   		                  
   			break;
			   
		case 4:
			cout<<"operation end"<<endl;
   			break;	
			   
		default:
		    cout<<"Invalid option selected! try again"<<endl;
				
	   }
   }while(option!=4);
   	return 0;  	
}
