#include <stdio.h>
#include <stdlib.h>


struct School{

    struct class* classList;


};

struct Class{

    int pupilCounter;


};


void printSchool(struct School* printS){
    int classcounter;
    if(classcounter == 0){
        printf("School: no classes");
    }
    else if(classcounter > 0){

    }

}


void printYear(struct school* printY){
int yearfinder;
    if(maxclass == 0){
        printf("School: no classes");
    }
    else if(maxclass > 0){
        printf("Enter a year (1-4): ");
        scanf("%d", &yearfinder);
        if(yearfinder = 1){
            erste=yearfinder;
            printf("%d%c - %d\n", yearfinder, classfinder, schulernum);
            printf("Total: %d pupils - %d class(es)\n", pupilCounter, classcounter);
        }
        else if(yearfinder = 2){
            zweite=yearfinder;
            printf("%d%c - %d\n", yearfinder, classfinder, schulernum);
            printf("Total: %d pupils - %d class(es)\n", pupilCounter, classcounter);
        }
        else if(yearfinder = 3){
            dritte=yearfinder;
            printf("%d%c - %d\n", yearfinder, classfinder, schulernum);
            printf("Total: %d pupils - %d class(es)\n", pupilCounter, classcounter);
        }
        else if(yearfinder = 4){
            vierte=yearfinder;
            printf("%d%c - %d\n", yearfinder, classfinder, schulernum);
            printf("Total: %d pupils - %d class(es)\n", pupilCounter, classcounter);
        }
    }
}

void printClass(struct School* printC ){

    if(maxclass == 0){
        printf("School: no classes");
    }
    else if(maxclass > 0){
        int yearfinder,classfinder, schulernum;
        printf("Enter a class (e.g.: 2B): \n");
        scanf("%d%c", &yearfinder, &classfinder);
        if(yearfinder = 1){
            printf("Class %d%c has %d pupils\n", yearfinder, classfinder, schulernum);

        }
        else if(yearfinder = 2){
            printf("Class %d%c has %d pupils\n", yearfinder, classfinder, schulernum);

        }
        else if(yearfinder = 3){
            printf("Class %d%c has %d pupils\n", yearfinder, classfinder, schulernum);

        }
        else if(yearfinder = 4){
            printf("Class %d%c has %d pupils\n", yearfinder, classfinder, schulernum);

        }
    }



}


struct Node {
    int datei ;
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
    int ersteN[25],zweiteN[25],dritteN[25],vierteN[25];
    char ersteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char zweiteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char dritteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char vierteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

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
        printSchool(struct School * printS);

        break;


    case('y'):
        year=result;
        printYear(struct School * printY);

        break;

    case('c'):
        Sclass=result;
        printClass(struct School * printC);

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

                        ersteN[0] = schulerinnum;
                        erste->datei = ersteN[0], ersteL[0];
                        erste->next=zweite;
                    }
                else if(schulerinnum > 30 && schulerinnum < 40){
                    ersteN[0] = (schulerinnum / 2);
                    zweiteN[0] = (schulerinnum / 2);
                    erste->datei = ersteN[0], ersteL[0];
                    zweite->datei = zweiteN[0], zweiteL[0];
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



