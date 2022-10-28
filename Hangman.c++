#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstdlib> 
#include <algorithm>



// This is the easiest mode 
void easy(){


  // our chosen words 
  std::vector<std::string> var = {"Computer","House","Bed"};
  std::cout << "\n";


  /// description of the game to the user 
  std::cout << "The Word has been chosen...\n you get three lives to find the word if you fail the gmae will suggest a restart \n";


  //definition of lives and char found 
  int lives;
  int foundcharacters;
  foundcharacters =0;
  lives = 3;

  ///sperater 
  std::cout << "//////////////////////////////////////////////\n";
  
  
  
  

  



  //generates a random number between 0 and 3, this will then chose one of the words from our vector !!
  srand ( time(NULL) ); //initialize the random seed
  int RandIndex = rand() % 4; 
  //std::cout << var[RandIndex]; This is for coding purposes to see what the word is 



  // gives hint 
  if (var[RandIndex] == "Computer"){
    std::cout << "//////////////////////////////////////////////\n";
    std::cout << "\n";
    std::cout << "An electronic device for storing and processing data, typically in binary form, according to instructions given to it in a variable program";
  }else if (var[RandIndex] == "House"){
    std::cout << "//////////////////////////////////////////////\n";
    std::cout << "\n";
    std::cout << "A building for human habitation, especially one that consists of a ground floor and one or more upper storeys";
  }else if(var[RandIndex] == "Bed"){
    std::cout << "//////////////////////////////////////////////\n";
    std::cout << "\n";
    std::cout << "You sleep on it";
  }




  
 

  
   // game loop
      while (lives > -1 && foundcharacters != var[RandIndex].length() ){
      // this states how many lives we have 
      std::cout << "\nYou have  " << lives  << "  lives\n";
      std::cout << "Please enter in your first character to see if it is in the list \n";
      std::string guess;
      std::cin >> guess;
        
      if(var[RandIndex].find(guess)<var[RandIndex].length()){ //to find +
        std::cout << "//////////////////////////////////////////////\n";
        std::cout << "Your guess was correct , True\n";
        std::cout << "//////////////////////////////////////////////\n";
        foundcharacters = foundcharacters +1;
    } else {
        std::cout << "//////////////////////////////////////////////\n";
        std::cout << "W R O NG , you lose a life";
        std::cout << "//////////////////////////////////////////////\n";
        lives=lives -1;  
      }
   
    // ends our loop
    if (lives < 1  ){
       std::cout << "You ran out of lives try again\n";
      easy();
    }else if (foundcharacters >= var[RandIndex].length()){
      std::cout << "You Foud the word !\n";
      break;
      
    }
  
    }
  
  
}

void medium(){
   // our chosen words 
  std::vector<std::string> var = {"Computer","Shipwreck","Vessel" "\n"};


  /// description of the game to the user 
  std::cout << "The Word has been chosen...\n you get three lives to find the word if you fail the gmae will suggest a restart \n";


  //definition of lives and char found 
  int lives;
  int foundcharacters;
  foundcharacters =0;
  lives = 2;

  ///sperater 
  std::cout << "//////////////////////////////////////////////\n";
  
  
  
  

  



  //generates a random number between 0 and 3, this will then chose one of the words from our vector !!
  srand ( time(NULL) ); //initialize the random seed
  int RandIndex = rand() % 4; 
  std::cout << var[RandIndex];




  
 

  
   // game loop
      while (lives > 0 && foundcharacters != var[RandIndex].length() ){
      // this states how many lives we have 
      std::cout << "You have  " << lives  << "  lives\n";
      std::cout << "Please enter in your first character to see if it is in the list \n";
      std::string guess;
      std::cin >> guess;
        
      if(var[RandIndex].find(guess)<var[RandIndex].length()){ //to find +
        std::cout << "//////////////////////////////////////////////\n";
        std::cout << "Your guess was correct , True\n";
        std::cout << "//////////////////////////////////////////////\n";
        foundcharacters = foundcharacters +1;
    } else {
        std::cout << "//////////////////////////////////////////////\n";
        std::cout << "W R O NG , you lose a life";
        std::cout << "//////////////////////////////////////////////\n";
        lives=lives -1;
        
        
      }
   
  

  
    }
  
}

void hard(){
   // our chosen words 
  std::vector<std::string> var = {"Computer","House","Bed\n"};


  /// description of the game to the user 
  std::cout << "The Word has been chosen...\n you get three lives to find the word if you fail the gmae will suggest a restart \n";


  //definition of lives and char found 
  int lives;
  int foundcharacters;
  foundcharacters =0;
  lives = 1;

  ///sperater 
  std::cout << "//////////////////////////////////////////////\n";
  
  
  
  

  



  //generates a random number between 0 and 3, this will then chose one of the words from our vector !!
  srand ( time(NULL) ); //initialize the random seed
  int RandIndex = rand() % 4; 
  std::cout << var[RandIndex];




  
 

  
   // game loop
      while (lives > 0 && foundcharacters != var[RandIndex].length() ){
      // this states how many lives we have 
      std::cout << "You have  " << lives  << "  lives\n";
      std::cout << "Please enter in your character to see if it is in the list \n";
      std::string guess;
      std::cin >> guess;
        
      if(var[RandIndex].find(guess)<var[RandIndex].length()){ //to find +
        std::cout << "//////////////////////////////////////////////\n";
        std::cout << "Your guess was correct , True\n";
        std::cout << "//////////////////////////////////////////////\n";
        foundcharacters = foundcharacters +1;
    } else {
        std::cout << "//////////////////////////////////////////////\n";
        std::cout << "W R O NG , you lose a life";
        std::cout << "//////////////////////////////////////////////\n";
        lives=lives -1;
        
        
      }
   
  

  
    }
  
}

void optionABC(){ //allows  the user to chose from A B or C
  std::cout << "Please chose from \n A Easy \n B Medium \n C Hard \n";
  std::string ABC;
  std::cin >> ABC;

  if(ABC == "A" or "a"){
    easy();
  }else if(ABC == "B" or "b"){
    std::cout << "//////////////IN DEVELOPMENT !!!!//////////////\n";
  }else if(ABC == "c" or "C"){
    std::cout << "//////////////IN DEVELOPMENT !!!!//////////////\n";
    }
  
}

void menu(){  // This is our menu 
  std::cout << "\n Please chose from one of the bellow options \n 1) Start \n 2) Scores \n 3) Exit \n";
  std::string Vchoice; // definign our string varible
  std::cin >> Vchoice; // inserting Uinput into our input 

  if (Vchoice == "1"){
    optionABC();
  }else if(Vchoice == "2"){
    
  }else if(Vchoice == "3"){
    exit(3);
  }
  
}




int main() {
  std::cout << "Welcome to the Hang man game ";
  menu();
}
