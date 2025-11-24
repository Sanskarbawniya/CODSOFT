#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    std::srand(static_cast<unsigned>(std::time(0)));  
    int target = std::rand() % 100 + 1;               
    int guess;

    std::cout << "Guess the number between 1 and 100:\n";

    while (true) {
        std::cout << "Your guess: ";
        std::cin >> guess;

        if (guess < target)
            std::cout << "Too low!\n";
        else if (guess > target)
            std::cout << "Too high!\n";
        else {
            std::cout << "Correct! The number was " << target << ".\n";
            break;
        }
    }

    return 0;
}



















#include <iostream>
using namespace std;
int main(){
    int a[5]={3,2,1,5,8};
    int val,i,pos, flag=0;
    cout<<"Array elements :";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"enter a number to search";
    cin>>val;
    i=0;
    while(i<5)
    {
        if(a[i]==val)
        {
            cout<<"elements founded at index :"<<i+1;
            i++;
            flag=1;
        }
        else{
            i++;
        }
    }
    if(flag==0)
    cout<<"search is unsuccessful";
    
    if(pos<1,pos>5){
        cout<<"invalid position"<<endl;
    }else{
        for(i=pos-1;i<5-1;i++){
            cout<<a[5]<<"";
        }
        cout<<endl;
    }
    return 0;

}

