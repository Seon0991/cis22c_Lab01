#include <iostream>
#include "currency.h"
#include "dollars.h"
#include <string>

using namespace std;

int main() {
	Dollars obj1(0, 99);
	Dollars obj2(1, 99);
	Dollars obj3;

	obj3 = obj1+obj2;
	cout << obj3.getCurrNum() << '.' << obj3.getCentNum() << endl;
}

// how about using this
/*
int c1, c2;
Currency* getMoney(int b){
	cout<<"Insert amount of money"<<endl;
	cout<<"Whole: "<<endl;
	cin>>c1;
	cout<<"Part: "<<endl;
	cin>>c2;
   if(b == 1){
       return new Dollar(c1, c2);
   }else if(b == 2){
       return new Euros(c1, c2);
   }else if(b == 3){
       return new Pesos(c1, c2);
   }else if(b == 4){
       return new Yen(c1, c2);
   }else if(b == 5){
       return new Rupee(c1, c2);
   }
}
//get the Enum for money
MonType getType(int b){
   if(B == 1){
       return DOLLAR;
   }else if(B == 2){
       return EUROS;
   }else if(B == 3){
       return PESOS;
   }else if(B == 4){
       return YEN;
   }else if(B == 5){
       return RUPEE;
 }
}

int main(){
   int a = 0, b = 0;
   Wallet wallie;
   do{
       cout << endl;
       cout << "!My Wallet!" << endl;
       cout << "1. Add Money" << endl;
       cout << "2. Sub Money" << endl;
       cout << "3. Fully Remove One Type of Money" << endl;
       cout << "4. Display Contents of Wallet" << endl;
       cout << "5. Empty Wallet" << endl;
       cout << "6. Quit" << endl;
       cin >> a;
       cout << endl;
       if(a >= 1 && a <= 3){
           cout << "Select Currency Type" << endl;
           cout << "1. Dollar" << endl;
           cout << "2. Euros" << endl;
           cout << "3. Pesos" << endl;
           cout << "4. Yen" << endl;
           cout << "5. Rupee" << endl;
           cin >> b;
           cout << endl;
       }
       if(a == 1 && b >= 1 && b <= 5){
           Currency* temp = getMoney(b);
           //display how much is being added
           cout << "Adding ";
           temp->toString();
           cout << " to My Wallet" << endl;
           //will always add so dont need to check
           wallie.addCurrency(getType(b), temp);
       }else if(a == 2 && b >= 1 && b <= 5){
           Currency* temp = getMoney(b);
           cout << "Attempting to remove ";
           temp->toString();
           cout << "from Wallie" << endl;
           if(!wallie.subCurrency(getType(b), temp)){
               cout << "There is no money of that type, cannot subtract!" << endl;
           } else {
               cout << "Succesfully Removed" << endl;
           }
       }
       else if(a == 3 && b >= 1 && b <= 5){
           //if the object being removed exists
           if(wallie.exists(getType(b))){
               Currency* temp = wallie.getCurrency(getType(b));
               cout << "Removing ";
               temp->toString();
               cout << endl;
               wallie.removeCurrency(getType(b));
           }else{
               cout << " Does Not Exist!" << endl;
           }
       }
       else if(a == 4){
           //can only display if wallet is not empty
           if(!wallie.isEmpty()){
               wallie.displayAll();
           }else{
               cout << "Now Empty!!!" << endl;
           }
       }
       else if(a == 5){
           wallie.removeAll();
           cout << "All Types of Currency Removed" << endl;
       }else if(a == 6){
           //destructor handles the mem
           cout << "Bye Bye Wallie" << endl;
       }else{
           //if user selects an invalid option
           cin.clear();
           cin.ignore();
           cout << "Not a Valid Input" << endl;
       }
   }while(a != 6);
   return 0;
}
*/
