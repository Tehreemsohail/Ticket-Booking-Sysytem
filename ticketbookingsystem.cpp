#include<iostream>
using namespace std;

int main()
{
	int seatchoice;
	int numberoftickets;
	char row;
	int price;

	int option;
	cout << "*********MOVIE TICKET BOOKING SYSTEM*********"<<endl;
	cout << "SHOWS AVAILABLE: " << endl;
	cout << "Barbie" << endl;
	cout << "Oppenheimer" << endl;
	cout << "The Nun 2" << endl;
	cout << "The Meg 2: The Trench" << endl;
	cout << "Insidious: The Red Door" << endl;
	cout << "Mission Impossible: Dead Reckoning Part 1" << endl;

	cout << endl;
	cout << "Press 1 to choose 'Barbie'." << endl;
	cout << "Press 2 to choose 'Oppenheimer'." << endl;
	cout << "Press 3 to choose 'The Nun 2'." << endl;
	cout << "Press 4 to choose 'The Meg 2: The Trench'." << endl;
	cout << "Press 5 to choose 'Insidious: The Red Door'." << endl;
	cout << "Press 6 to choose 'Mission Impossible: Dead Reckoning Part 1'." << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> option;
	cout << endl;



	cout << "SELECT YOUR SEATS:" << endl;
	cout << "Press 1 for Standard. (Price 900 Rs)" << endl;
	cout << "Press 2 for Gold. (Price 1100 Rs)" << endl;
	cout << "Press 3 for Ultra. (Price 1500 Rs)" << endl;
	cout << "Press 4 for Super Ultra. (Price 2000 Rs)" << endl;
	cout << "Enter seat choice: ";
	cin >> seatchoice;

	cout << "Enter the Number of Tickets you want for the show: " ;
	cin >> numberoftickets;

	if (seatchoice == 1)
	{
		price = numberoftickets * 900;
	}

	else if (seatchoice == 2)
	{
		price = numberoftickets * 1100;
	}

	else if (seatchoice == 3)
	{
		price = numberoftickets * 1500;
	}

	else if (seatchoice == 4)
	{
		price = numberoftickets * 2000;
	}


	if (option == 1)
	{

		cout << "SEATING: " << endl;
		cout << "* means reserved." << endl;
		cout << "A ------    ---------------     ------" << endl;
		cout << "B ------    ---------------     ------" << endl;
		cout << "C -**---    ---------------     ------" << endl;
		cout << "D ------    ---------------     ------" << endl;
		cout << "E ------    ---------------     ------" << endl;
		cout << "F ------    ------*********     ------" << endl;
		cout << "G ------    ---------------     ------" << endl;
		cout << "H ------    ---------------     ******" << endl;
		cout << "I ------    ***************     ------" << endl;
		cout << "J ------    ---------------     ------" << endl;
		cout << "K ------    --------*------     ------" << endl;
		cout << "L ******    ---------------     ------" << endl;
		cout << "M ------    ---------------     ------" << endl;
		cout << "N ------    -*------**-----     ******" << endl;
		cout << "O ------    ---------------     ------" << endl;
		cout << "P ------    ---------------     ------" << endl;
		cout << "Q ------    ---------------     ------" << endl;
		cout << "R ------    ----*********--     ------" << endl;
		cout << "S ------    ---------------     ******" << endl;
		cout << "T ------    ---------------     ******" << endl;
		cout << "U ------    ---------------     ******" << endl;
		cout << "V ******    ---------------     ------" << endl;
		cout << "W ------    ---------------     ------" << endl;
		cout << "X ------    ---------------     ------" << endl;
		cout << "Y ------    ---------------     ------" << endl;
		cout << "Z ******    ------*********     ------" << endl;

		cout << "Select your row: " ;
		cin >> row;

		cout << "                               Your Tickets are Booked!" << endl;
		cout << "                                     Show: Barbie" << endl;
		cout << "                                        Row:" << row << endl;
		cout << "                                       Seats:" << numberoftickets << endl;
		cout << "                                    Total Price:" << price << endl;

	}

	else if (option == 2)
	{

		cout << "SEATING: " << endl;
		cout << "* means reserved." << endl;
		cout << "A ------    ---------------     ------" << endl;
		cout << "B ------    ---------------     ------" << endl;
		cout << "C -**---    --*******------     ------" << endl;
		cout << "D ------    ---------------     ------" << endl;
		cout << "E ------    ---------------     ------" << endl;
		cout << "F ------    ------*********     ------" << endl;
		cout << "G ******    ---------------     ------" << endl;
		cout << "H ------    ---------------     ******" << endl;
		cout << "I ------    ***************     ------" << endl;
		cout << "J ------    ---------------     ------" << endl;
		cout << "K ------    -----******----     ------" << endl;
		cout << "L ******    ---------------     ------" << endl;
		cout << "M ------    ---------------     ******" << endl;
		cout << "N ------    -*------**-----     ******" << endl;
		cout << "O ------    ---------------     ------" << endl;
		cout << "P ------    ---------------     ------" << endl;
		cout << "Q ******    ---------------     ------" << endl;
		cout << "R ------    ----*********--     ------" << endl;
		cout << "S ------    ---------------     ******" << endl;
		cout << "T ------    ---------------     ******" << endl;
		cout << "U ------    ---------------     ******" << endl;
		cout << "V ******    ---------------     ------" << endl;
		cout << "W ------    ---------------     ------" << endl;
		cout << "X ------    ---------------     ------" << endl;
		cout << "Y ------    ---------------     ------" << endl;
		cout << "Z ******    ------*********     ------" << endl;

		cout << "Select your row: " ;
		cin >> row;

		cout << "                               Your Tickets are Booked!" << endl;
		cout << "                                  Show: Oppenheimer" << endl;
		cout << "                                        Row:" << row << endl;
		cout << "                                       Seats:" << numberoftickets << endl;
		cout << "                                    Total Price:" << price << endl;
	}


	else if (option == 3)
	{

		cout << "SEATING: " << endl;
		cout << "* means reserved." << endl;
		cout << "A ------    ---------------     ------" << endl;
		cout << "B ------    ---------------     ------" << endl;
		cout << "C -**---    ---------------     ------" << endl;
		cout << "D ------    ---------------     ------" << endl;
		cout << "E ------    ---------------     ------" << endl;
		cout << "F ------    ------*********     ------" << endl;
		cout << "G ------    ---------------     ------" << endl;
		cout << "H ******    ---------------     ******" << endl;
		cout << "I ******    ***************     ******" << endl;
		cout << "J ------    ---------------     ------" << endl;
		cout << "K ------    --------*------     ------" << endl;
		cout << "L ******    ---------------     ------" << endl;
		cout << "M ------    ---------------     ******" << endl;
		cout << "N ******    -***----**-----     ******" << endl;
		cout << "O ------    ---------------     ------" << endl;
		cout << "P ------    ***************     ------" << endl;
		cout << "Q ******    ***************     ------" << endl;
		cout << "R ------    ----*********--     ------" << endl;
		cout << "S ------    ---------------     ******" << endl;
		cout << "T ------    --*************     ******" << endl;
		cout << "U ------    ---------------     ******" << endl;
		cout << "V ------    ---------------     ------" << endl;
		cout << "W ------    ---********----     ------" << endl;
		cout << "X ------    ---------------     ------" << endl;
		cout << "Y ------    **********-----     ------" << endl;
		cout << "Z ******    ------*********     ------" << endl;

		cout << "Select your row: " ;
		cin >> row;

		cout << "                               Your Tickets are Booked!" << endl;
		cout << "                                   Show: The Nun 2" << endl;
		cout << "                                        Row:" << row << endl;
		cout << "                                       Seats:" << numberoftickets << endl;
		cout << "                                    Total Price:" << price << endl;
	}


	else if (option == 4)
	{

		cout << "SEATING: " << endl;
		cout << "* means reserved." << endl;
		cout << "A ------    ---------------     ------" << endl;
		cout << "B ------    ---------------     ------" << endl;
		cout << "C -**---    ---------------     ------" << endl;
		cout << "D ------    ---------------     ------" << endl;
		cout << "E ------    ---------------     ------" << endl;
		cout << "F ------    ------*********     ------" << endl;
		cout << "G ------    ---------------     ------" << endl;
		cout << "H ------    ---------------     ******" << endl;
		cout << "I ------    ---------------     ------" << endl;
		cout << "J ------    ---------------     ------" << endl;
		cout << "K ------    ---------------     ------" << endl;
		cout << "L ******    ---------------     ------" << endl;
		cout << "M ------    ---------------     ------" << endl;
		cout << "N ------    ***************     ******" << endl;
		cout << "O ******    ***************     ------" << endl;
		cout << "P ------    ---------------     ------" << endl;
		cout << "Q ******    ***------------     ------" << endl;
		cout << "R ------    ----*********--     ------" << endl;
		cout << "S ------    ---------------     ******" << endl;
		cout << "T ------    ---------------     ******" << endl;
		cout << "U ------    ***************     ******" << endl;
		cout << "V ******    ---------------     ------" << endl;
		cout << "W ------    ---------------     ------" << endl;
		cout << "X ------    ---------------     ******" << endl;
		cout << "Y ------    ---------------     ------" << endl;
		cout << "Z ******    ***************     ------" << endl;

		cout << "Select your row: " ;
		cin >> row;

		cout << "                               Your Tickets are Booked!" << endl;
		cout << "                              Show: The Meg 2:The Trench" << endl;
		cout << "                                        Row:" << row << endl;
		cout << "                                       Seats:" << numberoftickets << endl;
		cout << "                                    Total Price:" << price << endl;
	}


	else if (option == 5)
	{

		cout << "SEATING: " << endl;
		cout << "* means reserved." << endl;
		cout << "A ------    ---------------     ------" << endl;
		cout << "B ------    ---------------     ------" << endl;
		cout << "C ------    ---------------     ------" << endl;
		cout << "D ------    ---------------     ------" << endl;
		cout << "E ------    ---------------     ------" << endl;
		cout << "F ------    ---------------     ------" << endl;
		cout << "G ------    ---------------     ------" << endl;
		cout << "H ------    ---------------     ******" << endl;
		cout << "I ------    ---------------     ------" << endl;
		cout << "J ------    ---------------     ------" << endl;
		cout << "K ------    ---------------     ------" << endl;
		cout << "L ******    ---------------     ------" << endl;
		cout << "M ------    ---------------     ------" << endl;
		cout << "N ------    ---------------     ******" << endl;
		cout << "O ------    ***************     ------" << endl;
		cout << "P ------    ---------------     ------" << endl;
		cout << "Q ------    ***************     ------" << endl;
		cout << "R ------    ----*********--     ------" << endl;
		cout << "S ------    ---------------     ******" << endl;
		cout << "T ------    ---------------     ******" << endl;
		cout << "U ------    ---------------     ******" << endl;
		cout << "V ******    ---------------     ------" << endl;
		cout << "W ------    ---------------     ------" << endl;
		cout << "X ------    ***************     ******" << endl;
		cout << "Y ------    -************--     ------" << endl;
		cout << "Z ******    ------*********     ------" << endl;

		cout << "Select your row: " ;
		cin >> row;

		cout << "                               Your Tickets are Booked!" << endl;
		cout << "                              Show: Insidious:The Red Door" << endl;
		cout << "                                        Row:" << row << endl;
		cout << "                                       Seats:" << numberoftickets << endl;
		cout << "                                    Total Price:" << price << endl;
	}

	else if (option == 6)
	{

		cout << "SEATING: " << endl;
		cout << "* means reserved." << endl;
		cout << "A ------    ---------------     ------" << endl;
		cout << "B ------    ---------------     ------" << endl;
		cout << "C ------    ---------------     ------" << endl;
		cout << "D ------    ---------------     ------" << endl;
		cout << "E ------    ---------------     ------" << endl;
		cout << "F ------    ---------------     ------" << endl;
		cout << "G ------    ---------------     ------" << endl;
		cout << "H ------    ---------------     ------" << endl;
		cout << "I ------    ---------------     ------" << endl;
		cout << "J ------    ---------------     ------" << endl;
		cout << "K ------    ******---------     -****-" << endl;
		cout << "L ------    ---------------     ------" << endl;
		cout << "M ------    ---------------     ------" << endl;
		cout << "N ------    ---------------     ------" << endl;
		cout << "O ------    ---------------     ------" << endl;
		cout << "P ------    ---------------     ------" << endl;
		cout << "Q ******    -----*******---     ------" << endl;
		cout << "R ------    ---------------     ------" << endl;
		cout << "S ------    ---------------     ------" << endl;
		cout << "T ------    ************---     ------" << endl;
		cout << "U ------    ***************     ******" << endl;
		cout << "V ------    ---------------     ------" << endl;
		cout << "W ------    ---------------     ------" << endl;
		cout << "X ------    ---------------     ------" << endl;
		cout << "Y ------    ---------------     ------" << endl;
		cout << "Z ------    ---------------     ------" << endl;

		cout << "Select your row: " ;
		cin >> row;

		cout << "                               Your Tickets are Booked!" << endl;
		cout << "                               Show: Mision Impossible: Dead Reckoning Part 1" << endl;
		cout << "                                        Row:" << row << endl;
		cout << "                                       Seats:" << numberoftickets << endl;
		cout << "                                    Total Price:" << price << endl;
	}


	system("pause");
	return 0;

}