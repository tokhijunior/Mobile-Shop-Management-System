#include"Header.h"

Model model;
Mobile mobile;
Shop shop;

	Model::Model()
	{
		model_name = " ";
		model_price = 0;
		model_resolution = 0;
	}
	void Model::Display()
	{
		cout << "\t" << model_name << " " << model_price << " " << model_resolution << endl;
	}
	void Mobile::MobileDisplay()
	{
		cout << mobile_name << " : " << endl;
		for (int i = 0; i != model_list.size(); i++)
		{
			model_list[i].Display();
		}
	}
	bool Mobile::ModelDelete(string s)
	{
		for (int i = 0; i<model_list.size(); i++)
		{
			if (model_list[i].model_name == s)
			{
				model_list.erase(model_list.begin() + (i), model_list.begin() + (i + 1));
				return true;
			}
		}
		return false;
	}
	void Mobile::ModelSort()
	{
		for (int i = 0; i<model_list.size(); i++)
		{
			int temp = i, max = model_list[i].model_price, r = model_list[i].model_resolution;
			string s;
			for (int j = i + 1; j<model_list.size(); j++)
			{
				if (model_list[j].model_price>max)
				{
					max = model_list[j].model_price;
					temp = j;
				}
				s = model_list[i].model_name;
				max = model_list[i].model_price;
				model_list[i].model_name = model_list[temp].model_name;
				model_list[i].model_price = model_list[temp].model_price;
				model_list[i].model_resolution = model_list[temp].model_resolution;
				model_list[temp].model_name = s;
				model_list[temp].model_price = max;
				model_list[temp].model_resolution = r;
			}
		}
	}
	void Mobile::Mob_Edit()
	{
		MobileDisplay();
		int x, p, r;
		string z, s;
		cout << "*-Enter {1} for Edit Model Name" << endl;
		cout << "*-Enter {2} for Edit Model Price" << endl;
		cout << "*-Enter {3} for Edit Model Resolution" << endl;
		cout << "*-Enter {4} for Add New Model" << endl;
		cout << "*-Enter {5} for return" << endl;
		cin >> x;
		if (x == 5)
			return;
		cout << "Enter model name that you want : " << endl;
		cin >> z;
		switch (x)
		{
		case 1:
		{
				  for (int i = 0; i<model_list.size(); i++)
				  {
					  if (model_list[i].model_name == z)
					  {
						  cin >> s;
						  model_list[i].model_name = s;
						  break;
					  }
				  }
				  break;

		}
		case 2:
		{
				  for (int i = 0; i<model_list.size(); i++)
				  {
					  if (model_list[i].model_name == z)
					  {
						  cin >> p;
						  model_list[i].model_price = p;
						  break;
					  }
				  }
				  break;
		}
		case 3:
		{
				  for (int i = 0; i<model_list.size(); i++)
				  {
					  if (model_list[i].model_name == z)
					  {
						  cin >> r;
						  model_list[i].model_resolution = r;
						  break;
					  }
				  }
				  break;
		}
		case  4:
		{
				   cout << "Price & Resolution : ";
				   cin >> p >> r;
				   model.model_name = z;
				   model.model_price = p;
				   model.model_resolution = r;
				   model_list.push_back(model);

		}
		default:
		{
				   cout << "wrong answer" << endl;
				   break;
		}
			break;

		}


	}
	/*Shop::Shop()
	{
		shop_name=" " ;
		owner=" " ;
	}
	Shop ::Shop(string sn, string ow)
	{
		shop_name = sn;
		owner = ow;
	}*/
	void Shop::ShopDisplay()
	{
		cout << "" << shop.shop_name << endl;
		cout << "" << shop.owner << endl;
		for (int i = 0; i != mobile_list.size(); i++)
			mobile_list[i].MobileDisplay();
	}
	void Shop::Find()
	{
		string s;
		cout << "Enter Mobile Name : ";
		cin >> s;
		for (int i = 0; i<mobile_list.size(); i++)
		{
			if (mobile_list[i].mobile_name == s)
			{
				mobile_list[i].MobileDisplay();
				return;
			}
		}
		cout << "No Mobile" << endl;
	}
	void Shop::Delete()
	{
		char c;
		cout << "Enter 1 to Delete Mobile oR any char for Delete Mobile Model : ";
		cin >> c;
		string s, S;
		cout << "Enter Mobile Name : ";
		cin >> s;
		for (int i = 0; i<mobile_list.size(); i++)
		{
			if (mobile_list[i].mobile_name == s)
			{
				if (c == '1')
				{
					mobile_list.erase(mobile_list.begin() + (i), mobile_list.begin() + (i + 1));
					return;
				}
				else
				{
					cout << "Enter Model Name : ";
					cin >> S;
					if (mobile_list[i].ModelDelete(S))
						return;
					else
						cout << "No Model" << endl;
				}
			}

		}
		cout << "No Mobile" << endl;


	}
	void Shop::Sort()
	{
		string s;
		cout << " Enter Mobile Name : ";
		cin >> s;
		for (int i = 0; i<mobile_list.size(); i++)
		{
			if (mobile_list[i].mobile_name == s)
			{
				mobile_list[i].ModelSort();
				return;
			}
		}
		cout << "No Mobile" << endl;

	}
	void Shop::Edit()
	{
		cout << endl;
		int x;
		string m;
		cout << "Enter Mobile Name That You Want To Edit : ";
		cin >> m;
		cout << "*-Enter {1} for Edit Mobile Name" << endl;
		cout << "*-Enter {2} for Edit Mobile Data" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
		{
				  for (int i = 0; i<mobile_list.size(); i++)
				  {
					  if (mobile_list[i].mobile_name == m)
					  {
						  cout << "Enter the New Mobile Name :";
						  cin >> m;
						  mobile_list[i].mobile_name = m;
						  mobile_list[i].MobileDisplay();
						  break;
					  }
				  }
				  break;
		}
			/*case 2:
			{
			string m,s;
			cout<<"Enter Mobile Name That You Want To Edit Model in it :";
			cin>>m;
			for(int i=0; i<mobile_list.size(); i++)
			{
			if(mobile_list[i].mobile_name==m)
			{
			cout<<"Enter Model Name That You Want To Edit :";
			cin>>s;
			for (int j=0; j!=mobile_list[i].model_list.size(); j++)
			{
			if(mobile_list[i].model_list[j].model_name==s)
			{
			cout<<"Enter the New Model Name :";
			cin>>s;
			mobile_list[i].model_list[j].model_name=s;
			mobile_list[i].MobileDisplay();

			break;
			}
			}

			}
			}
			break;

			}
			case 3:
			{
			string m,s;
			int p;
			cout<<"Enter Mobile Name That You Want To Edit Model in it :";
			cin>>m;
			for(int i=0; i<mobile_list.size(); i++)
			{
			if(mobile_list[i].mobile_name==m)
			{
			cout<<"Enter Model Name That You Want To Edit :";
			cin>>s;
			for (int j=0; j!=mobile_list[i].model_list.size(); j++)
			{
			if(mobile_list[i].model_list[j].model_name==s)
			{
			cout<<"Enter "<<mobile_list[i].model_list[j].model_name<<" New Price :";
			cin>>p;
			mobile_list[i].model_list[j].model_price=p;
			mobile_list[i].MobileDisplay();
			break;
			}
			}
			}
			}
			break;
			}
			case 4:
			{
			string m,s;
			int r;
			cout<<"Enter Mobile Name That You Want To Edit Model in it :";
			cin>>m;
			for(int i=0; i<mobile_list.size(); i++)
			{
			if(mobile_list[i].mobile_name==m)
			{
			cout<<"Enter Model Name That You Want To Edit :";
			cin>>s;
			for (int j=0; j!=mobile_list[i].model_list.size(); j++)
			{
			if(mobile_list[i].model_list[j].model_name==s)
			{
			cout<<"Enter "<<mobile_list[i].model_list[j].model_name<<" New Resolution :";
			cin>>r;
			mobile_list[i].model_list[j].model_resolution=r;
			mobile_list[i].MobileDisplay();
			break;
			}
			}
			}
			}
			break;

			}*/
		case 2:
		{
				  for (int i = 0; i<mobile_list.size(); i++)
				  {
					  if (mobile_list[i].mobile_name == m)
					  {
						  mobile_list[i].Mob_Edit();
						  break;
					  }
				  }
		}
		default:
		{
				   cout << "You Entered Wrong Operation" << endl;
				   break;
		}
		}


	}

