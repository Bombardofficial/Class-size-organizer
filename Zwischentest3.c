#include <stdio.h>
#include <stdlib.h>
struct School{

    struct class* classList;


};
struct Year{

};
struct Class{

    int pupilCounter;


};

struct Nodelist{
    int datei;
    struct Nodelist* next;
};

void printSchool(struct school*){

    if(maxclass == 0){
        printf("School: no classes");
    }
    else if(maxclass > 0){

    }

}



void printYear(struct school*){

    if(maxclass == 0){
        printf("School: no classes");
    }
    else if(maxclass > 0){
        printf("Enter a year (1-4): ");
        scanf("%d", &yearfinder);
        if(yearfinder = 1){
            erste=yearfinder;
        }
        else if(yearfinder = 2){
            zweite=yearfinder;
        }
        else if(yearfinder = 3){
            dritte=yearfinder;
        }
        else if(yearfinder = 4){
            vierte=yearfinder;
        }
    }
}


//
void printClass(struct school*){

    if(maxclass == 0){
        printf("School: no classes");
    }
    else if(maxclass > 0){
        printf("Enter a class (e.g.: 2B): ");
        scanf("%d%c", &yearfinder, &classfinder);
        if(yearfinder = 1){
            erste=yearfinder;
        }
        else if(yearfinder = 2){
            zweite=yearfinder;
        }
        else if(yearfinder = 3){
            dritte=yearfinder;
        }
        else if(yearfinder = 4){
            vierte=yearfinder;
        }
    }



}





int main(){
    char school,year,Sclass,Snew,exit,result;
    int classcounter;
    int maxschuler;
    int maxclass=0;
    int schulernum;
    int schulerinnum;
    int yearfinder;
    char classfinder;
    int classList[25][3];
    struct Node* erste = NULL;
    struct Node* zweite = NULL;
    struct Node* dritte = NULL;
    struct Node* vierte = NULL;

    erste = (struct Nodelist*)malloc(sizeof(struct Nodelist));
    zweite = (struct Nodelist*)malloc(sizeof(struct Nodelist));
    dritte = (struct Nodelist*)malloc(sizeof(struct Nodelist));
    vierte = (struct Nodelist*)malloc(sizeof(struct Nodelist));



    printf("Choose action: school (s), year (y), class (c), new (n), exit (x): ");
    switch(result){

    case('s'):
        result=school;
        printSchool();


    case('y'):
        result=year;
        printYear();
    case('c'):
        result=Sclass;
        classcounter++;
        maxclass++;
        printClass();

    case('n'):
        result=Snew;
        printf("Enter the number of students: ");
        scanf("%d", &schulerinnum);
        if(schulerinnum < 15){
            printf("Not enough students");
            return result;
        }
        else if(schulerinnum >= 15 && schulerinnum <= 780){
            int Pupilcounter = schulerinnum;
            if(schulerinnum >=15 && schulerinnum <= 30){
                schulerinnum = classList[0][0];
            }
            else if(schulerinnum > 30 && schulerinnum < 40){
                (schulerinnum / 2) = classList[0][0];
                (schulerinnum / 2) = classList[0][1];
            }
            else if(schulerinnum >= 40){
                if((schulerinnum / 2) >= 20 && (schulerinnum / 2) <= 30){
                    (schulerinnum / 2) = classList[0][0];
                    (schulerinnum / 2) = classList[0][1];
                }
                else if((schulerinnum / 3) >= 20 && (schulerinnum / 3) <= 30){
                    (schulerinnum / 3) = classList[0][0];
                    (schulerinnum / 3) = classList[0][1];
                    (schulerinnum / 3) = classList[0][2];
                }
                else{
                    (schulerinnum / 4) = classList[0][0];
                    (schulerinnum / 4) = classList[0][1];
                    (schulerinnum / 4) = classList[0][2];
                    (schulerinnum / 4) = classList[0][3];
                }
            }
        }
    case('x'):
        exit;
    default:
        printf("Invalid selection");
        return result;
    }

    if(maxclass==4){
        erste->datei=1;
        erste->next=zweite;

        zweite->datei=2;
        zweite->next=dritte;

        dritte->datei=3;
        dritte->next=vierte;

        vierte->datei=4;
        vierte->next=NULL;
    }





    return 0;
}
