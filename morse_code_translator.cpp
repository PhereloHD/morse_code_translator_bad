#include <iostream>
#include <string>
#include <algorithm>


int main(){




/* this is the ascii/morse stuff */
char text[36] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
 '1','2','3','4','5','6','7','8', '9','0' };
 
std::string morse[36] = {".-","-...","-.-.","-..",".","..-","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",
".----","..---","...--","....-",".....","-....","--....","---..","----.","-----"};
/* the algorithm and user input */

std::string userInput;
std::cout<<"What do you want to translate? \n";
std::cin>>userInput;


std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);

std::cout<<"Your text translated: \n";

for (int i = 0; i<userInput.length(); ++i){

for (int counter = 0; counter < 36; counter++){
if (userInput.at(i) == text[counter]){
    std::cout << morse[counter];

}
}
}

    return 0;
}
//this is bad