void Add()
{

	string mobileName, modelName;
	int n, x, p, r;
	cout << "Enter 0 if you finish ";
	while (true)
	{
		bool flag = false;
		cout << endl;
		cout << "Enter Mobile Name :";
		cin >> mobileName;
		for (int i = 0; i<shop.mobile_list.size(); i++)
		{
			if (shop.mobile_list[i].mobile_name == mobileName)
			{
				shop.mobile_list[i].Mob_Edit();
				flag = true;
			}

		}
		if (flag)
			continue;
		if (mobileName == "0")
			break;
		mobile.mobile_name = mobileName;
		cout << "Enter 0 if you finish " << endl;
		mobile.model_list.clear();
		cout << "Enter Model Name & Price & Resolution : ";
		while (true)
		{
			cin >> modelName;
			if (modelName == "0")
				break;
			cin >> p >> r;
			model.model_name = modelName;
			model.model_price = p;
			model.model_resolution = r;
			mobile.model_list.push_back(model);
		}
		shop.mobile_list.push_back(mobile);
	}
}
void DisplayAll()
{
	shop.ShopDisplay();
}

void Switch(int n)
{
	switch (n)
	{
	case 1:
	{
			  Add();
			  break;

	}
	case 2:
	{
			  shop.Delete();
			  break;

	}
	case 3:
	{
			  DisplayAll();
			  shop.Edit();
			  break;
	}
	case 4:
	{
			  shop.Find();
			  break;
	}
	case 5:
	{
			  shop.Sort();
			  break;
	}
	case 6:
	{
			  DisplayAll();
			  break;
	}
	default:
	{
			   cout << "You Entered Wrong Operation" << endl;
			   break;
	}
	}
}
void Dis()//display menu
{
	cout << "- Enter {1} For Adding New Mobiles " << endl << endl;
	cout << "- Enter {2} For Delete Specific Mobile / Mobile Model " << endl << endl;
	cout << "- Enter {3} For Editing Mobile Data " << endl << endl;
	cout << "- Enter {4} For Search for Specific Mobile " << endl << endl;
	cout << "- Enter {5} For Sorting Models of Specific Mobile Based on Price. " << endl << endl;
	cout << "- Enter {6} For List the Shop Data " << endl << endl;
	cout << "- Enter {7} For Exit " << endl << endl;
	cout << "Number of Operation : ";
}

