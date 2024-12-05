#include<iostream> 
#include<conio.h>
#include<string>

using namespace std;

class Book {
	private:
		string isbn_0514,title_0514,author_0514,edition_0514,publication_0514;
		public:
			void setIsbn_0514(string a_0514){isbn_0514 = a_0514;}
		void setTitle_0514(string b_0514){title_0514 = b_0514;}
		void setAuthor_0514(string c_0514){author_0514 = c_0514;}
		void setEdition_0514(string d_0514){edition_0514 = d_0514;}
		void setPublication_0514(string e_0514){publication_0514 = e_0514;}
		string getIsbn_0514(){return isbn_0514;}
		string getTitle_0514(){return title_0514;}
		string getAuthor_0514(){return author_0514;}
		string getEdition_0514(){return edition_0514;}
		string getPublication_0514(){return publication_0514;}
};
void addBook(int counter_0514);
void deleteBook(int counter_0514);
void editBook(int counter_0514);
void searchBook(int counter_0514);
void viewAllBooks(int counter_0514);
void quit();
int counter_0514=0;
void increment(int a_0514){
	a_0514++;
	counter_0514=a_0514;
}
void decrement(int a_0514){
	a_0514--;
	counter_0514=a_0514;
}
Book books[10];
int main(){
string choice;
system("CLS");
cout<<"LIBRARY MANAGEMENT SYSTEM\n\n";
cout<<"[1]ADD BOOK\n";	
cout<<"[2]DELETE BOOK\n";	
cout<<"[3]EDIT BOOK\n";	
cout<<"[4]SEARCH BOOK\n";	
cout<<"[5]VIEW ALL BOOKS\n";	
cout<<"[6]QUIT\n\n";

cout<<"ENTER CHOICE: ";
getline(cin,choice);
system("CLS");

if(choice=="1"){
	addBook(counter_0514); 
}		
else if(choice=="2"){	
	deleteBook(counter_0514);
}
else if(choice=="3"){
	editBook(counter_0514);
}
else if(choice=="4"){
	searchBook(counter_0514);	
}
else if(choice=="5"){
	viewAllBooks(counter_0514); 
}
else if(choice=="6"){
	quit();	
}
else{
	main();
}
	
_getch();
return 0;
}

