#include <stdio.h>


void america();
void India();
void srilanka();

int main() {
    printf("\nI am in main");
    
    america();
    srilanka();
    India();
    america();
    India();
    srilanka();
    
    printf("\nI am in main again");
    
    
    
    
}


void america() {
    printf("\nI am in America");
}

void India() {
    printf("\nI am in India");
}

void srilanka() {
    printf("\nI am in Sri Lanka");
}