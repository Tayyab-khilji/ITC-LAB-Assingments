using namespace std;
int main()
{
/*
  Write a C++ program in which, where cost price of a product is considered to be 1000.
  Now your task is to find the selling price. First add 60% profit in cost price. 
  Then give 5% discount on calculated price in order to calculate the selling price.
  Output:
  {
    Profit: 600
    After Adding Profit: 1600
    Discount: 80
    Selling Price:1520
  }

*/


	int cost = 1000;
	int profit = cost * 60 / 100;
	int totalCost = cost + profit;
	int discount = totalCost * 5 / 100;
	int sellingPrice = totalCost - discount;
	cout << "Profit = " << profit << endl;
	cout << "Total Price = " << totalCost << endl;
	cout << "Discount = " << discount << endl;
	cout << "Selling Price = " << sellingPrice << endl;


	return 0;
}