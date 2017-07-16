#include <iostream>
#include <windows.h>
#include <vector>
#include<string>
#include<fstream>
using namespace std; 

class Model
{
public:
	string model_name;
	int model_price, model_resolution;
	Model();
	void Display();
}; //model;
class Mobile
{
public:
	string mobile_name;
	vector<Model> model_list;
	void MobileDisplay();
	bool ModelDelete(string s);
	void ModelSort();
	void Mob_Edit();
};//mobile;
class Shop
{
public:
	string shop_name, owner;
	vector<Mobile> mobile_list;
	/*Shop();
	Shop(string sn, string ow);*/
	void ShopDisplay();
	void Find();//search
	void Delete();//delete 
	void Sort();//sorting
	void Edit();
	
};// shop;
void Add();//Adding mobiles
void DisplayAll();
void Switch(int n);
void Dis();//display menu
