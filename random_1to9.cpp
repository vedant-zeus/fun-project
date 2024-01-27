#include<iostream>
#include<time.h>

using namespace std ;

int main () {
            int number;
            float guess ;
            srand(time(0));
            number = rand()%9+1;
            cout<<number<<endl;
            do {
            cout<<"Enter your guess :" ;
            cin>>guess;
            
                        if (guess == number){
                        cout << "Well guessed !";
            }else{
                        cout << "invalid guess" << endl;
            }} while (guess!= number);

            
}