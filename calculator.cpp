/*
	Name: Christian Jericho Katigbak
	Copyright: 
	Author: 
	Date: 09/09/21 16:54
	Description: Interim1Katigbak
*/
#include <iostream>


using namespace std;

int main(){


 int firstnumber, secondnumber, sumoftwonumber, diffoftwonumbers, quotwonumbers,prooftwonumbers, modulooftwonumbers;

 cout<<"Enter First Number: ";
 cin>>firstnumber;

cout<<"Enter Second Number: ";
cin>>secondnumber;

sumoftwonumber=firstnumber+secondnumber;
diffoftwonumbers=firstnumber-secondnumber;
prooftwonumbers=firstnumber*secondnumber;
quotwonumbers=firstnumber/secondnumber;
modulooftwonumbers=firstnumber%secondnumber;

cout<<endl<<firstnumber<<" + "<<secondnumber<<" = "<< sumoftwonumber;
cout<<endl<<firstnumber<<" - "<<secondnumber<<" = "<< diffoftwonumbers;
cout<<endl<<firstnumber<<" * "<<secondnumber<<" = "<< prooftwonumbers;

cout<<endl<<firstnumber<<" / "<<secondnumber<<" = "<< quotwonumbers;
cout<<endl<<firstnumber<<" % "<<secondnumber<<" = "<< modulooftwonumbers;

return 0;
}