#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

struct  AVLNode
{
	int ISBN, Total_numberofbooks, Price;
	string Edition, Author, Book_title;
	bool isstockavailable;
	AVLNode* left, * right;
	string gettitle()const
	{
		return Book_title;
	}
	string getauther()const
	{
		return Author;
	}
	string getedition()const
	{
		return Edition;
	}
	int getISBN()const
	{
		return ISBN;
	}
	int getprice()const
	{
		return Price;
	}
	int getnoofbooks()const
	{
		return Total_numberofbooks;
	}

};

struct Customer
{
	int customer_id;
	string Name, CNIC, Address, Mobileno;
	Customer* left, * right;

};


class BookAvl
{
public:
	
	BookAvl()
	{
		Root = NULL;
	}

	~BookAvl()
	{
		delete Root;
		Root = NULL;
	}

	void loadbookfile()
	{
		ifstream read;
		int isbn{ 0 }, totalbooks{ 0 }, price{ 0 };
		string edition{ 0 }, author{ 0 }, title{ 0 };
		bool stock = true;
		char comma = '\0';
		read.open("BooksFile1.csv");
		while (!read.eof())
		{
			getline(read, author, ',');
			getline(read, title, ',');
			getline(read, edition, ',');
			read >> isbn;
			read >> comma;
			read >> totalbooks;
			read >> comma;
			read >> price;
			read >> comma;
			read >> stock;
			cout << "id = " << isbn << endl;
			if (read.eof())
			{
				break;
			}
			insert(isbn, totalbooks, price, edition, author, title, stock);
		}
		read.close();
	}

	void insert(int isbn, int totalbooks, int price, string edition, string author, string title, bool stock)
	{
		Root = MakeInsertion(isbn, totalbooks, price, edition, author, title, stock, Root);
	}

	void DeleleNode(int ISBN)
	{
		Root = delnode(ISBN, Root);
	}

	void InOrder(int& isbn, string& title, string& author, string& edition, int& price, string& stock)
	{
		Indisplay(Root,isbn, title, author, edition, price, stock);
	}
	void PreOrder(int& isbn, string& title, string& author, string& edition, int& price,int &totalbooks, string& stock)
	{
		Predisplay(Root, isbn, title, author, edition, price,totalbooks, stock);
	}
	void PostOrder()
	{
		Postdisplay(Root);
	}

	void Print_Searched_data(AVLNode* n)
	{
		if (n)
		{
			cout << "\n\nISBN : " << n->getISBN()
				<< "\nEdition : " << n->getedition()
				<< "\nAuther : " << n->getauther()
				<< "\nBook Title" << n->gettitle()
				<< "\nPrice : " << n->getprice()
				<< "\nNumber of Books available : " << n->getnoofbooks()
				<< "\n\n";
		}
		else
			cout << "\n\nData not found\n\n";
	}
	AVLNode* ID_Search(int key)
	{
		AVLNode* curr = Root;
		while (curr != NULL)
		{
			if (key == curr->ISBN)
			{
				return curr;
				break;
			}
			else if (key > curr->ISBN)
				curr = curr->right;
			else
				curr = curr->left;
		}
		return nullptr;
	}

	AVLNode* Name_Search(string name)
	{
		AVLNode* curr = Root;
		while (curr != NULL)
		{
			if (name == curr->Book_title)
			{
				return curr;
				break;
			}
			else if (name > curr->Book_title)
				curr = curr->right;
			else
				curr = curr->left;
		}
		return nullptr;
	}

private:

	AVLNode* MakeInsertion(int isbn, int totalbooks, int price, string edition, string author, string title, bool stock, AVLNode* node)
	{
		if (node == NULL)
		{
			AVLNode* newNode = new AVLNode;
			newNode->ISBN = isbn;
			newNode->Total_numberofbooks = totalbooks;
			newNode->Edition = edition;
			newNode->Author = author;
			newNode->Book_title = title;
			newNode->Price = price;
			newNode->isstockavailable = stock;
			newNode->left = newNode->right = NULL;
			node = newNode;
			return node;
		}
		if (isbn < node->ISBN) {
			node->left = MakeInsertion(isbn, totalbooks, price, edition, author, title, stock, node->left);
		}
		else if (isbn > node->ISBN) {
			node->right = MakeInsertion(isbn, totalbooks, price, edition, author, title, stock, node->right);
		}

		int bf = BalanceFactor(node);

		if (bf > 1 && isbn < node->left->ISBN) {
			return RightRotation(node);
		}
		else if (bf < -1 && isbn > node->right->ISBN) {
			return leftRotation(node);
		}
		else if (bf > 1 && isbn > node->left->ISBN) {
			node->left = leftRotation(node->left);
			return RightRotation(node);
		}
		else if (bf < -1 && isbn < node->right->ISBN) {
			node->right = RightRotation(node->right);
			return leftRotation(node);
		}
		return node;
	}

