#include<iostream>
using namespace std;
void Read(int &x, int &y)
{
	cout << "Enter Frist Number..";
	cin >> x;
	cout << "Enter Second Number..";
	cin >> y;
}
void Change(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

	cout << "Your Frist Number After Change Become {" << x << "}\n";
	cout << "Your Second Number After Change Become {" << y << "}\n";
}
void Check(int x, int y)
{
	if (x > y)
		cout << "The Result ==> {" << y << "} is Smaller Than {" << x << "}\n"
	    	<<"Second Number is Smallest\n";
	else if (y > x)
		cout << "The Result ==> {" << x << "} is Smaller Than {" << y << "}\n"
		    <<"First Number is Smallest\n";
	else
		cout << "The Result ==> {" << x << "} is Equal TOo {" << y << "}\n"
			<< "Two Numbers Are Equle\n";
 }
void PrintNumbers(int x, int y)
{
	cout << "Now Your Frist Number is {" << x << "}  \n";
	cout << "Now Your Second Number is {" << y << "}  \n";
}
void PrintStars()
{
	cout << "*****************************************************\n";
}
void HELLO()
{
	cout << "Welcome To My Program..\")\n";
	cout << "This Program To Check The Smallest Number of Two Numbers and Change Between Them.\n";
	cout << "If You Want To Exit From Program..??\n";
	cout << "Enter Two Numbers Equal Zer00s..\nOk..!! \n";
	cout << "Let's Go...\n";
	PrintStars();
}
void PrintEquals()
{
	cout << "====================================>>\n";
}
int main()
{
	int x, y;
	HELLO();
	do
	{
		Read(x, y);
		PrintEquals();
		PrintNumbers(x, y);
		Check(x, y);
		cout << "Changeable....Loading....!!\n";
		PrintEquals();
		Change(x, y);
		PrintEquals();
		PrintStars();
		PrintStars();
	} while (x != 0 || y != 0);

	cout << "Exiting...\n";
}
