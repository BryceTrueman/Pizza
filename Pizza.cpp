/* Test 1 
people - 84
tip - 15%
larges - 12
mediums - 0
smalls - 0
area - 3769.908
area/person - 44.87985
cost - $203

Test 2 
people - 22
tip - 17%
larges - 3
mediums - 0
smalls - 1
area - 1055.574
area/person - 47.9806
cost - $60

Test 3
people - 407
tip - 10%
larges - 58
mediums - 0
smalls - 1
area - 18334.3192
area/person - 45.0474674
cost - $945
*/



#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int L_Pizza_Feeds = 7;
	const int M_Pizza_Feeds = 3;
	const int S_Pizza_Feeds = 1;
	int Total_Pizzas = 0;
	int Num_People = 0;
	int Num_L_Pizzas = 0;
	int Num_M_Pizzas = 0;
	int Num_S_Pizzas = 0;
	int Leftovers = 0;
	const double PI = 3.14159;
	double Area_L_Pizza = 0;
	double Area_M_Pizza = 0;
	double Area_S_Pizza = 0;
	const int Radius_Large = 10;
	const int Radius_Medium = 8;
	const int Radius_Small = 6;
	double Total_Area_Pizzas = 0;
	double Pizza_Per_Person = 0;
	double Percent_Paid = 0;
	const double Large_Cost = 14.68;
	const double Medium_Cost = 11.48;
	const double Small_Cost = 7.28;
	double Total_Cost = 0;
	int Total_Cost_Tip = 0;
	double Tip_Cost = 0;

	cout << "How many guests are attending the event?: ";
	cin >> Num_People;
	

	Num_L_Pizzas = Num_People / L_Pizza_Feeds;
	Leftovers = Num_People % L_Pizza_Feeds;
	Num_M_Pizzas = Leftovers / M_Pizza_Feeds;
	Leftovers = Leftovers % M_Pizza_Feeds;
	Num_S_Pizzas = Leftovers / S_Pizza_Feeds;
	Area_L_Pizza = ((Radius_Large * Radius_Large) * PI) * Num_L_Pizzas;
	Area_M_Pizza = ((Radius_Medium * Radius_Medium) * PI) * Num_M_Pizzas;
	Area_S_Pizza = ((Radius_Small * Radius_Small) * PI) * Num_S_Pizzas;
	Total_Area_Pizzas = Area_L_Pizza + Area_M_Pizza + Area_S_Pizza;
	Pizza_Per_Person = Total_Area_Pizzas / Num_People;
	


	cout << "Number of Large Pizzas: " << Num_L_Pizzas << endl;
	cout << "Leftovers after Large Pizza: " << Leftovers << endl;
	cout << "Number of Medium Pizzas: " << Num_M_Pizzas << endl;
	cout << "Leftovers after Medium Pizzas: " << Leftovers << endl;
	cout << "Number of Small Pizzas: " << Num_S_Pizzas << endl;
	cout << "Total Area of Pizza you need to purchase: " << Total_Area_Pizzas << endl;
	cout << "Total area each guest can eat: " << Pizza_Per_Person << endl;



	cout << "What percent of the total cost will you pay as a tip?: ";
	cin >> Percent_Paid;
	
	Total_Cost = (Num_L_Pizzas * Large_Cost) + (Num_M_Pizzas * Medium_Cost) + (Num_S_Pizzas * Small_Cost);
	Tip_Cost = ((Percent_Paid * .01) * Total_Cost);
	Total_Cost_Tip = (Total_Cost + .5) + Tip_Cost;

	cout << "Your total cost including the tip for all the pizzas: " << Total_Cost_Tip << endl;
		
	

	system("pause");
	return 0;
}
