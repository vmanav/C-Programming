#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void settingrooms(int *rooms);
void check_in(int *rooms);
void availability(int *rooms);
void check_details_particular();
void display_all();
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
    enter_again2: printf("\n\t only %d chances left\n",c_);
    printf("\n\t Enter User-name -\t");
    gets(uname);
    int len_uname=strlen(uname);  // STRINGLEGTH of USERNAME INPUT
    printf("\t Enter Pass-code -\t");
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
    char mobile_num[15];
    char address[30];
    char nationality[15];
    char aadhaar[12];
    struct date
    {   int dd,mm,yy;
    }d_o_a;  //Arrival date
    int duration; //Duration of stay
}obj;
int main()
{   int i,ch,ch1,ch2;
    char mg,cus,mgch;

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
	printf("\t\t*         -----------------------------         *\n");
	printf("\t\t*              WELCOME TO HOTEL ABC             *\n");
	printf("\t\t*         -----------------------------         *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                   AREA                        *\n");
	printf("\t\t*                   CITY                        *\n");
	printf("\t\t*      C0NTACT US:00000000000,1111111111        *\n");
	printf("\t\t*************************************************\n");
    settingrooms(rooms);
	for(i=0;i<2;i++)
    {printf("\n");
    }
    printf("\t\t             DOMAINS AVAILIBLE                   \n");
    printf("\n");
    printf("\t 1. MANAGEMENT                                   \n");
    printf("\t 2. CUSTOMER                                     \n");
    printf("\t Please enter your choice (1 or 2 ONLY) . .\t");
    enter_again1: scanf(" %d",&ch);
    if(!((ch==1)||(ch==2)))
    {   printf("\t ERROR : UNKONOWN VALUE - - -  \t");
        printf("\t Please Enter Again\n");
        goto enter_again1;
    }

    if(ch==2)  // NAVIGATING TO CUSTOMER DOMAIN
    {   system("cls");
        printf("\t\t        WELCOME CUSTOMER         \n");
        printf("\t\t              MENU               \n");
        printf("\t 1. See Availability of Rooms      \n");
        printf("\t 2. See All Hotel Facilities       \n");
        printf("\t 3. Exit                 \n");
        printf("\n");
        customer_dom: printf("\t\t Please enter your choice -\t");
        enterch2: scanf("%d",&ch2);
        switch(ch2)
        {   case 1 :availability(rooms);
                    getch();
                    break;
            case 2 :printf("\t\t MAYUR GAUR");
                    getch();
                    break;
            case 3 :exit(0);
            default :printf("\t\t\t WRONG CHOICE\n");
                     printf("\tEnter Again");
                     goto enterch2;

                    break;
        }
        printf("\n\tDo you want to go back customer menu ? (y/Y)\t");
        fflush(stdin);
        scanf("%c",&cus);
        if((cus=='y')||(cus=='Y'))
        {   goto customer_dom;
        }

        printf("\n\tWant to go to Management domain ? (y/Y)\t");
        fflush(stdin);
        scanf("%c",&mgch);
        if((mgch=='y')||(mgch=='Y'))
        {   goto mgch_dom;
        }
    }
    else  // NAVIGATING TO MANAGEMENT DOMAIN
    {   mgch_dom : management_login();
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
        printf("\t 7. See Details of a Particular Room   \n");
        printf("\t 8. Exit                 \n");
        printf("\n");
        management_dom: printf("\t Please enter your choice -\t");
        enterch1: scanf("%d",&ch1);
        switch(ch1)
        {   case 1 :printf("\t\t MANAV");
                    check_in(rooms);
                    getch();
                    break;
            case 2 :printf("\t\t ROHAN");
                    getch();
                    break;
            case 3 :printf("\t\t SACHIN");
                    getch();
                    break;
            case 4 :availability(rooms);
                    getch();
                    break;
            case 5 :display_all();
                    break;
            case 6 :printf("\t\t MAYUR");
                    getch();
                    break;
            case 7 :check_details_particular();
                    break;
            case 8 :exit(0);
                    printf("\n\t TERMINATING PROGRAM");
                    getch();
                    break;
            default :printf("\t\t\tWRONG CHOICE\n");
                     printf("\tEnter Again");
                     goto enterch1;
                    break;
        } // END OF switch --------------------------------------
        printf("\n\tDo you want to go back to management menu ? (y/Y)\t");
        fflush(stdin);
        scanf("%c",&mg);
        if((mg=='y')||(mg=='Y'))
        {   goto management_dom;
        }

    } // END OF else -------------------


}



