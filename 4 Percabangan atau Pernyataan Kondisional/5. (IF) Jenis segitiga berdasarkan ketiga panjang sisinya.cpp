#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Type Angle of Triangle V1.0\n";
	cout<<"Determine the type of triangle based on the three side lengths\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int side_a,side_b,side_c,phytagoras;
	cout<<" |\\"<<endl;
	cout<<" | \\"<<endl;
	cout<<" |  \\"<<endl;
	cout<<"A|   \\ C"<<endl;
	cout<<" |    \\"<<endl;
	cout<<" |     \\"<<endl;
	cout<<" |______\\"<<endl;
	cout<<"    B      "<<endl;
	cout<<"Input first side\n>";
	cin>>side_a;
	cout<<"Input second side\n>";
	cin>>side_b;
	cout<<"Input third side\n>";
	cin>>side_c;
	cout<<"A = "<<side_a<<endl;
	cout<<"B = "<<side_b<<endl;
	cout<<"C = "<<side_c<<endl;
	cout<<"Triangle Type: ";
	
	if (side_a*side_a+side_b*side_b==side_c*side_c)
	{
		cout<<"Right-angled triangle";
		return (system("pause"));
	}
	if (side_a*side_a+side_b*side_b<side_c*side_c)
	{
		cout<<"Obtuse-angled triangle";
		return (system("pause"));
	}
	if (side_a*side_a+side_b*side_b>side_c*side_c)
	{
		cout<<"Acute-angled triangle";
		return (system("pause"));
	}
}