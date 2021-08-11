#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
class Node{
	
	public:
	
	int value;
	Node* pre;
	Node* next;
    
    
};

template<class T>
class DLCL{           //doubly linked list
    
    friend Node<T>;
    class iterators;
    
    
	public:
		DLCL(); //constructor
		
		~DLCL();  //destructor
		
		DLCL(T val);//copy constructor
		
		void Insert_First(T n);
	
	    void Insert(T n,T m);
	    
	    void Delete(T n);
	    
	    void DisplayList();
	    
        private:
          Node<T>* head;
	    
    class iterators{

	      public:
	        iterators (Node<T>* n)
		    {
			   current=n;	
		    }
		
            iterators begin(){
			
			    return iterators(head->next);
	        }
	        
			iterators end(){
		      	
		      	return iterators(head->pre);  	
	        }
		    
		    iterators& operator++(){
		    	
		    	current=current->next;
		    	return *this;
		    	
			}
			iterators& operator--(){
				
				current=current->pre;
				return *this;	
			}
			
			T& operator*(){
				
				return current->value;
			}
			
			T  operator->(){
				
				return current;
			}
			 	
	       private:
		     Node<T>* current;
	
	
         };

	  
};

template<class T>
DLCL<T>::DLCL(){
     
     head=new Node<T>;
     head->pre=head;
     head->next=head;
     
}

template<class T>
DLCL<T>::~DLCL(){
	
    Node<T>* cur;
	
	cur=head->next;
	while(cur->next!=head){
		
		cur=cur->next;
		delete cur->pre;
	}
	delete cur;
	
}

template<class T>
void DLCL<T>::Insert_First(T n){   //Insert a new Node after Head
	
	cout<<"You are inside Insert_First!"<<endl;
	
	Node<T>* cur;
	cur=new Node<T>;
    
    cur->value=n;
	cur->pre=head; 
	cur->next=head->next;
	head->next->pre=cur;
    head->next=cur;
    
    
    
    cout<<"Insert_First Ended!"<<endl;

}

template<class T>
void DLCL<T>::Insert(T n ,T m){   //Insert Node with value of m to the right side of node p with value of n
                                                  //Which is strange? How can you locate Node p in the linked list?
	  
	Node<T>* cur;  
	cur=head->next;   //start from the node after head
	  
	while(cur!= head)  
	{ 
	  if(cur->value==n){
        
        Node<T>* create=new Node<T>;
        
		create->pre=cur; create->next=cur->next; 
	    cur->next->pre=create; cur->next=create;
        create->value=m;
        
        return;
	  }
      
      cur=cur->next;
	} 
}

template<class T>
void DLCL<T>::Delete(T n){           //Delete the Node with the value of n
	
	 cout<<"You are inside Delete!"<<endl;
	  
	 Node<T>* cur;
	 
	 cur=head->next;
	 
	 while(cur!=head){
	 
	   if(cur->value==n){
	    
	     cur->next->pre=cur->pre;  
	     cur->pre->next=cur->next;
	     
		 delete cur; 
	     
	     cout<<"Deleted succesfully!"<<endl;
	     
		 return;
		 
        } 
	 	
	   cur=cur->next;
	 	
     }
     
     cout<<"No matched Node for Deletion"<<endl;
}

template<class T>
void DLCL<T>::DisplayList(){
	
	cout<<"You are inside DisplayList!"<<endl;
	
	Node<T>* cur=head->next;
	
	while(cur!=head){
	  
	  cout<<cur->value<<endl;
      cur=cur->next;  
    }
    
    
    cout<<"DisplayList Ended!"<<endl;
    
}

int main(void)
{  
   DLCL<int> a;
   
   a.Insert_First(3);//Test insert first
   
   a.Insert_First(9);
   
   a.DisplayList();//Test display list
   
   a.Insert(3,5);//Test Insert
   
   a.DisplayList();
   
   a.Delete(5);//Test Delete
   
   a.DisplayList();
   
   a.Delete(11);//Test Delete again for Non existing number
   
   a.DisplayList();
   
   

   system("Pause");

   return 0;
}