void settingrooms(int *rooms)
{   //printf("\n\tFUNCTION STARTS\n");
    int i;
    for(i=0;i<10;i++)
    {   rooms[i]=0; // Setting All entries for Rooms equal to '0' in the beginning
    }
    //printf("\tRoom Status :\n");
    /*for(i=0;i<10;i++)
    {   printf("Room-%d\t",i);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {   printf("%d\t",rooms[i]);
    }
    */
     // SCREEN PAUSE
    //Now i will open the already existing files and place a '1' on those indexes(representing room numbers)
    //All those '1' will represent already booked and '0' will give available ones
    //this will be further used in checking the availability for the rooms
    FILE*fp; // initializing file pointer
    fp=fopen("projectN.txt","r");
    if(fp==NULL)
    {   printf("\n\t ERROR \n");
        getch(); // SCREEN PAUSE
        //exit(0);
    }

    while(fscanf(fp,"\n%d %s %d %s %s %s %s %d %d %d %d",&obj.room_no,obj.name,&obj.age,obj.mobile_num,obj.address,obj.nationality,obj.aadhaar,&obj.d_o_a.dd,&obj.d_o_a.mm,&obj.d_o_a.yy,&obj.duration)!=EOF)
    {   //printf("%d",obj.room_no);
        for(i=0;i<10;i++)
        {   if(obj.room_no==i)
            {   rooms[i]=1;
            }
        }

    }
    /*printf("\n\t UPDATED ROOM STATUS:\n");
    getch(); //SCREEN PAUSE
    printf("\n Room Status :\n");
    for(i=0;i<10;i++)
    {   printf("Room-%d\t",i);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {   printf("%d\t",rooms[i]);
    }
    printf("\n\tFUNCTION ENDS\n");*/
    printf("\n\t\tPlease wait while the database is loading");
    printf("\n\t\tPress any key to continue");
    getch();
    fclose(fp);

}



