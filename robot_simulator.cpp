#include<stdio.h>
#include<iostream>
#include<string>
using namespace std ;
int robot_sim(int x_cord ,int y_cord,string dire,int instruction_num);
int main()
{
	int cordi_x ,cordi_y ;
	string direction  ;
	int number_instr ;
	char instr ;
	cout<<"                                ----------------Robot Simulator-----------------                 "<<endl;
	cout<<"Enter The start point of robot and it's direction"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"x_coordinate : ";
	cin>>cordi_x;
	cout<<"y_coordinate : ";
	cin>>cordi_y;
	cout<<"direction : ";
	cin>>direction;
	cout<<"The robot start at "<<"{"<<cordi_x<<","<<cordi_y<<"}"<<"   direction : "<<direction<<endl ;
	cout<<endl;
	cout<<"Instructions You Want Robot To Do"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"Enter The Number of Instruction = " ;
	cin>>number_instr ;
	robot_sim(cordi_x,cordi_y,direction,number_instr);
	
	
	
}