	int BalanceFactor(AVLNode* node)
	{
		if (node == NULL)
			return -1;
		return (HeightBookAvl(node->left) - HeightBookAvl(node->right));
	}

	int HeightBookAvl(AVLNode* node)
	{
		if (node == NULL)
			return -1;
		int a, b;
		a = HeightBookAvl(node->left);
		b = HeightBookAvl(node->right);
		if (a > b)
			return a + 1;
		else
			return b + 1;
	}

	AVLNode* leftRotation(AVLNode* node)
	{
		AVLNode* rR = node->right;
		AVLNode* rL = rR->left;
		rR->left = node;
		node->right = rL;
		return rR;
	}

	AVLNode* RightRotation(AVLNode* node)
	{
		AVLNode* rL = node->left;
		AVLNode* lR = rL->right;
		rL->right = node;
		node->left = lR;
		return rL;
	}

	int NodeHeight(AVLNode* node)
	{
		if (node == NULL)
			return 0;
		else
			return 1 + maxx(NodeHeight(node->left), NodeHeight(node->right));
	}

	int maxx(int a, int b)
	{
		if (a >= b)
			return a;
		else
			return b;
	}

	AVLNode* delnode(int ISBN, AVLNode* node)
	{
		if (node == NULL)
			return NULL;

		if (ISBN < node->ISBN) {
			node->left = delnode(ISBN, node->left);
		}
		else if (ISBN > node->ISBN) {
			node->right = delnode(ISBN, node->right);
		}
		else {
			if (node->left == NULL)
				return node->right;
			else if (node->right == NULL)
				return node->left;
			else
			{
				int temp = minn(node->right);
				node->ISBN = temp;
				node->right = delnode(temp, node->right);
			}
		}

		int bf = BalanceFactor(node);
		if (bf == 2 && BalanceFactor(node->left) >= 0) {
			return RightRotation(node);
		}
		else if (bf == 2 && BalanceFactor(node->left) < 0) {
			node->left = leftRotation(node->left);
			return RightRotation(node);
		}
		else if (bf == -2 && BalanceFactor(node->right) <= 0) {
			return leftRotation(node);
		}
		else if (bf == -2 && BalanceFactor(node->right) > 0) {
			node->right = RightRotation(node->right);
			return leftRotation(node);
		}
		return node;
	}

	void Indisplay(AVLNode* root, int& isbn, string& title, string& author, string& edition, int& price, string& stock)
	{
		if (root == NULL)
			return;

		Indisplay(root->left, isbn, title, author, edition, price, stock);
		isbn = root->ISBN;
		title = root->Book_title;
		author = root->Author;
		edition = root->Edition;
		price = root->Price;
		stock = "Available";
		cout << root->ISBN << " " << root->Book_title <<" "<<root->Author<<" "<<root->Edition <<  " \n";
		Indisplay(root->right, isbn, title, author, edition, price, stock);
	}

	void Predisplay(AVLNode* root,int &isbn,string &title,string &author,string &edition,int &price,int &totalbooks,string &stock)
	{
		if (root == NULL)
			return;

		if (title==root->Book_title)
		{
			isbn = root->ISBN;
			title = root->Book_title;
			author = root->Author;
			edition = root->Edition;
			price = root->Price;
			totalbooks = root->Total_numberofbooks;
			stock = "Available";
			cout << "\n\nISBN : " << root->ISBN
				<< "\nEdition : " << root->Edition
				<< "\nAuther : " << root->Author
				<< "\nBook Title" << root->Book_title
				<< "\nPrice : " << root->Price
				<< "\nNumber of Books available : " << root->Total_numberofbooks
				<< "\n\n";
		}
		Predisplay(root->left,isbn,title,author,edition,price,totalbooks,stock);
		Predisplay(root->right, isbn, title, author, edition, price, totalbooks,stock);
	}

