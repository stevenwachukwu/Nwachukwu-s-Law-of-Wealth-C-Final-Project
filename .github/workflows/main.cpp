/*This final project is used to determine whether a user should keep their best friends or not based off their annual salaries. The program will calculate the average salaries between the best friends and the highest salary earner of the friend group. The program uses such things like arrays, if-else statements, a do-while loop, and a function call to make the program run flawlessly.*/

#include <iostream> //input/output library
#include <bits/stdc++.h> //header file
using namespace std;

double findMax (double annualSalary[], int n) {
  return *max_element(annualSalary, annualSalary + n);
} //this function is used to find the highest earner of the friend group

int main() {
int numFriends; //variable to input the number of best friends that the user has
double salary; //variable for the user to put the average salary that they want their friends to make
double sum; //variable to help add all the salaries for the program
double annualSalary[100]; //array for the annual salaries
int N = sizeof(annualSalary) / sizeof(annualSalary[0]); //this variable is used for the maximum value function
double newSalary; //variable declaration for the salary average
string userName; //variable for the user to input their first name
cout<<"Hi and welcome to Nwachukwu's Law of Wealth!"<<endl;
cout<<"\nBefore we start, what is your first name?"<<endl;
cin>>userName; //user inputs their first name
cout<<"\nHello there "<<userName<<"!"<<endl;
do{
cout<<"\nhow many best friends do you have?"<<endl;
cin>>numFriends;
if (numFriends<=0 || numFriends>100) {
 cout<<"\nInvalid input, please try again!"<<endl;
  }
}
while(numFriends<=0 || numFriends>100); //this do-while loop will keep on asking you how many best friends you have until you input the right thing
cout<<"\nOkay, on average how much money do you want your best friends to make a-nnually?"<<endl;
cin>>salary; //user inputs the expected salary goal from their friends
cout<<"\nOkay, now please enter in the annual salary of your friends."<<endl;

for (int i = 0; i<numFriends; i++) {
  cout<<"\nEnter your best friend's salary:"<<endl;
  cin>>annualSalary[i];
  sum+=annualSalary[i];
  } //this for loop will keep on asking the user about their best friend's salary and will stop based off of the number of best friends that they have
  newSalary=sum/numFriends; //the formula for the average
  cout<<"\nFinal Information based off the data:"<<endl;
  cout<<"\nOn average, your best friends make " << "$" << newSalary << " per year."<<endl;
  cout << "\nThe highest earner of your friend group makes $" << findMax(annualSalary, N) << " per year." <<endl; //function call for the highest salary earner

  if (newSalary>=salary) {
    cout<<"\nCongratulations "<<userName<<" your friends met your expected salary goal!"<<endl;
  } //if the average is greater than or equal to the salary goal then the program will give you this message
  else {
    cout<<"\nSorry "<<userName<<" but your friends didn't meet your expected salary goal."<<endl;
    cout<<"\nBy the way, you might need some new friends."<<endl;
  } //if the average is less than the salary goal then the program will give you these two messages
}
