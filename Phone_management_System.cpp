#include<iostream>
#include<conio.h>
using namespace std;


 class newcontact
    {  public:

      string name;
      long int number;
      string email;
      void addContact();
    };
    





void newcontact::addContact()
{  
    system("color 0A");

   
    int n=1;   
    char c; 
    char d;

    while(n)
 {  
    cout<<n<<":"<<endl;

    cout<<"enter name"<<endl;
    cin>>name;

    cout<<"enter phone number"<<endl;
    cin>>number;

    cout<<"do you want to enter email Y/N"<<endl;
    cin>>c;

    if(c=='Y'||c=='y')
    {
        cout<<"enter email"<<endl;
        cin>>email;
         
    }
    
       n++;
    
    
    cout<<"do you want save another contact Y/N"<<endl;
    cin>>d;

    if(d=='Y'||d=='y')
     { 
     
     }
    else if(d=='N'||d=='n')
    {
      n=0;
    }
    
   }

}




int main()
{  system("cls");
   system("color 0B");
   int i=1;

   int choice; 
   cout<<"\n\n\t\t Contact Management System"<<endl;
  int n=1;
  while(n)
  { 
     system("color 0B");                                      //set color properly
    cout<<"\n\t1.Add contact\n\t2.Search Contact\n\t3.Delete Contact\n\t4.Edit Contact\n\t5.Exit"<<endl;
   
   cin>>choice;

   switch(choice)
    { 

    case 1:    
    while(n)
    {   newcontact an;    
     an.addContact();
    } 




    break;

    case 2:           
     //searchContact();
    break;

    case 3:
     //deleteContact();
    break;

    case 4:
    // editContact();
    break;

    case 5:
    n=0;
    system("cls");
    cout<<"\n\tThank You"<<endl;
    break; 

    default:
    system("color 4");
    cout<<"INVALID INPUT"<<endl;
   

   } 
   cout<<endl;
 

   }




}
