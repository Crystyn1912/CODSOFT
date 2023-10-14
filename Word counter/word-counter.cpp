/* Develop a program that counts the number of words in a given text file. Prompt the user to enter the file 
name and display the total word count. */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    string filename;
    cout << "Enter the name of the file you want to count the words of : ";
    cin >> filename;

    ifstream inputFile(filename);
    if (inputFile.is_open()) 
    {
      string line;
      int wordCount = 0;

      while (getline(inputFile, line)) 
      {
        stringstream ss(line);
        string word;

        while (ss >> word) 
        {
          wordCount++;
        }
      }

      inputFile.close();
      cout << "Number of words in the said file: " << wordCount << endl;
    } 
    else 
    {
    cout << "Failed to open the file." << endl;
    }
    return 0;
}