	void Postdisplay(AVLNode* root)
	{
		if (root == NULL)
			return;

		Postdisplay(root->left);
		Postdisplay(root->right);
		cout << root->ISBN << " ";
	}

	int minn(AVLNode* r) {
		while (r->left)
			r = r->left;
		return r->ISBN;
	}

	AVLNode* Root;
};



class CustomerAvl
{
public:

	CustomerAvl()
	{
		Root = NULL;
	}

	~CustomerAvl()
	{
		delete Root;
		Root = NULL;
	}

	void insert(int id, string name, string cnic, string address, string mobileno)
	{
		Root = MakeInsertion(id, name, cnic, address, mobileno, Root);
	}

	void DeleleNode(int ISBN)
	{
		Root = delnode(ISBN, Root);
	}

	void InOrder()
	{
		Indisplay(Root);
	}
	void PreOrder()
	{
		Predisplay(Root);
	}
	void PostOrder()
	{
		Postdisplay(Root);
	}

	int search(int key)
	{
		Customer* curr = Root;
		while (curr != NULL)
		{
			if (key == curr->customer_id)
			{
				return curr->customer_id;
				break;
			}
			else if (key > curr->customer_id)
				curr = curr->right;
			else
				curr = curr->left;
		}
		return 0;
	}

private:

	Customer* MakeInsertion(int id, string name, string cnic, string address, string mobileno, Customer* node)
	{
		if (node == NULL)
		{
			Customer* newNode = new Customer;
			newNode->customer_id = id;
			newNode->Name = name;
			newNode->CNIC = cnic;
			newNode->Address = address;
			newNode->Mobileno = mobileno;
			newNode->left = newNode->right = NULL;
			node = newNode;
			return node;
		}
		if (id < node->customer_id) {
			node->left = MakeInsertion(id++, name, cnic, address, mobileno, node->left);
		}
		else if (id > node->customer_id) {
			node->right = MakeInsertion(id++, name, cnic, address, mobileno, node->right);
		}

		int bf = BalanceFactor(node);

		if (bf > 1 && id < node->left->customer_id) {
			return RightRotation(node);
		}
		else if (bf < -1 && id > node->right->customer_id) {
			return leftRotation(node);
		}
		else if (bf > 1 && id > node->left->customer_id) {
			node->left = leftRotation(node->left);
			return RightRotation(node);
		}
		else if (bf < -1 && id < node->right->customer_id) {
			node->right = RightRotation(node->right);
			return leftRotation(node);
		}
		return node;
	}
	int BalanceFactor(Customer* node)
	{
		if (node == NULL)
			return -1;
		return (HeightBookAvl(node->left) - HeightBookAvl(node->right));
	}
	int HeightBookAvl(Customer* node)
	{
		if (node == NULL)
			return -1;
		int a, b;
		a = HeightBookAvl(node->left);
		b = HeightBookAvl(node->right);
		if (a > b)
			return a + 1;
		else
			return b + 1;
	}
	Customer* leftRotation(Customer* node)
	{
		Customer* rR = node->right;
		Customer* rL = rR->left;
		rR->left = node;
		node->right = rL;
		return rR;
	}
	Customer* RightRotation(Customer* node)
	{
		Customer* rL = node->left;
		Customer* lR = rL->right;
		rL->right = node;
		node->left = lR;
		return rL;
	}
	int NodeHeight(Customer* node)
	{
		if (node == NULL)
			return 0;
		else
			return 1 + maxx(NodeHeight(node->left), NodeHeight(node->right));
	}
	int maxx(int a, int b)
	{
		if (a >= b)
			return a;
		else
			return b;
	}

	Customer* delnode(int id, Customer* node)
	{

		if (node == NULL)
			return NULL;

		if (id < node->customer_id) {
			node->left = delnode(id, node->left);
		}
		else if (id > node->customer_id) {
			node->right = delnode(id, node->right);
		}
		else {
			if (node->left == NULL)
				return node->right;
			else if (node->right == NULL)
				return node->left;
			else
			{
				int temp = minn(node->right);
				node->customer_id = temp;
				node->right = delnode(temp, node->right);
			}
		}
		int bf = BalanceFactor(node);
		if (bf == 2 && BalanceFactor(node->left) >= 0) {
			return RightRotation(node);
		}
		else if (bf == 2 && BalanceFactor(node->left) < 0) {
			node->left = leftRotation(node->left);
			return RightRotation(node);
		}
		else if (bf == -2 && BalanceFactor(node->right) <= 0) {
			return leftRotation(node);
		}
		else if (bf == -2 && BalanceFactor(node->right) > 0) {
			node->right = RightRotation(node->right);
			return leftRotation(node);
		}
		return node;
	}



