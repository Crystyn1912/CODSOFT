/* Create a program that generates a random number and asks the user to guess it. Provide feedback on whether
the guess is too high or too low until the user guesses the correct number.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short min_value = 1;
    const short max_value = 100;

    srand(time(nullptr));
    short num = (rand() % (max_value - min_value + 1)) + min_value;
    
    short guess;

    do
    {
      cout << "Guess a number between 1 and 100 : ";
      cin >> guess;
      
      if(guess < num)
        { cout << "Your guess is too low." << endl; }
      else if(guess > num)
        { cout << "Your guess is too high." << endl; }
      else if(guess == num)
        { cout << "You guessed right." << endl; }
    }
    
    while ( guess != num );
    
    return 0;  
}