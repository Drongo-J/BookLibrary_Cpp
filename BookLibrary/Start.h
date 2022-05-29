#pragma once
#include <iostream>
#include "Functions.h"
using namespace std;

namespace Start
{
	static Client CurrentClient;
	class Controller
	{
	public:
		static void StartProject()
		{
			DatabaseSection::Init();
			while (true)
			{
				FirstHomeMenu();
				int select = 0;
				cin >> select;
				if (select == 1)
				{

				}
				else if (select == 2)
				{ 
					cin.ignore();
					cin.clear();
					string username;
					system("cls");
					cout << "Enter username : ";
					cin >> username;
					cout << "Enter password : ";
					string password;
					cin >> password;
					CurrentClient = GetClient(username, password);
					if (CurrentClient.GetId() != -1)
					{
						
					}
					else
					{
						cout << "Access Denied!" << endl;
					}

					system("pause");
				}
				else
				{
					cout << "Incorrect Input!" << endl;
				}
			}
		}

		static void FirstHomeMenu()
		{
			system("cls");
			cout << "Admin  [1]" << endl;
			cout << "Client [2]" << endl;
		}

		static void ClientHomeMenu()
		{
			cout << "Show Books   [1]" << endl;
			cout << "Take Books   [2]" << endl;
			cout << "Return Books [3]" << endl;
		}

	};
}