	void Indisplay(Customer* root)
	{
		if (root == NULL)
			return;

		Indisplay(root->left);
		cout << root->customer_id << " " << root->Name << "\n";
		Indisplay(root->right);
	}

	void Predisplay(Customer* root)
	{
		if (root == NULL)
			return;
		cout << root->customer_id << " ";
		Predisplay(root->left);
		Predisplay(root->right);
	}

	void Postdisplay(Customer* root)
	{
		if (root == NULL)
			return;

		Postdisplay(root->left);
		Postdisplay(root->right);
		cout << root->customer_id << " ";
	}

	int minn(Customer* r) {
		while (r->left)
			r = r->left;
		return r->customer_id;
	}

	Customer* Root;
};


struct  ListNode
{
	int ISBN, Total_numberofbooks, Price,TotalPrice=0;
	string Edition, Author, Book_title;
	bool isstockavailable;
	ListNode* next;
	string gettitle()const
	{
		return Book_title;
	}
	string getauther()const
	{
		return Author;
	}
	string getedition()const
	{
		return Edition;
	}
	int getISBN()const
	{
		return ISBN;
	}
	int getprice()const
	{
		return Price;
	}
	int getnoofbooks()const
	{
		return Total_numberofbooks;
	}

};


class LinkedList
{
public:
	LinkedList() {
		Head = tale = NULL;
	};

	void insert(int isbn,string title,string author,string edition,int totalprice) {
		ListNode* newnode = new ListNode;
		if (Head == NULL) {
			newnode->ISBN = isbn;
			newnode->Author = author;
			newnode->Book_title = title;
			newnode->Price = totalprice;
			newnode->next = Head;
			Head = tale = newnode;
		}
		else
		{
			int temp{ 0 };
			temp = tale->Price;
			totalprice = temp + totalprice;
			tale->next = newnode;
			newnode->ISBN = isbn;
			newnode->Author = author;
			newnode->Book_title = title;
			newnode->Price = totalprice;
			newnode->next = NULL;
			tale = newnode;
		}

	}

	void deletee(int key,int totalprice)
	{
		ListNode* del, * tempp;
		del = Head;
		if (Head->ISBN==key)
		{
			cout << "Head delete\n";
			tempp = Head;
			tale->Price = tale->Price - totalprice;
			Head = Head->next;
			return;
		}
		while (del != tale)
		{
			
			if (del->ISBN == key) {
				tempp = Head;
				tale->Price = tale->Price - totalprice;
				Head = Head->next;
				delete tempp;
				cout << "\n\tDelete from cart\n";
				break;
			}
			if (del->next->ISBN == key) {
				tempp = del->next;
				tale->Price = tale->Price - totalprice;
				del->next = del->next->next;
				delete tempp;
				cout << "\n\tDelete from cart\n";
				break;
			}
			del = del->next;
		}
		if (del == tale)
		{
			cout << "\n\n\tData Not Found\n";
		}
	}
	void iscartempty(string&check)
	{
		if (Head==NULL)
		{
			check = "true";
		}
		else
		{
			check = "false";
		}
	}
	void storecartinfile()
	{
		ofstream write;
		ListNode* current = Head;
		write.open("cartprice.txt");
		write << tale->Price;
		write.close();
		write.open("cartdata.txt",ios::app);
		while (current!=NULL)
		{
			write  << current->ISBN << " " << current->Book_title << "," << current->Author << "," << current->Edition<<"\n";
			current = current->next;
		}
		write.close();
	}
	void addtocart(int isbn, string title, string author, string edition, int price)
	{
		insert(isbn, title, author, edition, price);
	}
	void display() {
		ListNode* curr = Head;
		if (tale!=NULL)
		{
		cout << "Total price = " << tale->Price << endl;
		}
		while (curr != NULL)
		{
			cout << curr->ISBN << "\t"<<curr->Book_title<<"\n";
			curr = curr->next;
		}
	}
private:
	ListNode* Head, * tale;
};


struct variables
{
	//book
	string ISBN, Total_numberofbooks, Price, TotalPrice;
	string Edition, Author, Book_title;

	//customer
	string customer_id;
	string Name, Email, Address, Mobileno;
};