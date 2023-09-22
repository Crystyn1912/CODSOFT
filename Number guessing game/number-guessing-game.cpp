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
    cout << "Guess a number between 1 and 100 : ";
    cin >> guess;

    if(guess < num)
      { cout << "Your guess is too low. The number was : " << num; }
    else if(guess > num)
      { cout << "Your guess is too high. The number was : " << num; }
    else
      { cout << "You guessed right."; }   
    return 0;  
}