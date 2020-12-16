#include <stdio.h>
#include <stdlib.h>


struct School{

    struct class* classList;


};

struct Class{

    int pupilCounter;


};


void printSchool(struct School* prints){
    int classcounter;
    if(classcounter == 0){
        printf("School: no classes");
    }
    else if(classcounter > 0){

    }

}







struct Node {
    int datei;
    struct Node* next;
};


char getMenu(){
    char result;
    printf("Choose action: school (s), year (y), class (c), new (n), exit (x): ");
    scanf(" %c", &result);
    while(result != 's' && result != 'y' && result != 'c' && result != 'n' && result != 'x'){
        printf("\nInvalid selection\n");
        return result;
    }
}


int main(){
    char school,year,Sclass,Snew,exit,result,classfinder;
    int classcounter=0,maxschuler,schulernum,yearfinder;
    int maxclass=26;
    struct Node * erste = NULL;
    struct Node * zweite = NULL;
    struct Node * dritte = NULL;
    struct Node * vierte = NULL;
    erste = (struct Node*)malloc(sizeof(struct Node));
    zweite = (struct Node*)malloc(sizeof(struct Node));
    dritte = (struct Node*)malloc(sizeof(struct Node));
    vierte = (struct Node*)malloc(sizeof(struct Node));


    char switchmode = 'a';
    while(switchmode != 'x'){
        switchmode = getMenu();
    struct Node * classList = erste;

    switch(switchmode){

    case('s'):
        school=result;
        printf("%d\n",school);

        break;


    case('y'):
        year=result;
        printf("%d\n",year);

        break;

    case('c'):
        Sclass=result;


        printf("%d\n",Sclass);

        break;

    case('n'):
        Snew=result;
        classcounter++;
        for(int i; i <= maxclass; i++){
            if(i <= maxclass){
                  int schulerinnum;
                printf("\nEnter the number of students: ");
                scanf("%d", &schulerinnum);

                classList->datei=schulerinnum;



                if(schulerinnum < 15){
                    printf("\nNot enough students");
                    return 0;
                }
                else if(schulerinnum > 780){
                    printf("\nInvalid selection\n");
                    return result;
                }
                else if(schulerinnum >= 15 && schulerinnum <= 780){
                    int Pupilcounter = schulerinnum;
                    if(schulerinnum >=15 && schulerinnum <= 30){
                        erste->datei = schulerinnum;
                        erste->next=zweite;
                    }
                else if(schulerinnum > 30 && schulerinnum < 40){
                    erste->datei = (schulerinnum / 2);
                    zweite->datei = (schulerinnum / 2);
                    zweite->next = dritte;
                    erste->next = zweite;

                }
                else if(schulerinnum >= 40){
                    if((schulerinnum / 2) >= 20 && (schulerinnum / 2) <= 30){
                        erste->datei = (schulerinnum / 2);
                        zweite->datei = (schulerinnum / 2);
                        zweite->next = dritte;
                        erste->next = zweite;
                    }
                    else if((schulerinnum / 3) >= 20 && (schulerinnum / 3) <= 30){
                        erste->datei = (schulerinnum / 3);
                        zweite->datei = (schulerinnum / 3);
                        dritte->datei = (schulerinnum / 3);
                        dritte->next = vierte;
                        zweite->next = dritte;
                        erste->next = zweite;
                    }
                    else{
                        erste->datei = (schulerinnum / 4);
                        zweite->datei = (schulerinnum / 4);
                        dritte->datei = (schulerinnum / 4);
                        vierte->datei = (schulerinnum / 4);
                        vierte->next = NULL;
                        dritte->next = vierte;
                        zweite->next = dritte;
                        erste->next = zweite;
                    }
                }
                else if(i > maxclass){
                    printf("Zu viele Class");
                }
        }

        break;
            }
        }
    case('x'):
        exit;
        return 0;

    }

    }

    return 0;
}

