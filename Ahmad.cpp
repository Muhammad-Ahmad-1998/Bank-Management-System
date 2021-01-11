#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <ctime>
using namespace std;
class node
{
 public:
    string name;
    string phone;
    string cnic;
    string pass;
    int bal = 0;
    node *next;
};
class Bank
{
    public:
        node *front, *rear;
    public:
        Bank()
        {
            front = NULL;
            rear = NULL;
        }
        void head()
        {
        	char load = 219;
			system("color 0A");
	        cout<<"\n\n\n\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
		}
        void intro()
		{
			char load = 219;
			system("color 0A");
	        cout<<"\n\n\n\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
	        Sleep(300);
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        Sleep(300);
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        |   Presented To    |       "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"              Sir Fawad             "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"                  &                 "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"          Sir Marwat Hussain        "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;Sleep(300);
	        Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        |   Presented By    |       "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"            Muhammad Ahmad          "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"                (15036)             "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;Sleep(300);
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        Sleep(300);
	        cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
	        cout<<"\t\t\t\t\tPress Any Key to Continue...";
	        getch();	
	        
	        system("cls");
			system("color 0A");
	        cout<<"\n\n\n\n\n\n";
	        cout<<"\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        //cout<<"\n\n\n";
	        cout<<"\n\n\n\t\t\t       Loading: ";
			for(int i=1; i<41; i++)
	        {
		        cout<<load;
		        if(i<15)
		            Sleep(200);
		        if(i>=15 && i<30)
		            Sleep(100);
		        if(i>=30)
		            Sleep(50);
	        }
	        system("cls");
	    }
	    
