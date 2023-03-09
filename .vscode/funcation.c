# include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    goodmorning();
    
    // goodafternoon();
    // goodnight();

    return 0;
 }  
 
void goodmorning(){
        printf("Good morning Dilip\n");
         goodafternoon();
         goodnight();
    
    }
void goodafternoon(){
        printf("Good afternoon Dilip\n");
       
    }
void goodnight(){
        printf("Good night Dilip\n");
    }
