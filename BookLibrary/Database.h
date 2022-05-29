#pragma once
#include <iostream>
#include <vector>
#include "Entities.h"
using namespace std;
using namespace Entities;

namespace DatabaseSection
{
	class Database
	{
	public:
		vector<Admin> Admins;
		vector<Client> Clients;
		vector<Book> Books;

		void AddAdmin(const Admin& admin)
		{
			Admins.push_back(admin);
		}
		void AddClient(const Client& client)
		{
			Clients.push_back(client);
		}
		void AddBook(const Book& book)
		{
			Books.push_back(book);
		}
	};

	static Database database;
	static void Init()
	{
		User user("Admin", "admin");
		database.AddAdmin(Admin(user, "Elvin Camalzade"));
		User user2("Client", "client");
		database.AddClient(Client(user2, "Ali Ahmedov"));
		Book b1("Nutshell", "Allbahari", 34, 9.8);
		Book b2("Animal Farm", "George Orvel", 12, 9.8);
		Book b3("Tom Sawyer adventures", "Mark Twain", 3.4, 8);
		database.AddBook(b1);
		database.AddBook(b2);
		database.AddBook(b3);
	}
}

