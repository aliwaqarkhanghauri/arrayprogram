#include<iostream>
#include <stdlib.h>
#include<conio.h>

using namespace std ;
class array
{
	public:
    int abc[50];
	int abc1[50];   
	int size  ;
	int in()
	{	
	cout << "Enter array size:" ;
	cin >> size ;
	if(size <= 10)
	{
	cout <<"\n \n";
for(int i=1;i<=size;++i){
	
	cout << "Enter Value on ["<< i<<"]:";
	cin >> abc[i]; 	
}
}
else
{
	cout << endl;
	cout << "Please Enter Size Less Than 10:" ;
	
}

}// End in


int insert()
{
	
	cout << "Incert Function" << endl ;
	int pos ,val ;
	cout << "Enter Index on which you want to incert:" ;
	cin >> pos ;
	cout<< " \n \n";
	cout << "Enter Value:";
	cin >> val ;
	
	for(int i=size; i>=pos ; i--){
		abc[i+1] = abc[i];
			
	}
	abc[pos] = val ;
	
}// End Insert

int del()
{
	
	int delpos, a,b;
	cout << "Enter What Element you want to delete:" ;
	cin >> delpos ;
for(a=1,b=1; a<=size; ++a)
	{
		if(abc[a]!=delpos)
		{
			abc1[b++]=abc[a];
			
		}
		
	}
	if(b==(size+1)){
		cout << "Element not found";
		
	}
	else{
	
  
		
			cout << "\n \n" ;
	cout << "\t \t \t  \t ______________\n " << endl ;
	cout << "\t \t \t  \t Final Array is" << endl ;
	cout << "\t \t \t  \t ______________ \n " << endl ;
	
	for(int j=1; j<=b ; j++){
		
		cout<<"The value at Index [" <<j <<"] is:"<<abc1[j]<<endl;
	}

}

}//End Del
int del_positon()
{
	int delpos, a,b;
	cout << "Enter What Index you want to delete:" ;
	cin >> delpos ;
for(a=1,b=1; a<=size; ++a)
	{
		if(abc[a]!=abc[delpos])
		{
			abc1[b++]=abc[a];
			
		}
		
	}
	if(b==(size+1)){
		cout << "Index not found";
		
	}
	else{
	
  
		
			cout << "\n \n" ;
	cout << "\t \t \t  \t ______________\n " << endl ;
	cout << "\t \t \t  \t Final Array is" << endl ;
	cout << "\t \t \t  \t ______________ \n " << endl ;
	
	for(int j=1; j<=b ; j++)
	{
		
		cout<<"The value at Index [" <<j <<"] is:"<<abc1[j]<<endl;
	}
}

}//end del_postion

int sort()
{
	
	int temp;
	for(int s=1;s<=size;s++)
{
for(int d=1;d<=(size-1);d++)
	{
		if(abc[d]>abc[d+1])
		{
			temp=abc[d];
			abc[d]=abc[d+1];
			abc[d+1]=temp;
		
		}
  }
 }
}//End Sort
int search()
{
	int e,see;
	cout << "\n \n" ;
	cout << "Enter Element you want to search:" ;
	cin >> see;
	for( e=1; e<=size;e++){
		if(abc[e]==see)
		{
			cout << "Element found on Index:["<<e<<"]" ;  
			break ;
	       		
		}
		if(e == (size-1))
		{
			cout << " \n \n" ;
			cout<<"Search Element is not in Array.\n";
		}
		
		
	}
	
}//End search
int binary_search()
{
	int first = 1;
	int num ;
	int middle ;
	int last = size;
	cout << "\n \n";
	cout << "Enter element you want to search:" ;
	cin >> num ;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(abc[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(abc[middle] == num)
	   {
		cout << "Element found on Index:["<<middle<<"]"<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
       }
           middle = (first + last)/2; 
        }//End While 
        if(first > last)
	{
	   cout<<num<<" Not Found in the Array";
	}
}

int display()
{
	//system ("CLS");
	cout << "\n \n" ;
	cout << "\t \t \t  \t ______________\n " << endl ;
	cout << "\t \t \t  \t Final Array is" << endl ;
	cout << "\t \t \t  \t ______________ \n " << endl ;
	for(int j=1; j<=size ; j++){
		
		cout<<"The value at Index [" <<j <<"] on is:"<<abc[j]<<endl;
	}
}//End Display
int array_display()
{
	//system ("CLS");
	cout << "\n \n" ;
	cout << "\t \t \t  \t ______________\n " << endl ;
	cout << "\t \t \t  \t Your Array is" << endl ;
	cout << "\t \t \t  \t ______________ \n " << endl ;
	for(int j=1; j<=size ; j++){
		
		cout<<"The value at Index [" <<j <<"] is:"<<abc[j]<<endl;
	}
}//End array Display
int incert_display()
{
	//system ("CLS");
	cout << "\n \n" ;
	cout << "\t \t \t  \t ______________\n " << endl ;
	cout << "\t \t \t  \t Your Array is" << endl ;
	cout << "\t \t \t  \t ______________ \n " << endl ;
	for(int j=1; j<=(size+1) ; j++){
		
		cout<<"The value at Index[" <<j <<"] is:"<<abc[j]<<endl;
	}
}//End array Display
};


int main()
{
	
int op ;

char c ,in;
array obj;

cout<<" \n \n  \t \t \t  \t \t *****ARRAY PROGRAM By ALI WAQAR***** \n";

do{
	cout << "Enter 'c' to Continue:" ;
	cin >> c;
	cout<<"\n \n" ;
	if(c=='c'|| c=='C'){
	
	cout << "  \t \t \t  \t ----------------LIST -----------------\n \n" ;
	  cout << endl ;

cout << " 1 for Travesing:" << endl ;
cout << " 2 for Inseration:" << endl ;
cout << " 3 for Deletion By Elment:" << endl ;
cout << " 4 for Deletion By Positon:" << endl ;
cout << " 5 for Sorting:" << endl ;
cout << " 6 for Searching:" << endl ;
cout << " 7 for Binary Searching:" << endl ;
cout << " 0 for Exit:" << endl ;
cout << " \n \n" ;
	cout << "  \t \t \t  \t ----------------XXXXXXXXX -----------------\n \n \n " ;
	  cout << endl ;
cout << "What Operation do you want to do:" ;
cin >> op ;
if(op==1 || op==2 || op==3 || op==4 || op==5 || op==6|| op==7)
{
	cout << "\n \n" ;
cout << "Do You Want To Enter New Array Enter 'N' OR Use the old one Enter 'O':" ;
cin >> in ;
if(in=='n'|| in=='n')
{
cout <<"\n \n";
obj.in();
cout <<"\n \n";
}
else{
	obj.array_display();
	cout <<"\n \n";
}
if(op==1)
{
	obj.display();
	cout << "\n \n" ;
}
else if(op==2)
{
	obj.insert();	
	obj.incert_display();
	cout << "\n \n" ;
}
else if(op==3)
{
	obj.del();
    
    cout << "\n \n" ;
}
else if(op==4)
{
 obj.del_positon();
 cout << "\n \n";	
}
else if(op==5)
{
	obj.sort();
	obj.display();
    cout << "\n \n" ;
}
else if(op==6)
{
	
	obj.search();
    cout << "\n \n" ;
}
else if(op==7)
{
	obj.sort();
	cout << "\t \t \t  \t ___________________\n " << endl ;
	cout << "\t \t \t  \t The array is sorted"<<endl ;
	cout << "\t \t \t  \t ___________________\n " << endl ;
	obj.display();
	obj.binary_search();
    cout << "\n \n" ;
}


}
else if(op == 0)
{
		cout << "\n \n" ;
		
	 cout <<" \n \n  \t \t \t \t \t******THANK YOU!***** "<< endl ;	
	 cout <<" \t \t \t \t *****PROGRAM BY ALI WAQAR***** "<< endl ;
	 c
	 getch();
	}
else 
{
		
		cout << "\n \n  \t \t \t  \t ***** Enter Right Select From List ***** \n \n \n \n" << endl ;
	}

}
}
	while(op!=0);

//obj.sort();
//obj.insert();
//obj.del();
//obj.del_display();
//obj.search();
//obj.binary_search();
//obj.array_display();
//obj.display();	

}
