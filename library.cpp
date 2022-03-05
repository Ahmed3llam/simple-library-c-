#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std ;
void delete_Book(){
		fstream library ;
		fstream temp ;
	library.open("library.txt",ios::in);
	temp.open("temp.txt",ios::out);
		cin.ignore();
	char name [15];
	char id [10];
	char auther [15];
	char price [10];
	char amount [10];
	char a [10];
	cout<<"please enter  id for Book to delete ?!\n";
	cin.getline(a,10);

	while(!library.eof()){

	library.getline(name,15,'|');
	library.getline(id,10,'|');
    library.getline(price,10,'|');
    library.getline(auther,15,'|');
	library.getline(amount,10);
	if(strcmp(id,a)==0)
	    {
              continue;


	     }
	     else{

	     temp<<name<<"|"<<id<<"|"<<auther<<"|"<<price<<"|"<<amount<<"\n";
	}
	}



				library.close();
				temp.close();
				        library.open("library.txt",ios::out);
					    temp.open("temp.txt",ios::in);
				 	while(!temp.eof()){

						temp.getline(name,15,'|');
						temp.getline(id,10,'|');
						temp.getline(auther,15,'|');
						temp.getline(price,10,'|');
						temp.getline(amount,10);

	 				 library<<name<<"|"<<id<<"|"<<auther<<"|"<<price<<"|"<<amount<<"\n";
				}
				     library.close();
				    temp.close();
				remove("temp.txt");
			}
void update_Book(){
		fstream library ;
		fstream temp ;
	library.open("library.txt",ios::in);
	temp.open("temp.txt",ios::out);
		cin.ignore();
	char name [15];
	char id [10];
	char auther [15];
	char price [10];
	char amount [10];
	char a [10];
	cout<<"please enter  id for Book  to update ?!\n";
	cin.getline(a,10);
	int x=0;
	while(!library.eof()){

	library.getline(name,15,'|');
	library.getline(id,10,'|');
	library.getline(auther,15,'|');
	library.getline(price,10,'|');
	library.getline(amount,10);
	if(strcmp(id,a)==0)
	    {
              	cin.ignore();
				cout<<"name :\n";
				cin.getline(name,15);
				cout<<"id :\n";
				cin.getline(id,15);
				cout<<"auther :\n";
	            cin.getline(auther,15);
				cout<<"price :\n";
				cin.getline(price,15);
				cout<<"amount :\n";
				cin.getline(amount,15);
	            temp<<name<<"|"<<id<<"|"<<auther<<"|"<<price<<"|"<<amount<<"\n";

				x=1;

	     }
	     else{

	     temp<<name<<"|"<<id<<"|"<<auther<<"|"<<price<<"|"<<amount<<"\n";
	}}

	if( x == 0){

		cout<<"data not found !!!!! \n";

				}

				library.close();
				temp.close();
				       library.open("library.txt",ios::out);
					    temp.open("temp.txt",ios::in);
				 	while(!temp.eof()){

						temp.getline(name,15,'|');
						temp.getline(id,10,'|');
						temp.getline(auther,15,'|');
						temp.getline(price,10,'|');
						temp.getline(amount,10);

	 				 library<<name<<"|"<<id<<"|"<<auther<<"|"<<price<<"|"<<amount<<"\n";
				}
				     library.close();
				    temp.close();
				remove("temp.txt");

}

void display_Book(){

		fstream library ;
	library.open("library.txt",ios::in|ios::out|ios::app);
	cin.ignore();
	char name [15];
	char id [10];
	char auther [15];
	char price [10];
	char amount [10];
	cout<<"name \t\t\t id \t auther \t\t price \t amount"<<"\n";
	while(!library.eof()){

	library.getline(name,15,'|');
	library.getline(id,10,'|');
	library.getline(auther,15,'|');
	library.getline(price,10,'|');
	library.getline(amount,10);
		cout<<name<<"\t\t"<<id<<"\t"<<auther<<"\t\t"<<price<<"\t"<<amount<<"\n";

                     }


	library.close();

}

void search_Book(){
		fstream library ;
	library.open("library.txt",ios::in|ios::out|ios::app);
	cin.ignore();
	char name [15];
	char id [10];
	char auther [15];
	char price [10];
	char amount [10];
	char a [10];
	cout<<"please enter  id for Book  to search ?!\n";
	cin.getline(a,10);


	int x=0 ;
	while(!library.eof()){

	library.getline(name,15,'|');
	library.getline(id,10,'|');
	library.getline(auther,15,'|');
	library.getline(price,10,'|');
	library.getline(amount,10);
	if(strcmp(id,a)==0)
	    {
		cout<<"name \t\t\t id \t auther \t\t price \t amount"<<"\n";
		cout<<name<<"\t\t"<<id<<"\t"<<auther<<"\t\t"<<price<<"\t"<<amount<<"\n";
		x = 1;
		break;
	     }
	}
	if( x == 0){

		cout<<"data not found !!!!! \n";

				}

              library.close();

}

void insert_Book() {

	fstream library ;
	char name [15];
	char id [10];
	char auther [15];
	char price [10];
	char amount [10];
	library.open("library.txt",ios::in|ios::out|ios::app);
	cin.ignore();
	cout<<"name :\n";
	cin.getline(name,15);
	cout<<"id :\n";
	cin.getline(id,15);
	cout<<"auther :\n";
	cin.getline(auther,15);
	cout<<"price :\n";
	cin.getline(price,15);
	cout<<"amount :\n";
	cin.getline(amount,15);
	library<<name<<"|"<<id<<"|"<<auther<<"|"<<price<<"|"<<amount<<"\n";
	cout<<" Done !! \n";


	library.close();
}


int main (){

	bool flag = true ;

	while (flag){
	system("color 3");
	 int z;
        cout<<"\n\n";
                    
        cout<<"                                                                                                   \n";
        cout<<"        <<<<<   Welcome to The library   >>>>>                        \n";
        cout<<"                                                                                                   \n";
        cout<<"                                                                                                   \n";
        cout<<"                                                                                                   \n";
        cout<<"                                                                                                   \n";
        cout<<"  *  Press (1) to add new Book   \n";
        cout<<"  *  Press (2) to search Book    \n";
        cout<<"  *  Press (3) to update Book     \n";
        cout<<"  *  Press (4) to delete Book     \n";
        cout<<"  *  Press (5) to read all data    \n";
        cout<<"                                   \n";
        cout<<"                  \n";
        cout<<"                     your choice is : ";
        cin >> z ;
	switch(z){
	case 1 :
			insert_Book() ;
			break ;
	case 2:
			search_Book() ;
			break ;
	case 3:
			update_Book();
			break;
	case 4:
			 delete_Book();
			 break;
	case 5:
			display_Book();
			break;
	default :
	cout <<" \n  chiose a right number \n" ;
	}

		cout<<"\n if you want to continuo press 'Y' or 'N' to exit \n ";

		char c ;
		cin>>c;
		if (c=='Y' || c=='y')
		flag = true ;
		else if(c=='n' || c=='N')
		flag = false;
		 else
		 cout<<"erorr \n";
    	}

	return 0;
}

