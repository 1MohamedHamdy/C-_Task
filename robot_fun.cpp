#include<stdio.h>
#include<iostream>
#include<string>
using namespace std ;
int robot_sim(int x_cord ,int y_cord,string dire,int instruction_num);
int robot_sim(int x_cord ,int y_cord,string dire,int instruction_num)
{
	
	int x_cord_new , y_cord_new ;
	char instruction[instruction_num-1];
	string dire_new ;
	cout<<"Enter The Instruction : " ;
	for(int i =0;i<instruction_num;i++)
	{
		
		cin>>instruction[i] ;
		if(instruction[i] == 'R')
		{
			if(dire =="north")
			{
				dire_new = "east";
				dire = dire_new ;
				
			}
			else if(dire =="east")
			{
				dire_new = "south";	
				dire = dire_new ;

			}
			else if(dire =="south")
			{
					
				dire_new = "west";	
				dire = dire_new ;

			}
			else{
					
				dire_new = "north";	
				dire = dire_new ;

			}
		}
		else if(instruction[i] == 'L')
		{
			if(dire =="north")
			{
					
				dire_new = "west";
				dire = dire_new ;
				
			}
			else if(dire =="east")
			{
					
				dire_new = "north";
				dire = dire_new ;
					
			}
			else if(dire =="south")
			{
					
				dire_new = "east";	
				dire = dire_new ;
			}
			else{
					
				dire_new = "south";	
				dire = dire_new ;
			}
		}
		else if(instruction[i] == 'A')
		{
			if(dire =="north")
			{
				x_cord_new = x_cord ;
				y_cord_new = y_cord +1;
				y_cord = y_cord_new ;
				dire_new = dire ;
					
					
				
			}
			else if(dire =="east")
			{
				x_cord_new = x_cord+1 ;
				y_cord_new = y_cord ;
				x_cord = x_cord_new ;
				dire_new = dire ;
					

					
			}
			else if(dire =="south")
			{
				x_cord_new = x_cord ;
				y_cord_new = y_cord+1;
				y_cord = y_cord_new ;
				dire_new = dire ;

					
			}
			else{
				x_cord_new = x_cord +1;
				y_cord_new = y_cord ;
				x_cord = x_cord_new ;
				dire_new = dire ;

					
			}
		}
		
		
		
	}
	cout<<"The New points of robot "<<"{"<<x_cord_new<<","<<y_cord_new<<"}"<<"   direction : "<<dire_new<<endl ;
	
	
}