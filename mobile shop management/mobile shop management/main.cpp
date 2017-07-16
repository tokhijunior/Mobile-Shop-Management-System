#include"Header.h";
int main()
{
	cout << "                                                                          " << endl;
	cout << "      " << endl;
	cout << " ###     ###     ### ########   ###         #########         #########                      " << endl;
	cout << "  ###   #####   ###  ########   ###        ####### ###      ############                         " << endl;
	cout << "   ### ### ### ###   ####       ###       ###       ###    ###        ###             " << endl;
	cout << "    #####   #####    ####       ###       ###              ###        ###                " << endl;
	cout << "     ###     ###     ########   ###       ###              ###        ###               " << endl;
	cout << "                     ########   ###       ###              ###        ###         " << endl;
	cout << "     ###     ###     ####       ###       ###              ###        ###            " << endl;
	cout << "    #####   #####    ####       ###       ###              ###        ###        " << endl;
	cout << "   ### ### ### ###   ####       ###       ###       ###    ###        ###          " << endl;
	cout << "  ###   #####   ###  ########   #########  ####### ####    ###        ###         " << endl;
	cout << " ###     ###     ### ########   #########   ##########      ############                 " << endl;
	cout << "###               ###                                        ##########            " << endl;

	int q;
	cout << "please Enter 1 to ENTER The system: " << endl;
	cin >> q;
	system("cls");
	Shop shop;
	string sn, ow;
	cout << "Enter Shop Name :" ; cin >> sn;
	cout << "Enter Owner :" ; cin >> ow;
	cout << endl;
	//Shop(sn, ow);
	shop.shop_name = sn; shop.owner = ow;
	cout << "\t\t " << shop.shop_name << "  " << shop.owner << endl;
	system("cls");
	while (true)
	{
		cout << "\t\t " << shop.shop_name << "  " << shop.owner << endl;
		int c;
		Dis();
		cin >> c;
		system("cls");
		if (c == 7)
		{
			break;
		}
		Switch(c);

	}
	return 0;
}