void check_in(int *rooms)
{   int R,ca=0,cm=0,m,la,lm,i=1,k=0,n; // R-temp variable for rooms
    char ch3; //choice 3
    struct hotel obj;
    FILE *fa;
    printf("\t Enter Number of Rooms Required Rooms'n' ( MAX- 10 )\n");
    scanf("%d",&n);
    fa=fopen("projectN.txt","w");
    if(fa==NULL)
    {   printf("\n\t ERROR");
        exit(0);
    }

    while(i<=n)
    {   printf("\tDetails Of Room : %d \n",i);
        printf("\nGenerating Your Room number. .");
        generate_random:    obj.room_no=rand()%10;// FORMULA EXPLAINED IN PROJECT
        R=obj.room_no;
        if(rooms[R]==1)
        {   goto   generate_random;
        }
        rooms[R]=1;
        fflush(stdin);
        //printf("Enter Room Number ");
        //scanf("%d",&obj.room_no);
        printf("Room Number : %d ",obj.room_no);
        fflush(stdin);
        printf("\nEnter Name ");
        gets(obj.name);
        printf("Name : %s",obj.name);
        printf("\nEnter Age ");
        scanf("%d",&obj.age);
        printf("Age : %d",obj.age);
        printf("\nEnter Mobile Number ");
        enter_mobile:
        scanf("%s",obj.mobile_num);
//      SPECIAL BLOCK TO CHECK VALIDITY OF MOBILE NUMBER
        lm=strlen(obj.mobile_num); // mobile number length
        if(lm!=10)
        {   printf("\t\t INVALID - Please Enter Again  : ");
            goto enter_mobile;
        }
        else
        {
            for(k=0;k<lm;k++) // counter-k
            {   if(isdigit(obj.mobile_num[k])==0)
                {   printf("\t\t INVALID - Please Enter Again  : ");
                    cm=1;
                }
            }
            if(cm==1)
            {   cm=0;
                goto enter_mobile;
            }
        }
        printf("Mobile Number  : %s",obj.mobile_num);
        fflush(stdin);
        printf("\nEnter Your Address ");
        gets(obj.address);
        printf("Address : ");
        puts(obj.address);
        fflush(stdin);
        printf("Enter Your Nationality ");
        scanf("%s",obj.nationality);
        printf("Nationality : %s",obj.nationality);
        fflush(stdin);
        printf("\nEnter Your Aadhaar Number (12-digit w/o spaces)  ");
        enter_aadhar:
        scanf("%s",obj.aadhaar);
        fflush(stdin);
//      SPECIAL BLOCK TO CHECK VALIDITY OF AADHAR NUMBER
        la=strlen(obj.aadhaar);  // Aadhaar length
        if(la!=12)
        {   printf("\tINVALID - Please Enter Again  : ");
            goto enter_aadhar;
        }
        else
        {   for(m=0;m<la;m++) // counter-m
            {   if(isdigit(obj.aadhaar[m])==0)
                {   printf("\tINVALID - Please Enter Again  :");
                    ca=1;
                }
            }
            if(ca==1)
            {   ca=0;
                goto enter_aadhar;
            }
        }
        printf("Aadhar Number : %s",obj.aadhaar);
        printf("\nEnter date-of-arrival ");
        scanf("%d/%d/%d",&obj.d_o_a.dd,&obj.d_o_a.mm,&obj.d_o_a.yy);
        printf("Date-of-Arrival : %d/%d/%d",obj.d_o_a.dd,obj.d_o_a.mm,obj.d_o_a.yy);
        fflush(stdin);
        printf("\nEnter Your Duration of Stay ");
        scanf("%d",&obj.duration);
        printf("Duration of Stay : %d",obj.duration);
        fflush(stdin);
        fprintf(fa,"\n%d %s %d %s %s %s %s %d %d %d %d",obj.room_no,obj.name,obj.age,obj.mobile_num,obj.address,obj.nationality,obj.aadhaar,obj.d_o_a.dd,obj.d_o_a.mm,obj.d_o_a.yy,obj.duration);
        printf("\n\tDetails Of Room %d Recorded.\n",i);
        i++;
        fflush(stdin);
        while(i<=n)
        {
        printf("Do You want to keep the same details for the next room ? Enter Choice ( Y or N)");
        scanf("%c",&ch3);
        fflush(stdin);
        if((ch3=='y')||(ch3=='Y'))
        {   // RANDOM ROOM NO> MUST BE GENRATED AGAIN
            generate_random1:    obj.room_no=rand()%10;// FORMULA EXPLAINED IN PROJECT
            R=obj.room_no;
            if(rooms[R]==1)
            {       goto   generate_random1;
            }
            rooms[R]=1;
            printf("\tYour Assigned Room Number : %d",obj.room_no);
            printf("\n\tSame Details being written for the next room..");
            //fwrite(&obj,sizeof(obj),1,fa);
            fprintf(fa,"\n%d %s %d %s %s %s %s %d %d %d %d",obj.room_no,obj.name,obj.age,obj.mobile_num,obj.address,obj.nationality,obj.aadhaar,obj.d_o_a.dd,obj.d_o_a.mm,obj.d_o_a.yy,obj.duration);
            printf("\n\tDetails Of %d  Room Recorded.\n",i);
            i++;

        }

        }
    }
    fclose(fa);

}
void availability(int *rooms)
{   int i ;
    printf("\n\t\t\t ROOM STATUS:\n");
    for(i=0;i<10;i++)
    {   printf("Room-%d\t",i);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {   printf("%d\t",rooms[i]);
    }
    printf("\n\n\t1 - Occupied \t\t 0 - Available");
}
void check_details_particular()
{
    struct hotel obj;
    int found = 0, rno;
    FILE *fa;
    fa = fopen("projectN.txt", "r");
    if(fa == NULL)
    {
        printf("\n\t Error in Opening file");
        exit(0);
    }
    printf("\nEnter the room number -\t");
    scanf("%d",&rno);
    while(fscanf(fa,"\n%d %s %d %s %s %s %s %d %d %d %d",&obj.room_no,obj.name,&obj.age,obj.mobile_num,obj.address,obj.nationality,obj.aadhaar,&obj.d_o_a.dd,&obj.d_o_a.mm,&obj.d_o_a.yy,&obj.duration)!=EOF)
    {   if(obj.room_no == rno)
        {
            found =1;
            printf("\n\t\tDETAILS OF REQUIRED ROOM\n");
            printf("\nRoom Number : %d",obj.room_no);
            printf("\nName : %s",obj.name);
            printf("\nAge : %d",obj.age);
            printf("\nMobile number  : %s",obj.mobile_num);
            printf("\nAddress: %s",obj.address);
            printf("\nNationality : %s",obj.nationality);
            printf("\nAadhar : %s",obj.aadhaar);
            printf("\nDate of Arrival : %d/%d/%d",obj.d_o_a.dd,obj.d_o_a.mm,obj.d_o_a.yy);
            printf("\nDuration of stay : %d",obj.duration);
            printf("\n");
        }
    }
    if(found==0)
    {   printf("\n\tData not found\t!");
    }
    fclose(fa);
    getch();
}
void display_all()
{
    struct hotel obj;
    int found =0 , rno;
    FILE *fb;
    fb = fopen("projectN.txt", "r");
    if(fb == NULL)
    {
        printf("\n\t Error ");
        exit(0);
    }
    printf("\n\t\t\t-:\tDETAILS      :-\n");
    while(fscanf(fb,"\n%d %s %d %s %s %s %s %d %d %d %d",&obj.room_no,obj.name,&obj.age,obj.mobile_num,obj.address,obj.nationality,obj.aadhaar,&obj.d_o_a.dd,&obj.d_o_a.mm,&obj.d_o_a.yy,&obj.duration)!=EOF)
    {       found =1;
            printf("\nRoom Number : %d",obj.room_no);
            printf("\nName : %s",obj.name);
            printf("\nAge : %d",obj.age);
            printf("\nMobile number  : %s",obj.mobile_num);
            printf("\nAddress: %s",obj.address);
            printf("\nNationality : %s",obj.nationality);
            printf("\nAadhar : %s",obj.aadhaar);
            printf("\nDate of Arrival : %d/%d/%d",obj.d_o_a.dd,obj.d_o_a.mm,obj.d_o_a.yy);
            printf("\nDuration of stay : %d",obj.duration);
            printf("\n\n");
    }
    if(found==1)
    {   printf("\t\t\t--- END OF FILE ---");
    }
    if(found==0)
    {   printf("\nNo Data in file");
    }
    fclose(fb);
    getch();
}
