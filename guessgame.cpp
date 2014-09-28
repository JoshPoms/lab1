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
        int guessed;
	int attempts=0;
       	while(guessed!=1)
        {
                cout<<"Guess the number"<<endl;
                cin>>guess;
		attempts++;
                if(guess==num)
                {
                        cout<<"You guessed that shit right!"<<endl;
                        guessed=1;
			cout<<"Attempts:"<<attempts<<endl;
                }else{
			cout<<"YOU FOOL!"<<endl;
		}
               
	}
        return(0);

}