void addBook(int counter_0514){
	string isbn_0514,title_0514,author_0514,edition_0514,publication_0514;
	cout<<"ADD BOOK\n\n";
	if(counter_0514<10){
		cout<<"Enter ISBN: ";
		getline(cin,isbn_0514); 
		cout<<"Enter Title: ";
		getline(cin,title_0514);
		cout<<"Enter Author: ";
		getline(cin,author_0514);
		cout<<"Enter Edition: ";
		getline(cin,edition_0514);
		cout<<"Enter Publication: ";
		getline(cin,publication_0514);
		books[counter_0514].setIsbn_0514(isbn_0514);
		books[counter_0514].setTitle_0514(title_0514);
		books[counter_0514].setAuthor_0514(author_0514);
		books[counter_0514].setEdition_0514(edition_0514);
		books[counter_0514].setPublication_0514(publication_0514);	
		increment(counter_0514);
		cout<<"\nBOOK ADDED SUCCESSFULLY!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	else{
		cout<<"YOU HAVE REACHED THE MAXIMUM NUMBER OF BOOKS TOBE ADDED!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
}

void deleteBook(int counter_0514){
	string isbn_0514;
	int choice;
	cout<<"DELETE BOOK\n\n";
	if(counter_0514==0){
		cout<<"THERE IS NO BOOK TO DELETE!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	cout<<"Enter ISBN: ";
	getline(cin,isbn_0514);

	for(int i=0;i<counter_0514;i++){
		if(books[i].getIsbn_0514()==isbn_0514){
			cout<<"\nBOOK FOUND\n\n";
			cout<<"Do you want to delete?\n[1]Yes\n[2]No\n\nEnter Choice: ";
			cin>>choice;
			if(choice==1){
				books[i].setIsbn_0514(""); 
				books[i].setTitle_0514("");
				books[i].setAuthor_0514("");
				books[i].setEdition_0514("");
				books[i].setPublication_0514("");
				for(int a_0514=i;a_0514<counter_0514;a_0514++){
					books[a_0514] = books[a_0514+1];
				}
				books[9].setIsbn_0514(""); 
				books[9].setTitle_0514("");
				books[9].setAuthor_0514("");
				books[9].setEdition_0514("");
				books[9].setPublication_0514("");
				decrement(counter_0514);
				cout<<"\nBOOK SUCCESSFULLY DELETED!\n\nPress any key to continue . . .";
				_getch();
				main();
			}
			else{
				main();
			}
		}
	}
	cout<<"\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
	_getch();
	main();
	
}
void editBook(int counter_0514){
	system("CLS");
	string editIsbn_0514,choice;
	string isbn_0514,title_0514,author_0514,edition_0514,publication_0514;
	cout<<"\nEDIT BOOK\n\n";
	if(counter_0514==0){
		cout<<"THERE IS NO BOOK TO EDIT!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	cout<<"Enter ISBN: ";
	getline(cin,editIsbn_0514);
	for(int i_0514=0;i_0514<counter_0514;i_0514++){
		if(books[i_0514].getIsbn_0514()==editIsbn_0514){
			cout<<"\nBOOK FOUND!\n\n";
			cout<<"ISBN: "<<books[i_0514].getIsbn_0514()<<endl;
			cout<<"TITLE: "<<books[i_0514].getTitle_0514()<<endl;
			cout<<"AUTHOR: "<<books[i_0514].getAuthor_0514()<<endl;
			cout<<"EDITION: "<<books[i_0514].getEdition_0514()<<endl;
			cout<<"PUBLICATION: "<<books[i_0514].getPublication_0514()<<endl;
			cout<<"\nDo you want to edit?\n[1]Yes\n[2]No\n\nEnter choice: ";
			getline(cin,choice);
			if(choice=="1"){
				cout<<"Enter ISBN: ";
				getline(cin,isbn_0514);
				cout<<"Enter Title: ";
				getline(cin,title_0514);
				cout<<"Enter Author: ";
				getline(cin,author_0514);
				cout<<"Enter Edition: ";
				getline(cin,edition_0514);
				cout<<"Enter Publication: ";
				getline(cin,publication_0514);
				books[i_0514].setIsbn_0514(isbn_0514);
				books[i_0514].setTitle_0514(title_0514);
				books[i_0514].setAuthor_0514(author_0514);
				books[i_0514].setEdition_0514(edition_0514);
				books[i_0514].setPublication_0514(publication_0514);	
				cout<<"\nBOOK EDITED SUCCESSFULLY!\n\nPress any key to continue . . .";
				_getch();
				editBook(counter_0514);
			}
			else{
				main();
			}			
		}
}
	cout<<"\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
	_getch();
	main();
}
void searchBook(int counter_0514){
	string isbn_0514;
	int choice;
	bool print = false; 
	cout<<"SEARCH BOOK\n\n";
	if(counter_0514==0){
		cout<<"THERE IS NO BOOK TO SEARCH!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	cout<<"Enter ISBN: ";
	getline(cin,isbn_0514);
	for(int i_0514=0;i_0514<counter_0514;i_0514++){
		if(books[i_0514].getIsbn_0514()==isbn_0514){ 
			cout<<"\nBOOK FOUND!\n\n";
			cout<<"ISBN: "<<books[i_0514].getIsbn_0514()<<endl;
			cout<<"TITLE: "<<books[i_0514].getTitle_0514()<<endl;
			cout<<"AUTHOR: "<<books[i_0514].getAuthor_0514()<<endl;
			cout<<"EDITION: "<<books[i_0514].getEdition_0514()<<endl;
			cout<<"PUBLICATION: "<<books[i_0514].getPublication_0514()<<endl;
			print = true;
		}
	}
	if(print){
		cout<<"\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	else{
		cout<<"\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
		_getch();
		main();		
	}
}
void viewAllBooks(int counter_0514){
	cout<<"VIEW ALL BOOKS\n\n";
	for(int i_0514=0;i_0514<counter_0514;i_0514++){
		cout<<"BOOK DETAILS\n\n";
		cout<<"ISBN: "<<books[i_0514].getIsbn_0514()<<endl;
		cout<<"TITLE: "<<books[i_0514].getTitle_0514()<<endl;
		cout<<"AUTHOR: "<<books[i_0514].getAuthor_0514()<<endl;
		cout<<"EDITION: "<<books[i_0514].getEdition_0514()<<endl;
		cout<<"PUBLICATION: "<<books[i_0514].getPublication_0514()<<endl<<endl;
	}
	cout<<"Press any key to continue . . .";
	_getch();
	main();
}
void quit(){
	_exit(1);
}
