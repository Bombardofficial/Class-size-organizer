#include <stdio.h>
#include <stdlib.h>


//Speicherungen
typedef struct School{

    struct Class* classList;

}School;


//Speicherungplatz
struct Class{

    int pupilcounter;
    int Klassenummer;
    char Klassbuch = 'A';
    struct school *next;

};


School *head;


//school ausdrucken
void printSchool(School classList){
    School *temp;
    temp=head;
    printf("\n\n");
    while(temp!=NULL){
        printf("%d%c - %d\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);
        printf("Total: %d pupils - %d class(es)\n", temp->pupilCounter, temp->classcounter);
        temp=temp->next;
        Klassbuch++;
    }
}


//year ausdrucken
void printYear(School classList){
    School *temp;
    temp=head;
    int summe;
    int yearfinder;
        if(yearfinder == 1){

            printf("%d%c - %d\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);
            printf("Total: %d pupils - %d class(es)\n", temp->pupilCounter, temp->classcounter);
        }
        else if(yearfinder == 2){

            printf("%d%c - %d\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);
            printf("Total: %d pupils - %d class(es)\n", temp->pupilCounter, temp->classcounter);
        }
        else if(yearfinder == 3){

            printf("%d%c - %d\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);
            printf("Total: %d pupils - %d class(es)\n", temp->pupilCounter, temp->classcounter);
        }
        else if(yearfinder == 4){

            printf("%d%c - %d\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);
            printf("Total: %d pupils - %d class(es)\n", temp->pupilCounter, temp->classcounter);
        }
    }


//class ausdrucken
void printClass(School classList){
    School *temp;
    temp=head;


        if(yearfinder = 1){
            printf("Class %d%c has %d pupils\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);

        }
        else if(yearfinder = 2){
            printf("Class %d%c has %d pupils\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);

        }
        else if(yearfinder = 3){
            printf("Class %d%c has %d pupils\n", temp->Klassenummer, temp->Klassbuch, temp->pupilcounter);

        }
        else if(yearfinder = 4){
            printf("Class %d%c has %d pupils\n", temp->Klassenummer, temp->Klassbuch , temp->pupilcounter);

        }
    }


//insert die Dateien
void insert(int x, int y){
    School *temp;
    temp = (School*)malloc(sizeof(School));
    if(!temp){
        return;
    }
    temp->a = x;
    temp->b = y;
    temp->next = head;
    head= temp;
}


//menu
char getMenu(){
    char result;
    printf("Choose action: school (s), year (y), class (c), new (n), exit (x): ");
    scanf(" %c", &result);
    while(result != 's' && result != 'y' && result != 'c' && result != 'n' && result != 'x'){
        printf("\nInvalid selection\n");
        return result;
    }
}


int main(School classList){
//deklalieren
    char school,year,Sclass,Snew,exit,result,classfinder;
    int n,x,y;
    int i;

    head = NULL;
    School *temp;

    int classcounter=0;
    int maxclass=26;
    char Klassbuch='A';
    //'A'+0='A','A'+1='B','A'+2='C','A'+3='D','A'+4='E','A'+5='F','A'+6='G','A'+7='H','A'+8='I','A'+9='J','A'+10='K',
    //'A'+11='L','A'+12='M','A'+13='N','A'+14='O','A'+15='P','A'+16='Q','A'+17='R','A'+18='S','A'+19='T','A'+20='U',
    //'A'+21='V','A'+22='W','A'+23='X','A'+24='Y','A'+25='Z';

    Klassbuch+0='A',Klassbuch+1='B',Klassbuch+2='C',Klassbuch+3='D',Klassbuch+4='E',Klassbuch+5='F',Klassbuch+6='G',Klassbuch+7='H',Klassbuch+8='I',Klassbuch+9='J',Klassbuch+10='K',
    Klassbuch+11='L',Klassbuch+12='M',Klassbuch+13='N',Klassbuch+14='O',Klassbuch+15='P',Klassbuch+16='Q',Klassbuch+17='R',Klassbuch+18='S',Klassbuch+19='T',Klassbuch+20='U',
    Klassbuch+21='V',Klassbuch+22='W',Klassbuch+23='X',Klassbuch+24='Y',Klassbuch+25='Z';
    
    
//menu rufen
    char switchmode = 'a';
    while(switchmode != 'x'){
        switchmode = getMenu();

//Falle
    switch(switchmode){

    case('s'):

        if(classcounter == 0){
            printf("School: no classes");
        }
        else{
            printSchool();
        }

        break;


    case('y'):
        int yearfinder;
        if(classcounter == 0){
            printf("School: no classes");
        }
        else if(classcounter > 0){
            printf("Enter a year (1-4): ");
            scanf("%d", &yearfinder);
            printYear();
        }
        break;

    case('c'):
        if(classcounter == 0){
            printf("School: no classes");
        }
        else if(classcounter > 0){
            printf("Enter a class (e.g.: 2B): ");
            scanf("%d%c", &Klassenummer, &Klassbuch);
            printClass();
        }
        break;

    case('n'):
        classcounter++;
        for(i=0; i < maxclass; i++){
            if(i < maxclass){
                int schulerinnum;
                printf("\nEnter the number of students: ");
                scanf(" %d", &schulerinnum);
//sortieren
                if(schulerinnum < 15){
                    printf("\nNot enough students");
                    return result;
                }
                else if(schulerinnum > 780 && schulerinnum < 0){
                    printf("\nInvalid selection\n");
                    return result;
                }
                else if(schulerinnum >= 15 && schulerinnum <= 780){
                    pupilcounter = schulerinnum;
                    if(schulerinnum >=15 && schulerinnum <= 30){

                        x = schulerinnum;

                    }
                    else if(schulerinnum > 30 && schulerinnum < 40){
                        x = (schulerinnum / 2);
                        y = (schulerinnum / 2);


                    }
                    else if(schulerinnum >= 40){
                        if((schulerinnum / 2) >= 20 && (schulerinnum / 2) <= 30){
                            x = (schulerinnum / 2);
                            y = (schulerinnum / 2);
                        }
                        else if((schulerinnum / 3) >= 20 && (schulerinnum / 3) <= 30){
                            x = (schulerinnum / 3);
                            y = (schulerinnum / 3);
                            ? = (schulerinnum / 3);

                        }
                        else{
                            x = (schulerinnum / 4);
                            y = (schulerinnum / 4);
                            ? = (schulerinnum / 4);
                            ?? = (schulerinnum / 4);

                            }
                    }
                    insert(x,y);
                }
            else if(i > maxclass){
                printf("Zu viele Class");
            }

            }

        }
        break;

    case('x'):
        exit;
        return 0;

    }

    }

    return 0;
}

//nur Code falls es nutzbar sein kann
 /*int ersteN[25],zweiteN[25],dritteN[25],vierteN[25];
    char ersteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char zweiteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char dritteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char vierteL[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};*/
