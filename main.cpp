#include <iostream>
#include <cstdlib>
#include <ctime>

void check(int input, int random_number,int attemps)
{
    if (random_number == input)
    {
        std::cout << "Congratulations! You guessed the correct number in " << attemps <<" attempts." << std::endl;
    }
    else if (input > random_number)
    {
        std::cout << "Incorrect! The number is less than" << input << std::endl;
    }
    else if (input < random_number)
    {
        std::cout << "Incorrect! The number is greater than " << input;
    }
}

void medium(int random_number)
{

    int attemps = 0;
    int maxAtteps = 5;
    int input = 0;

    while (attemps != maxAtteps || input == random_number)
    {
         std::cout <<"\n";
        std::cout << "Enter your guess : ";
        std::cin >> input;
        check(input, random_number,attemps);
        if (input == random_number || attemps == maxAtteps)
        {
            break;
        }
        attemps++;
    }
}
void hard(int random_number)
{

    int attemps = 0;
    int maxAtteps = 3;
    int input = 0;

    while (attemps != maxAtteps || input == random_number)
    {

        std::cout << "\nEnter your guess : ";
        std::cin >> input;
        check(input, random_number,attemps);
        if (input == random_number || attemps == maxAtteps)
        {
            break;
        }

        attemps++;
    }
}

void easy(int random_number)
{
    int attemps = 0;
    int maxAtteps = 10;
    int input = 0;

    while (attemps != maxAtteps || input == random_number)
    {
        std::cout <<"\n";
        std::cout << "Enter your guess : ";
        std::cin >> input;
        check(input, random_number,attemps);
        if (input == random_number || attemps == maxAtteps)
        {
            break;
        }
        attemps++;
    }
}

int randomNumbr()
{
    srand(time(0));
    int randomNumberInRange = 1 + (rand() % 100);

    // std::cout<< randomNumberInRange << std::endl;

    return randomNumberInRange;
}

void showMenu(int level, int random_number)
{
    std::cout << "Welcome to the Number Guessing Game!\nI'm thinking of a number between 1 and 100.\nYou have 5 chances to guess the correct number.\n\nPlease select the difficulty level :\n1.Easy(10 chances)\n2.Medium(5 chances)\n3.Hard(3 chances) " << std::endl;
    std::cout << "Enter your choice : ";

    std::cin >> level;
    if (level < 0 || level > 3)
    {
        bool a = true;
        do
        {
            std::cin >> level;
            if (level < 0 || level > 3)
            {
                a = true;
            }
            else
            {
                a = false;
            }
        } while (a);
    }

    if (level == 1)
    {
        easy(random_number);
    }
    else if (level == 2)
    {
        medium(random_number);
    }
    else if (level = 3)
    {
        hard(random_number);
    }
}

int main()
{
    int random_number = randomNumbr();
    int level;

    showMenu(level, random_number);

    return 0;
}