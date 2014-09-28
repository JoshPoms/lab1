#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
//Josh Pomerenke        guess the number


int main()
{
        //set the number
        srand(time(NULL));
        int num=rand() % 10;
        //get number from user
        int guess;
        cout<<"Guess the number"<<endl;
        cin>>guess;

        if(guess==num)
        {
                cout<<"You guessed that shit right!";<<endl;
        }else{
                cout<<"YOU FOOL!"<<endl;
        }
        return(0);

}
