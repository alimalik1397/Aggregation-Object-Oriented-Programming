/*Ali Shehzad Malik

Aggregation--->C++

House can contain multiple rooms there is no independent life 
for room and any room cannot belong to two different houses. 
If we delete the house room will also be automatically deleted.

*/

#include <iostream>
#include <string>
using namespace std;
class House;
class Room{
public:
	string room_name;
	
public:
	Room(){}//Default constructor
	~Room(){}//Destructor 
	void setValues()
	{
		cout << "Enter the name of the room" << endl;
		cin >> room_name;
	}
	//Creating a new room
	 void createRoom()
	{
		Room *room;//Pointer of type room
		room = new Room;//Dynamically allocating memory
		cout << "Enter the name of the room " << endl;
		cin >> room_name;//inputting room name 
	}
	void displayInfo()
	{
		cout << "The room name is " << room_name << endl;
	}
	//Displaying room name
};
//Defining house 
class House{
	
private:
		Room r1,r2,r3;//Room composition to House  
		string house_name;
	public:
		//Constructor expecting three room objects
		House(Room &rs,Room&rt,Room &ry){
			r1 = rs;
			r2 = rt;
			r3 = ry;
		}
		~House(){
		}
		//Getting info for house 
		void getInfo()
		{
			cout << "Enter house name " << endl;
			cin >> house_name;
		}
		//Displaying info 
		void displayInfo()
		{

			cout << "The room of "<<house_name  << " is " << r1.room_name<< endl;
			cout << "The room of " << house_name << " is  " << r2.room_name << endl;
			cout << "The room of " << house_name << " is  " << r3.room_name << endl;
		}

	};

int main()
{
	Room r1,r2,r3;//Three objects created
	r1.setValues();//Initializing it 
	r2.setValues();
	r3.setValues();
	r1.displayInfo();//Displaying info regarding rooms 
	r2.displayInfo();
	r3.displayInfo();
	House h1(r1,r2,r3);//Call to house constructor
	h1.getInfo();//Getting house name 
	h1.displayInfo();//Displaying house info
	return 0;
}
