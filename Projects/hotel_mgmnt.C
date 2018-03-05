#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void management_login()  // USERNAME AND PASWORD PROTECTION
{   int i,c=0,c_=3; // counter variables
    char username_sys[]="manav";  // User-name stored in system
    char passcode_sys[]="verma";  //Password stored in system
    char uname[10],pcode[10];    // User-name and Password to be entered
    int len_u_sys=strlen(username_sys); // STRINGLEGTH of stored User-name
    int len_p_sys=strlen(passcode_sys); // STRINGLEGTH of stored Pass-code

    printf("\n");
    printf("\t\t          PLEASE LOGIN TO CONTINUE            \n");

    fflush(stdin); // CLEARING THE BUFFER
    enter_again2: printf("\n\t only %d chances left \n",c_);
    printf("\n\t Enter User-name . . ");
    gets(uname);
    int len_uname=strlen(uname);  // STRINGLEGTH of USERNAME INPUT
    printf("\t Enter Pass-code . . \n");
    fflush(stdin);  // CLEARING THE BUFFER
    gets(pcode);
    int len_pcode=strlen(pcode); // STRINGLEGTH of PASS-CODE INPUT
    if((len_u_sys!=len_uname)||(len_p_sys!=len_pcode)||(strcmp(username_sys,uname)!=0)||(strcmp(passcode_sys,pcode)!=0))
    {   c++;
        c_--;
        printf("\t EROOR : USERNAME OR PASSWORD MISMATCH. . \n");
        if(c==3)
        {   printf("\n\t\t WARNING ! You Have Entered Invalid User-name or Pass-word 3 times..\n");
            printf("\t\t Terminating Program . .\n");
            getch();
            exit(0); // terminates the program
        }
        else
        {    goto enter_again2;  }
    }
    else
    {   printf("\t\t           LOGIN SUCCESSFUL            \n");
        printf("\t\t       WELCOME , AUTHORIZED PERSONNEL          \n");
        printf("\t Press any  key to continue \n");
        getch();
        system("cls");

    }

}

int rooms[10];
struct hotel
{   int room_no;
    char name[20];
    int age;
    int members;
    char mobile_num[15];
    char address[30];
    char nationality[15];
    char aadhaar[12];
    struct date
    {   int dd,mm,yy;
    }d_o_arrival;  //Arrival date
    int duration; //Duration of stay
    struct room_service
    {   char item;
        float price;
    }room_ser;       // to store details of room service
    float ser_bill; //Room Service Bill
    float stay_bill;  //Hotel Room Bill
}obj[10];
int main()
{   int i,ch,ch1,ch2;



    printf(" -----------------------------------------------------------------------------\n");
	printf("|                                                                            |\n");
	printf("|                                                                            |\n");
	printf("| ######   ######  ######  ######  ######  ######  #      #  ######   ###### |\n");
	printf("| #        #    #  #       #         #       #     # #    #  #        #      |\n");
	printf("| #  ####  ######  #####   #####     #       #     #  #   #  #  ####  ###### |\n");
	printf("| #    #   #  #    #       #         #       #     #   #  #  #    #        # |\n");
	printf("| ######   #   #   ######  ######    #     ######  #    # #  ######   ###### |\n");
	printf("|                                                                            |\n");
	printf(" -----------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*           WELCOME TO HOTEL ABC                *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                 AREA                          *\n");
	printf("\t\t*                  CITY                         *\n");
	printf("\t\t*      C0NTACT US:00000000000,1111111111        *\n");
	printf("\t\t*************************************************\n\n\n");

	for(i=0;i<5;i++)
    {printf("\n");
    }
    printf("\t\t             DOMAINS AVAILIBLE                   \n");
    printf("\n");
    printf("\t 1. MANAGEMENT                                   \n");
    printf("\t 2. CUSTOMER                                     \n");
    printf("\t Please enter your choice (1 or 2 ONLY) . .      \n");
    printf("\n\n");

    enter_again1: scanf(" %d",&ch);
    if(!((ch==1)||(ch==2)))
    {   printf("\t ERROR : UNKONOWN VALUE - - -  \t");
        printf("\t Please Enter Again\n");
        goto enter_again1;
    }

    if(ch==2)  // NAVIGATING TO CUSTOMER DOMAIN
    {   printf("\t\t        WELCOME CUSTOMER         \n");
        printf("\t\t              MENU               \n");
        printf("\t 1. See Availability of Rooms      \n");
        printf("\t 2. See All Hotel Facilities       \n");
        printf("\n");
        printf("\t\t Please enter your choice . . .  \n");
        scanf("%d",&ch2);
        switch(ch2)
        {   case 1 :printf("\t\t MAYUR GAUR");
                    getch();
                    break;
            case 2 :printf("\t\t MAYUR GAUR");
                    getch();
                    break;
            default :printf("\t\t WRONG CHOICE\n");
                     printf("\t\t Press Any Key To Exit");
                     getch();
                    break;
        }
    }
    else  // NAVIGATING TO MANAGEMENT DOMAIN
    {   management_login();
        printf("\n\n\t\t         MANGEMENT DOMAIN           \n");
        printf("\t\t    - To be Operated by Authorized Personnel Only         \n");
        printf("\n");
        printf("\t\t              MENU                     \n");
        printf("\t 1. Check - In                           \n");
        printf("\t 2. Check - Out                          \n");
        printf("\t 3. Bill - Generation                    \n");
        printf("\t 4. Check Availability of Rooms          \n");
        printf("\t 5. See Details All Rooms                \n");
        printf("\t 6. Room Service Record ( for billing )   \n");
        printf("\n");
        printf("\t Please enter your choice . . .     \n");
        scanf("%d",&ch1);
        switch(ch1)
        {   case 1 :printf("\t\t MANAV");
                    getch();
                    break;
            case 2 :printf("\t\t ROHAN");
                    getch();
                    break;
            case 3 :printf("\t\t SACHIN");
                    getch();
                    break;
            case 4 :printf("\t\t MAYUR");
                    getch();
                    break;
            case 5 :printf("\t\t ROHAN");
                    getch();
                    break;
            case 6 :printf("\t\t MANAV");
                    getch();
                    break;
            default :printf("\t\t WRONG CHOICE\n");
                     printf("\t\t Press Any Key To Exit");
                     getch();
                    break;
        } // END OF switch --------------------------------------

    } // END OF else ------------------------------

        getch();



    }

