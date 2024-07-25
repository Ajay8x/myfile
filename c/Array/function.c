
    #include <stdio.h>

    void ok(char name[], int *age) {
        printf("\n Enter your Name: ");
        scanf("%s", name);
        printf("\n Enter your  age: ");
        scanf(" %d",age);
    }

    int main() {
        char name[50]; 
        int age;
        
        ok(name, &age);
        printf("Name: %s\nAge: %d\n", name, age);
        
        return 0;
    }