	    bool admin_login()
		{
			char load = 219;
			char password;
	        system("color 0A");
	        top:
	        system("cls");
	        cout<<"\n\n\n\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
		    cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        |       Login       |       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"         Enter your Username        "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"            and Password            "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
	        string compare_id = "Ahmad";
			string compare_pin = "12345";
			string user_id;
	        char pass[32], a;
	        int i = 0;
	        cout<<"\t\t\t\t\t              Admin: ";
	        getline(cin, user_id);
	        cout<<"\t\t\t\t\t                Pin: ";
	        for(int i=0;; )  //Infinite loop
	        {
	        	a=getch();
	        	//check a is numeric or alphabets
	        	if((a>='a' && a<='z') || (a>='A' && a<='Z') || (a>='0' && a<='9'))
	        	{
	        		pass[i] = a;
	        		++i;
	        		cout<<"*";
				}
				if(a=='\b' && i>=1) //if user type backspace
				{
					cout<<"\b \b";
					--i;
				}
				if(a == '\r')  //if user press enter
				{
					pass[i] = '\0';
					break;
				}
			}
	        if(user_id==compare_id && pass==compare_pin) //used to compare real ID and PIN with entered values
	        {
				return true;
			}
	        else
	        {
	        	cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
	        	cout<<"\t\t\t\t\tUser name or Pin is Wrong!!"<<endl;
	        	cout<<"\t\t\t\t\tPress any Key to continue...";
	        	getch();
	        	goto top;
			}
		} //end user_login func
		void logout()
		{
			char load = 219;
			cout<<"\n\n\n\t\t\t   Logging out: ";
			for(int i=1; i<41; i++)
	        {
		        cout<<load;
		        if(i<15)
		            Sleep(200);
		        if(i>=15 && i<30)
		            Sleep(100);
		        if(i>=30)
		            Sleep(50);
	        }
		}
		void success()
		{
			char load = 219;
			system("cls");
			system("color 0A");
			cout<<"\n\n\n\n\n\n";
	        cout<<"\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
			
			cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			cout<<"\t\t\t\t\t           Login Successfully!! ";
			cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			cout<<"\n\n\t\t\t       Loading: ";
			for(int i=1; i<41; i++)
	        {
		        cout<<load;
		        if(i<15)
		            Sleep(200);
		        if(i>=15 && i<30)
		            Sleep(100);
		        if(i>=30)
		            Sleep(50);
	        }
		}
        void menu()
		{
			char load = 219;
			system("cls");
	        system("color 0A");
	        system("cls");
	        cout<<"\n\n\n\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
		    cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        |     Main Menu     |       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        1). Create Account          "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        2). Login User Account      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        3). Display All Account     "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        4). Search Account          "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        5). Delete Account          "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        6). Logout                  "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	    }
	    void create_account()
        {
        	string id ,Phone,CNIC,pin;
        	cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t                Please give your credentials";
        	cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t\t\t  User Name : ";   
			cin>>id; 
	        cout<<"\t\t\t\t\t  PIN       : ";
	        char pass[100];
            int k=0;
            while(pass[k-1]!='\r') {
            pass[k]=getch();
            if(pass[k-1]!='\r') {
            cout<<"*";
            }
            k++;
            }
            pass[k-1]='\0';
			down:
			cout<<"\n\t\t\t\t\t  Mobile    : ";
			cin>>Phone;
			int c = Phone.length();
	        if(c == 12)
	        {
		        for(int i = 0; i < 12; i++)
		        {
			        for(int j = 0; j < 5; j++)
			        {
				        if(Phone[i] != j)
				        {
					        if(Phone[4] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (*-**) Format! "<<endl;
						        goto down;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (*-**) Format! "<<endl;
		        goto down;
	        }
			up:
			cout<<"\t\t\t\t\t  CNIC      : ";
			cin>>CNIC;
	        int b = CNIC.length();
	        if(b == 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(CNIC[i] != j)
				        {
					        if(CNIC[5] != '-' || CNIC[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
						        goto up;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
		        goto up;
	        }  
	        cout<<"\t\t\t\t\t  Date      : ";
	        time_t now = time(0);
            tm *ltm = localtime(&now);
            // print various components of tm structure.
            cout << ltm->tm_mday;
            cout << ":"<< 1 + ltm->tm_mon;
            cout << ":" << 1900 + ltm->tm_year << endl;
   
            node *tmp = new node();
            tmp->name = id;
            tmp->pass = pass;
            tmp->phone = Phone;
            tmp->cnic = CNIC;
            if (rear == NULL)
			{
                front = tmp;
                rear = tmp;
            }
			else
			{
                rear->next = tmp;
                rear = tmp;
			}
            cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;;
			cout<<"\t\t\t                      Account Created Successfully!!";
			cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
        }
        void display()
		{
            node *tmp;
            tmp = front;
            if ((front == NULL) && (rear == NULL)) 
			{
                cout<<"\t\t\tSorry!! We have nothing to show."<<endl;
                return;
            } 
            while (tmp != NULL)
			{
                cout<<endl<<"\t\t\t\t\tName  : "<<tmp->name<<endl;
                cout<<"\t\t\t\t\tPin   : "<<tmp->pass<<endl;
                cout<<"\t\t\t\t\tPhone : "<<tmp->phone<<endl;
                cout<<"\t\t\t\t\tCNIC  : "<<tmp->cnic<<endl;
                cout<<"\t\t\t\t\tBal   : "<<tmp->bal<<endl;
                tmp = tmp->next;
                cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
            }
            cout<<endl;
        }
        bool search()  
        {
        	up:
        	string cnic;
        	cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
	        cout<<"\t\t\t\t\t         CNIC: ";
	        cin>>cnic;
	        int b = cnic.length();
	        if(b == 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(cnic[i] != j)
				        {
					        if(cnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
						        goto up;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
		        goto up;
	        }
	        node *tmp;
            tmp = front;
            if ((front == NULL) && (rear == NULL)) 
			{
                cout<<"\t\t\tSorry!! We have nothing to show."<<endl;
            }
            int count = 0;
            while (tmp != NULL)
			{
				if (tmp->cnic == cnic)
				{
					cout<<"\t\t\t\t\t"<<"========================================"<<endl;
					cout<<endl<<"\t\t\t\t\tName  : "<<tmp->name<<endl;
                    cout<<"\t\t\t\t\tPin   : "<<tmp->pass<<endl;
                    cout<<"\t\t\t\t\tPhone : "<<tmp->phone<<endl;
                    cout<<"\t\t\t\t\tCNIC  : "<<tmp->cnic<<endl;
                    count++;
				}     
				tmp = tmp->next;
            }
            if(count < 1)
			{
				cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
				cout<<"\t\t\t\t\tSorry!!! Data Not Found...";	
			} 
        }
		//user code stared below///...........
		string same_cnic;
		bool User_login()
		{
			char load = 219;
			char password;
	        system("color 0A");
	        top:
	        system("cls");
	        cout<<"\n\n\n\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
		    cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        |    User Login     |       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"         Enter your Username        "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"            and Password            "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
	        string cnic;
	        int i = 0;
	        up:
	        cout<<"\t\t\t\t\t     CNIC: ";
	        cin>>cnic;
	        int b = cnic.length();
	        if(b == 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(cnic[i] != j)
				        {
					        if(cnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
						        goto up;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
		        goto up;
	        }        
	        cout<<"\t\t\t\t\t      Pin: ";
	        char pass[100];
            int k=0;
            while(pass[k-1]!='\r') {
            pass[k]=getch();
            if(pass[k-1]!='\r') {
            cout<<"*";
            }
            k++;
            }
            pass[k-1]='\0';
			node *tmp;
            tmp = front;
            if ((front == NULL) && (rear == NULL)) 
			{
                cout<<"\t\t\tSorry!! We have nothing to show."<<endl;
            }
            int count = 0;
            while (tmp != NULL)
			{
				if (tmp->cnic == cnic && pass == tmp->pass)
				{
					cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
                    count++;
                    cout<<"\nHello \n";
                    same_cnic=cnic;
                    return true;
				}     
				tmp = tmp->next;
            }
            if(count < 1)
			{
				cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
				cout<<"\t\t\t\t\tUser name or Pin is Wrong!!"<<endl;
	        	cout<<"\t\t\t\t\tPress any Key to continue...";
	        	getch();
	        	goto top;
			} 
			return false;
		} 
		void user_menu()
		{
			system("color 0A");
			char load = 219;
	        system("cls");
	        cout<<"\n\n\n\t\t\t\t\t";
		    for(int i=1;i<=40;i++)
	            cout<<load;
		    cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        BANK MANAGEMENT SYSTEM      "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
	        
	        cout<<"\n\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        |     User Menu     |       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        1). Deposit                 "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        2). With-Draw               "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        3). Transfer Money          "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        4). Update Info             "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        5). Details                 "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        6). Logout                  "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        0). Back                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"        =====================       "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t"<<load<<load<<"                                    "<<load<<load<<endl;
	        cout<<"\t\t\t\t\t";
	        for(int i=1;i<=40;i++)
	            cout<<load;
		}
        void user_deposit()
        {
        	up:
        	cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
        	string cnic;
	        int i = 0;
	        cout<<"\t\t\t\t\t     CNIC: ";
	        cin>>cnic;
	        int b = cnic.length();
	        if(b == 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(cnic[i] != j)
				        {
					        if(cnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
						        goto up;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
		        goto up;
	        }
	        int amt;
	        cout<<"\t\t\t\t\t     Amount: ";
	        cin>>amt;
	        node *tmp;
	        tmp = front;
	        if ((front == NULL) && (rear == NULL)) 
			{
                cout<<"\t\t\tSorry!! We have nothing to show."<<endl;
            }
            int count = 0;
            while (tmp != NULL)
			{
				if (tmp->cnic == cnic)
				{
					tmp->bal = tmp->bal+amt;
					cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
					cout<<"\t\t\t\t\t Amount Deposit Successfully!!";
                    count++;
				}     
				tmp = tmp->next;
            }
            if(count < 1)
			{
				cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
				cout<<"\t\t\t\t\tInvalid CNIC!!"<<endl;
	        	cout<<"\t\t\t\t\tPress any Key to continue...";
	        	getch();
	        	goto up;
			} 
		}
        void user_withdraw()
        {
        	up:
        	cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
        	string cnic;
	        int i = 0;
	        cout<<"\t\t\t\t\t     CNIC: ";
	        cin>>cnic;
	        int b = cnic.length();
	        if(b == 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(cnic[i] != j)
				        {
					        if(cnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (*--) Format! "<<endl;
						        goto up;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (*--) Format! "<<endl;
		        goto up;
	        }
	        int amt;
	        cout<<"\t\t\t\t\t     Amount: ";
	        cin>>amt;
	        node *tmp;
	        tmp = front;
	        if ((front == NULL) && (rear == NULL)) 
			{
                cout<<"\t\t\tSorry!! We have nothing to show."<<endl;
            }
            int count = 0;
            while (tmp != NULL)
			{
				if (tmp->cnic == cnic)
				{
					if(tmp->bal != 0 && tmp->bal > amt)
					tmp->bal = tmp->bal-amt;
					cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
					cout<<"\t\t\t\t\t Amount Withdraw Successfully!!";
                    count++;
				}     
				tmp = tmp->next;
            }
            if(count < 1)
			{
				cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
				cout<<"\t\t\t\t\tInvalid CNIC!!"<<endl;
	        	cout<<"\t\t\t\t\tPress any Key to continue...";
	        	getch();
	        	goto up;
			} 
		}
		
		void user_update()
		{
        	cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t\t\t"<<"Update Your Account Info"<<endl;
        	cout<<"\t\t\t\t\t"<<"========================================"<<endl;
        	down:
        	string cnic;
	        int i = 0;
	        cout<<"\t\t\t\t\t         CNIC: ";
	        cin>>cnic;
	        if(cnic.length()== 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(cnic[i] != j)
				        {
					        if(cnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
						        goto down;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
		        goto down;
	        }
	        cout<<"\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t\t\t"<<"Enter Details to Update"<<endl;
        	cout<<"\t\t\t\t\t"<<"========================================"<<endl;
			string name, Phone;
	        cout<<"\t\t\t\t\t      Name: ";
	        cin>>name;
	        up:
	        cout<<"\t\t\t\t\t     Phone: ";
	        cin>>Phone;
	        if(Phone.length() == 12)
	        {
		        for(int i = 0; i < 12; i++)
		        {
			        for(int j = 0; j < 5; j++)
			        {
				        if(Phone[i] != j)
				        {
					        if(Phone[4] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (*-**) Format! "<<endl;
						        goto up;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (*-**) Format! "<<endl;
		        goto up;
	        }
	        node *tmp;
	        tmp = front;
            int count = 0;
            while (tmp != NULL)
			{
				if (tmp->cnic == cnic)
				{
					tmp->name = name;
					tmp->phone = Phone;
					cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
					cout<<"\t\t\t\t\t   Information Updated Successfully!!";
                    count++;
				}     
				tmp = tmp->next;
            }
            if(count < 1)
			{
				cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
				cout<<"\t\t\t\t\tInvalid CNIC!!"<<endl;
	        	cout<<"\t\t\t\t\tPress any Key to continue...";
	        	getch();
	        	goto up;
			} 
		}
		void user_display()
        {
        	node *tmp;
            tmp = front;
            cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
	        string cnic;
	        int i = 0;
	        up:
	        cout<<"\t\t\t\t\t     CNIC: ";
	        cin>>cnic;
	        int b = cnic.length();
	        if(b == 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(cnic[i] != j)
				        {
					        if(cnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
						        goto up;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (**-**-*) Format! "<<endl;
		        goto up;
	        }
            if ((front == NULL) && (rear == NULL)) 
			{
                cout<<"\t\t\tSorry!! We have nothing to show."<<endl;
                return;
            } 
            while (tmp != NULL)
			{
				if (tmp->cnic == cnic)
				{
					cout<<endl<<"\t\t\t\t\tName  : "<<tmp->name<<endl;
                    cout<<"\t\t\t\t\tPin   : "<<tmp->pass<<endl;
                    cout<<"\t\t\t\t\tPhone : "<<tmp->phone<<endl;
                    cout<<"\t\t\t\t\tCNIC  : "<<tmp->cnic<<endl;
                    cout<<"\t\t\t\t\tBal   : "<<tmp->bal<<endl;
                    cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
				}
                tmp = tmp->next;
            }
		}
		bool check_account(string cnic){
			node *temp=NULL;
			temp=front;
			while(temp!=NULL){
				if(temp->cnic==cnic){
					return true;
					break;
				}
				temp=temp->next;
			}
			return false;
			
		}
        void user_trans()
		{
			again:
			cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t\t\t"<<"Give Your Account Info"<<endl;
        	cout<<"\t\t\t\t\t"<<"========================================"<<endl;
        	down:
        	string cnic;
	        int i = 0;
	        cout<<"\t\t\t\t\t         CNIC: ";
	        cin>>cnic;
	        int b = cnic.length();
	        if(b == 15)
	        {
		        for(int i = 0; i < 15; i++)
		        {
			        for(int j = 0; j < 10; j++)
			        {
				        if(cnic[i] != j)
				        {
					        if(cnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
						        goto down;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
		        goto down;
	        }
	        cout<<"\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t\t\t"<<"Enter Details to Transfer Money"<<endl;
        	cout<<"\t\t\t\t\t"<<"========================================"<<endl;
        	top:
        	string tcnic;
	        int j = 0;
	        cout<<"\t\t\t\t\t         CNIC: ";
	        cin>>tcnic;
	        int c = tcnic.length();
	        if(c == 15)
	        {
		        for(int j = 0; j < 15; j++)
		        {
			        for(int k = 0; k < 10; k++)
			        {
				        if(tcnic[j] != k)
				        {
					        if(tcnic[5] != '-' || cnic[13] != '-')
					        {
						        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
						        goto top;
					        }
				        }
			        }
		        }
	        }
	        else
	        {
		        cout<<"\t\t\t\t\t Input must be (*****-*******-*) Format! "<<endl;
		        goto top;
	        }
	        int amt;
	        cout<<"\t\t\t\t\t         Amount: ";
	        cin>>amt;
	        node *tmp;
            tmp = front;
            
            if ((front == NULL) && (rear == NULL)) 
			{
                cout<<"\t\t\tSorry!! We have nothing to show."<<endl;
      
            }else{
            int cont = 0, bal;
            if(cnic==same_cnic){
            if(cnic!=tcnic && check_account(cnic)==true){
            	while(tmp!=NULL){
            	if (tmp->cnic == cnic)
				{     
				    if(tmp->bal>=amt){
					  tmp->bal= tmp->bal-amt;
                      cont++;
                  }
                  break;
				}     
				tmp = tmp->next;
				}
				if(cont>0 && check_account(tcnic)==true){
				tmp = front;
				int bb=0;	
				while(tmp!=NULL){
            	    if (tmp->cnic == tcnic)
				    {     
				      tmp->bal= tmp->bal+amt;
				      bb++;
                      break;
				    }     
				    tmp = tmp->next;
				 }
				 if(bb>0){
				 	cout<<"\t\t\t\t\t         Transfer Successfully\n";
				 }
				}else{
					if(check_account(tcnic)==false){
						cout<<"\t\t\t\t\t         This Account not Registered\n";
					}else{
						cout<<"\t\t\t\t\t OOPPPSSS!!! Your Balance is low\n";
					}
				}
			}else{
				if(cnic==tcnic){
				cout<<"\t\t\t\t\t  Data Please use different account for transection...\n";
		    	}else{
		    		cout<<"\t\t\t\t\t   This Account is not Registered!\n";
				}
			}
	     	}else{
	     		cout<<"\t\t\t\t\t         Please use CNIC account in which you login\n";
	     		goto again;
			 }
		    } 	
		}	
        void del()
        {
        	string cnic;
        	cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
	    	cout<<"\t\t\t                Enter CNIC: ";
        	cin>>cnic;
            node* del;
            node* pre;
            pre = NULL;
            del = front;
            if(del == NULL)
            {
                cout<<"list is empty";
            }
            else
            {
                if(del !=NULL && del->cnic==cnic)
                {
                    front = front->next;
                    delete(del);
                    cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			        cout<<"\t\t\t                         Data deleted Successfully!!";
			        cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
                }
                else
                {
                    while(del!=NULL && del->cnic != cnic)
                    {
                        pre=del;
                        del=del->next;
                    }
                    pre->next=del->next;
                    delete(del);
                    cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			        cout<<"\t\t\t                         Data deleted Successfully!!";
			        cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
                }
            }
        }
};
int main()
{
	Bank obj;    // Constructor of Bank Class
	obj.intro();
	bool check = obj.admin_login();
	if(check == true)
	{
		obj.success();
		top:
		obj.menu();
		cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
		cout<<"\t\t\t                Enter your Choice: ";
        int choice;
        cin>>choice;
        if (choice == 1)
        {
        	system("cls");
        	obj.head();
        	obj.create_account();
        	cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t                    Press any Key to Continue ?? ";
        	getch();
        	goto top;
		}
		else if(choice == 2)
		{
			bool check = obj.User_login();
			if (check == true)
			{
				system("cls");
				up:
				obj.user_menu();
				cout<<"\n\n\t\t\t\t\t"<<"========================================"<<endl;
		        cout<<"\t\t\t                Enter your Choice: ";
                int choice;
                cin>>choice;
                if (choice == 1)
                {
                	system("cls");
                	obj.head();
                	obj.user_deposit();	
                	cout<<"\n\t\t\t\t\tPress any Key to continue...";
	             	getch();
                	goto up;
				}
                else if (choice == 2)
                {
                	system("cls");
                	obj.head();
                	obj.user_withdraw();	
                	cout<<"\n\t\t\t\t\tPress any Key to continue...";
	             	getch();
                	goto up;
				}
                else if (choice == 3)
                {
                	system("cls");
                	obj.head();
                	obj.user_trans();	
                	cout<<"\n\t\t\t\t\tPress any Key to continue...";
	             	getch();
                	goto up;
				}
                else if (choice == 4)
                {
                	system("cls");
                	obj.head();
                	obj.user_update();	
                	cout<<"\n\t\t\t\t\tPress any Key to continue...";
	             	getch();
                	goto up;
				}
                else if (choice == 5)
                {
                	system("cls");
                	obj.head();
                	obj.user_display();	
                	cout<<"\t\t\t\t\tPress any Key to continue...";
	             	getch();
                	goto up;
				}
                else if (choice == 6)
                {
                	system("cls");
			        obj.head();
			        obj.logout();
				}
				else if (choice == 0)
				{
					goto top;
				}
                else
                {
                	cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			        cout<<"\t\t\t        Sorry!!! Invalid Input. ";
			        cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			        goto top;
				}
			}
			else
			{
				cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			    cout<<"\t\t\t        Sorry!!! Invalid Input. ";
			    cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			    goto top;
			}
		}
		else if(choice == 3)
		{
			system("cls");
        	obj.head();
        	cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			obj.display();
			cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t                    Press any Key to Continue ?? ";
        	getch();
        	goto top;
		}
		else if (choice == 4)
		{
			system("cls");
			obj.head();
			obj.search();
			cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
        	cout<<"\t\t\t                    Press any Key to Continue ?? ";
        	getch();
        	goto top;
		}
		else if (choice == 5)
		{
			system("cls");
            obj.head();
            obj.del();	
            cout<<"\n\t\t\t\t\tPress any Key to continue...";
	        getch();
            goto top;
		}
		else if (choice == 6)
		{
			system("cls");
			obj.head();
			obj.logout();
		}
		else
		{
			cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			cout<<"\t\t\t        Sorry!!! Invalid Input. ";
			cout<<"\n\t\t\t\t\t"<<"========================================"<<endl;
			goto top;
		}
	}
}
