#include<iostream>
using namespace std;
#define size 100

class airlines
{
public:
	airlines();
	void main_menu();           //display menu
	void make_reservation();	// To make reservation.
	void cancel_reservation();	//To cancel reservation.
	void search_passenger();	//to search a passenger and print info.
	void change_reservation();	//To change reservation.
	void print_list();	        //To print the passenger list.
	void print_report();	       //To print the status report.


private:
	struct node
	{
		string fname, lname, ID, phone_num, menu;
		int reserve_num, seat_num;


		node *next;

	};

	node *start;

	node *temp, *temp2;

}bluesky;


