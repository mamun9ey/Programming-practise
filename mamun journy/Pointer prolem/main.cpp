#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
int id;
string model;
double price;
string type;
Vehicle* previous;
Vehicle* next;
};
void push(Vehicle ** head_ref,int new_id,string new_model,string new_type,double new_price)
{
Vehicle* new_Vehicle=new Vehicle();
// put in the data
new_Vehicle->id=new_id;
new_Vehicle->model=new_model;
new_Vehicle->price=new_price;
new_Vehicle->type=new_type;
// make next of new node as head and previously as NULL
new_Vehicle->next=(*head_ref);
new_Vehicle->previous=NULL;
// Change Prev of head node to new node
if((*head_ref) !=NULL)
{
(*head_ref)->previous=new_Vehicle;
}
// Move the head to point to the new node
(*head_ref)=new_Vehicle;
}
void append(Vehicle ** head_ref,int new_id,string new_model,string new_type,double new_price)
{
//1. Allocate node
Vehicle* new_Vehicle=new Vehicle();
Vehicle* last=*head_ref;
// put in the data
new_Vehicle->id=new_id;
new_Vehicle->model=new_model;
new_Vehicle->price=new_price;
new_Vehicle->type=new_type;
// this new node is going to be the last node, sp make next of it as NULL
new_Vehicle->next=NULL;
// if the linked list is empty, then make the new node as head
if(*head_ref==NULL)
{
new_Vehicle->previous=NULL;
*head_ref=new_Vehicle;
return;
}
// else traverse till the last node
while(last->next !=NULL)
last=last->next;
// change the next of last node
last->next=new_Vehicle;
// make last node as previous of new node
new_Vehicle->previous=last;
return;
}
void addAVehicle(Vehicle **vehicle,bool isAddBeganning,bool isAddEnd)
{
int id;
string model;
double price;
string type;
cout<<"\nEnter ID: ";
cin>>id;
cout<<"Enter Vehicle Model: ";
cin>>model;
cout<<"Enter Vehicle Type: ";
cin>>type;
cout<<"Enter Vehicle Price: ";
cin>>price;
cout<<endl;
if(isAddBeganning==true)
push(vehicle,id,model,type,price);
if(isAddEnd==true)
append(vehicle,id,model,type,price);
}
void deleteNode(Vehicle** head_ref,Vehicle* del)
{
//base case
if(*head_ref==NULL || del==NULL) return;
// if node to be deleted is head node
if(*head_ref==del) *head_ref=del->next;
// change next only if node to be deleted is not the last node
if(del->next !=NULL) del->next->previous=del->previous;
// change prev only if node to be deleted is not the first node
if(del->previous!=NULL) del->previous->next=del->next;
// finally free the memory occupied by delete
free(del);
}
void deleteAllOccurofX(Vehicle** head_ref,int x)
{
//if list is empty
if((*head_ref)==NULL) return;
Vehicle* current=*head_ref;
Vehicle* next;
// traverse the list up to the end
while (current !=NULL)
{
// if node found with the value of X
if(current->id==x)
{
//save currents next node in the pointer next
next=current->next;
//delete the node pointer to by current
deleteNode(head_ref,current);
// update current
current=next;
}
else
{
current=current->next;
}
}
cout<<x<<" is successfully deleted form Vehicle list";
}
int countVehicleList(Vehicle* Vehicle)
{
int count=0;
Vehicle* last;
while (Vehicle != NULL)
{
last = Vehicle;
Vehicle = Vehicle->next;
count++;
}
return count;
}
void printVehicleList(Vehicle* Vehicle)
{
Vehicle* last=NULL;
while (Vehicle != NULL)
{
last = Vehicle;
Vehicle = Vehicle->next;
}
cout<<"\nID-> Type-> Model-> Price\n";
while (last != NULL)
{
cout<<last->id<<" "<<last->type<<" "<<last->model<<" "<<last->price<<" \n";
last = last->previous;
}
}
int main()
{
Vehicle *head_vehicle=NULL;
char choose;
int query;
while (choose!='Q' || choose!='q')
{
printf("============================================\n");
printf("DOUBLY LINKED LIST PROGRAM\n");
printf("============================================\n");
printf("[A]: Add a vehicle at beginning\n");
printf("[B]: Add a vehicle at end\n");
printf("[D]: Delete a vehicle with ID\n");
printf("[S]: Show all vehicles from end\n");
printf("[N]: Number of vehicles\n");
printf("[Q]: Quit\n");
printf("--------------------------------------------\n");
printf("Enter your choose : ");
cin>>choose;
switch (choose)
{
case 'a':
case 'A':
addAVehicle(&head_vehicle,true,false);
break;
case 'b':
case 'B':
addAVehicle(&head_vehicle,false,true);
break;
case 'd':
case 'D':
cout<<"Enter Vehicle ID: ";
cin>>query;
deleteAllOccurofX(&head_vehicle,query);
break;
case 's':
case 'S':
printVehicleList(head_vehicle);
break;
case 'n':
case 'N':
cout<<"Length of Vehicle list is: "<<countVehicleList(head_vehicle);
break;
case 'q':
case 'Q':
return 0;
default:
cout<<"Error! Invalid choice. Please choose between 0-5";
}
printf("\n\n");
}
return 0;
}
