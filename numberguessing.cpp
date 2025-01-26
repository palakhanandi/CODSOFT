#include<iostream>
using namespace std;

int main()
{
    int num;
    num = rand() % 100 +1;
    
    int guess = 0;
    int tries = 0;
    cout <<"************Number Guessing Game************"<<endl;
   

    while (guess != num) {
        cout << "Enter a guess : " ;
        cin >> guess;

        if (guess < num) {
            cout << "Too low : "<<endl;
            tries++;
        }
        else if (guess > num) {
            cout << "Too high : "<<endl;
            tries++;
        }
        else{
            cout << "Congratulations! You've guessed the number in : " << tries <<"  tries"<<endl;
        }
         
        
    }


    return 0;
}