#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#include <ctype.h>
#include "easy.h"
#include "hard.h"
#include "computer.h"
#define MAX 30
#include <windows.h>
char bread[5][6]={""};
char bread_hard[9][10]={""};
char array_of_name[MAX]={""};
char array_of_inputs[MAX];
struct{
    char str[100];
    int score;
    int moves;
}player_1,player_2,Computer;
typedef struct{
    char name[40];
    int score;
}list_rank;
char rank_name[100];
//function to register ranks of top 10 players

void rank(int s,char n[])
{int i;int q=0;

    strcpy(rank_name,n);
    list_rank store[10];

// to read file of rank
        FILE *Rank;
        Rank=fopen("rank.txt","r");
        for(i=0;i<10;i++){
        fscanf(Rank,"%s : %d",&store[i].name,&store[i].score);

         }
        fclose(Rank);
        //to check if player name is exit before or not
for(i=0;i<10;i++){
    if(strcmp(n,store[i].name)==0){
       strcpy(store[i].name,"player");
       store[i].score=0;

    }
}
//to compare player name with other names in rank if player name is not exit before
  int c;
    char m[20];

  for(i=0;i<10;i++){

    if(s>store[i].score)
    {
        c=store[i].score;
        store[i].score=s;
        s=c;
        strcpy(m,store[i].name);
        strcpy(store[i].name,n);
        strcpy(n,m);}
  }
  //to rewrite rank with new updates
   FILE *Rank1;
        Rank1=fopen("rank.txt","w");
        for(i=0;i<10;i++){
        fprintf(Rank1,"%s : %d\n",store[i].name,store[i].score);}
        fclose(Rank1);


}
//function to print ranks of top 10 players
void print_rank()
{
    int i;
    list_rank store[10];
    FILE *Rank;
        Rank=fopen("rank.txt","r");
        printf("\n\n\t\t\t\t\tTOP 10 PLAYERS\n\n\n\n");
        for(i=0;i<10;i++){
 fscanf(Rank,"%s : %d",&store[i].name,&store[i].score);
                    if(strcmp(store[i].name,rank_name)==0)
                        {

                                printf("\t\t\t[%d]  %s : %d\n\n",i+1, store[i].name,store[i].score);
}
                    else {
                        printf("\t\t\t[%d]  %s : %d\n\n",i+1, store[i].name,store[i].score);}}
                        fclose(Rank);
}

struct time{
   int min;
   int seconds;
}t1;
typedef struct valid_places{
    int row;
    int col;
}valid_places;
double total_second=0;
void yellow (){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

}
void blueb (){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);

}
void bnafsigi (){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

}
void green (){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);

}
void red() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
}
void blue() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
}
void original (){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
}
void print_info(int score1, int score2 ,int remaining_lines , int total_movep1 , int  total_movep2,double elapsed){
     total_second=total_second+elapsed;
     t1.min=total_second/60;
     t1.seconds=total_second-t1.min*60;
    yellow();
printf("\nRemaining Lines is: (%02d)\t\t\tTime:(%d min %d seconds)\n",(remaining_lines),t1.min,t1.seconds);
red();
printf("Total move for Player1 is: (%d)\t\t\tPlayer1's score is :(%d)\n",(total_movep1),score1); original();
green();
printf("Total move for Player2 is: (%d)\t\t\tPlayer2's score is :(%d)\n",total_movep2,(score2)); original();
original();
yellow();
printf("s :to save the game\tu :to undo\tr :to redo\te :to go to main menu\n");original();
}


void print_info_hard(int score1, int score2 ,int remaining_lines , int total_movep1 , int  total_movep2,double elapsed){
     total_second=total_second+elapsed;
     t1.min=total_second/60;
     t1.seconds=total_second-t1.min*60;
    yellow();
printf("\nRemaining Lines is: (%02d)\t\t\tTime:(%d min %d seconds)\n",(remaining_lines),t1.min,t1.seconds);
red();
printf("Total move for Player1 is: (%d)\t\t\tPlayer1's score is :(%d)\n",(total_movep1),score1); original();
green();
printf("Total move for Player2 is: (%d)\t\t\tPlayer2's score is :(%d)\n",total_movep2,(score2)); original();
original();
yellow();
printf("s :to save the game\tu :to undo\tr :to redo\te :to go to main menu\n");original();
}

void print_info_computer(int score1, int score2 ,int remaining_lines , int total_movep1 , int  total_movep2,double elapsed){
     total_second=total_second+elapsed;
     t1.min=total_second/60;
     t1.seconds=total_second-t1.min*60;
    yellow();
printf("\nRemaining Lines is: (%02d)\t\t\tTime:(%d min %d seconds)\n",(remaining_lines),t1.min,t1.seconds);
red();
printf("Total move for Player1 is: (%d)\t\t\tPlayer1's score is :(%d)\n",(total_movep1),score1); original();
green();
printf("Total move for Computer is: (%d)\t\t\tComputer score is :(%d)\n",total_movep2,(score2)); original();
original();
yellow();
printf("s :to save the game\tu :to undo\tr :to redo\te :to go to main menu\n");original();

}

void print_info_hard_computer(int score1, int score2 ,int remaining_lines , int total_movep1 , int  total_movep2,double elapsed){
     total_second=total_second+elapsed;
     t1.min=total_second/60;
     t1.seconds=total_second-t1.min*60;
    yellow();
printf("\nRemaining Lines is: (%02d)\t\t\tTime:(%d min %d seconds)\n",(remaining_lines),t1.min,t1.seconds);
red();
printf("Total move for Player1 is: (%d)\t\t\tPlayer1's score is :(%d)\n",(total_movep1),score1); original();
green();
printf("Total move for Computer is: (%d)\t\t        Computer's score is :(%d)\n",total_movep2,(score2)); original();
original();
yellow();
printf("s :to save the game\tu :to undo\tr :to redo\te :to go to main menu\n");original();
}




FILE *file1;
FILE *file2;
void scan_input(){
 int ch=0;
 int i=0;int size;int counter_scan=0;int value;
 do{
   if(counter_scan>0){
    printf("not valid enter correct value:");
    char array_of_inputs[MAX]={""};
   }
   fseek(stdin,0,SEEK_END);
   gets(array_of_inputs);
   counter_scan++;
   size=strlen(array_of_inputs);
   if((size==1)&&(array_of_inputs[0]=='0')){
    size=2;}
 }while(size!=1);
}
struct player_info{
   char name[MAX];
   int score_player;
}p1,p2;
void scan_name(){
 int ch=0;
   fseek(stdin,0,SEEK_END);
   fgets(array_of_name,MAX,stdin);
}



void Inter_Face(int *choice1, int *gameType , int *gameDifficulty,int *score1,int *score2,int *play,int *remaining_lines,int *remaining_lines_hard,int *p1tot,int *p2tot){
    int load;

    //printf("\n\t\t\t\t\t\t########################################");
    blueb();
    printf("\n\t\t\t\t\t Dots&Boxes \t\t\t\t");
    original();
    flag15:
   // printf("\t\t\t\t\t\t\t\t\t########################################");
   yellow();
    printf("\n1-Start Game\n");
    printf("2-Load Game\n");
    printf("3-Top 10\n");
    printf("4-Exit Game\n\n");
    original();
    blueb();
    printf("Please Choose What do you want .. :)\n");
    original();
    yellow();
    flag1:
    scan_input();
    *choice1=array_of_inputs[0]-48;
    if(*choice1>4||*choice1<=0){
        red();
        printf("not valid");
        goto flag1;
    }
    if ((*choice1)==1){
        yellow();
        printf("\nPlease choose the type of game.\n");
        printf("1- ");
        red();
        printf("Player1 "); yellow(); printf("VS "); green(); printf("Player2\n");
        yellow();
        printf("2- "); red(); printf("Player1 "); yellow(); printf("VS ");green(); printf("Computer\n");yellow();
        flag2:
        scan_input();
        *gameType=array_of_inputs[0]-48;
        if(*gameType!=1&&*gameType!=2){
            red();
            printf("not valid");
            goto flag2;
        }
        printf("\nPlease choose game mode\n1-Easy.\n2-Hard.\n");
        flag3:
        scan_input();
        *gameDifficulty=array_of_inputs[0]-48;
         if(*gameDifficulty!=1&&*gameDifficulty!=2){
            red();
            printf("not valid");
            goto flag3;
         }
        }else if ((*choice1 == 2 )){
             char array_of_variables[8];
             yellow();
            printf("choose :\n1-save1 ...easy. \n2-save2 ...easy.  \n3-save3 ...easy.\n4-save4 ...hard. \n5-save5 ...hard.\n6-save6 ...hard.\n");original();
            flag4:
            scan_input();
            load=array_of_inputs[0]-48;
            if(load>6||load<=0){
                red();
                printf("not valid:");
                goto flag4;
            }
            if (load==1){

                file1=fopen("save1.txt","r");

                fread(bread,sizeof(char),30,file1);
                fclose(file1);
                file2=fopen("save11.txt","r");
                fread(array_of_variables,sizeof(char),8,file2);
                fclose(file2);

            }else if (load==2){
                file1=fopen("save2.txt","r");

                fread(bread,sizeof(char),30,file1);
                fclose(file1);
                file2=fopen("save22.txt","r");
                fread(array_of_variables,sizeof(char),8,file2);
                fclose(file2);

            }else if (load==3){
                file1=fopen("save3.txt","r");

                fread(bread,sizeof(char),30,file1);
                fclose(file1);
                file2=fopen("save33.txt","r");
                fread(array_of_variables,sizeof(char),8,file2);
                fclose(file2);

            }else if (load==4){
                file1=fopen("save4.txt","r");

                fread(bread_hard,sizeof(char),90,file1);
                fclose(file1);
                file2=fopen("save44.txt","r");
                fread(array_of_variables,sizeof(char),8,file2);
                fclose(file2);

            }else if (load==5){
                file1=fopen("save5.txt","r");

                fread(bread_hard,sizeof(char),90,file1);
                fclose(file1);
                file2=fopen("save55.txt","r");
                fread(array_of_variables,sizeof(char),8,file2);
                fclose(file2);

            }else if (load==6){
                file1=fopen("save6.txt","r");

                fread(bread_hard,sizeof(char),90,file1);
                fclose(file1);
                file2=fopen("save66.txt","r");
                fread(array_of_variables,sizeof(char),8,file2);
                fclose(file2);
                }
             *choice1=1;
            *score1=array_of_variables[0];
            *score2=array_of_variables[1];
            *gameType=array_of_variables[2];
            *gameDifficulty=array_of_variables[3];
            *play=array_of_variables[4];
            *remaining_lines=array_of_variables[5];
            *remaining_lines_hard=array_of_variables[5];
            *p1tot=array_of_variables[6];
            *p2tot=array_of_variables[7];

        }else if ((*choice1 == 3 )){
            int inputrank;
            print_rank();
            printf("press 'c' to return to main menu:");
            flag14:
            scan_input();
            inputrank=tolower(array_of_inputs[0]);
            if(inputrank!='c'){
                printf("not valid");
                goto flag14;
            }else if(inputrank=='c'){
            goto flag15;
            }

        }else if ((*choice1==4 )){
        }
        }

int main()
{
    valid_places c[12];
    c[0].row = 1;
    c[0].col = 2;
    c[1].row = 1;
    c[1].col = 4;
    c[2].row = 2;
    c[2].col = 1;
    c[3].row = 2;
    c[3].col = 3;
    c[4].row = 2;
    c[4].col = 5;
    c[5].row = 3;
    c[5].col = 2;
    c[6].row = 3;
    c[6].col = 4;
    c[7].row = 4;
    c[7].col = 1;
    c[8].row = 4;
    c[8].col = 3;
    c[9].row = 4;
    c[9].col = 5;
    c[10].row = 5;
    c[10].col = 2;
    c[11].row = 5;
    c[11].col = 4;
/////////////////////////////////////////////////////////////////////////////////////////////
    valid_places c_hard[40];
    c_hard[0].row = 1;
    c_hard[0].col = 2;
    c_hard[1].row = 1;
    c_hard[1].col = 4;
    c_hard[2].row = 2;
    c_hard[2].col = 1;
    c_hard[3].row = 2;
    c_hard[3].col = 3;
    c_hard[4].row = 2;
    c_hard[4].col = 5;
    c_hard[5].row = 3;
    c_hard[5].col = 2;
    c_hard[6].row = 3;
    c_hard[6].col = 4;
    c_hard[7].row = 4;
    c_hard[7].col = 1;
    c_hard[8].row = 4;
    c_hard[8].col = 3;
    c_hard[9].row = 4;
    c_hard[9].col = 5;
    c_hard[10].row = 5;
    c_hard[10].col = 2;
    c_hard[11].row = 5;
    c_hard[11].col = 4;
    c_hard[12].row = 1;
    c_hard[12].col = 6;
    c_hard[13].row = 1;
    c_hard[13].col = 8;
    c_hard[14].row = 2;
    c_hard[14].col = 7;
    c_hard[15].row = 2;
    c_hard[15].col = 9;
    c_hard[16].row = 3;
    c_hard[16].col = 6;
    c_hard[17].row = 3;
    c_hard[17].col = 8;
    c_hard[18].row = 4;
    c_hard[18].col = 7;
    c_hard[19].row = 4;
    c_hard[19].col = 9;
    c_hard[20].row = 5;
    c_hard[20].col = 6;
    c_hard[21].row = 5;
    c_hard[21].col = 8;
    c_hard[22].row = 6;
    c_hard[22].col = 1;
    c_hard[23].row = 6;
    c_hard[23].col = 3;
    c_hard[24].row = 6;
    c_hard[24].col = 5;
    c_hard[25].row = 6;
    c_hard[25].col = 7;
    c_hard[26].row = 6;
    c_hard[26].col = 9;
    c_hard[27].row = 7;
    c_hard[27].col = 2;
    c_hard[28].row = 7;
    c_hard[28].col = 4;
    c_hard[29].row = 7;
    c_hard[29].col = 6;
    c_hard[30].row = 7;
    c_hard[30].col = 8;
    c_hard[31].row = 8;
    c_hard[31].col = 1;
    c_hard[32].row = 8;
    c_hard[32].col = 3;
    c_hard[33].row = 8;
    c_hard[33].col = 5;
    c_hard[34].row = 8;
    c_hard[34].col = 7;
    c_hard[35].row = 8;
    c_hard[35].col = 9;
    c_hard[36].row = 9;
    c_hard[36].col = 2;
    c_hard[37].row = 9;
    c_hard[37].col = 4;
    c_hard[38].row = 9;
    c_hard[38].col = 6;
    c_hard[39].row = 9;
    c_hard[39].col = 8;
    double elapsed=0,elapsed2=0;//to calculate time for each player
    int remaining_lines_hard = 40;
    int remaining_lines = 12;
    int p1tot = 0;
    int p2tot = 0;
    int i,y,z,x,row1,col1,counter=0,conidtion2=0,player1,player2,player_counter=1,play=0,new_turn_counter,score1=0,score2=0,save,k=0;
    int choice_interface,game_type,game_difficulty;
    char array_of_variables[8];
    int undo_easy1 [8]={0};
    int p[2];
    int l[8];

    int undo_hard1[8]={0};
    flag://for go back to game menu
    y=0;
    z=1;
    score1=0;score2=0;total_second=0;elapsed2=0;elapsed=0;remaining_lines=12;remaining_lines_hard=40;p1tot=0;p2tot=0;counter=0;conidtion2=0;play=0;
     Inter_Face(&choice_interface,&game_type,&game_difficulty,&score1,&score2,&play,&remaining_lines,&remaining_lines_hard,&p1tot,&p2tot);
       if(choice_interface==1){
            //if condition to prevent program to ask for user name if the game come from save file
            if (game_difficulty==1&&game_type==1&&(remaining_lines<12)){
                goto gtwoeasy;
            }else if (game_difficulty==1&&game_type==2&&(remaining_lines<12)){
            goto goneeasy;
            }else if(game_difficulty==2&&game_type==1&&(remaining_lines_hard<40)){
            goto gtwohard;
            }else if(game_difficulty==2&&game_type==2&&(remaining_lines_hard<40)){
            goto gonehard;
            }

          if(game_difficulty==1){
            if(game_type==1){
               //asking for user names
              red();
             printf("enter player1 name:");
             scanf("%s",player_1.str);
            for(i=0;player_1.str[i] !='\0';i++){
             player_1.str[i]=tolower(player_1.str[i]);}
             green();
             printf("enter player2 name:\n");
             scanf("%s",player_2.str);
             //scan_name();
             for(i=0;player_2.str[i] !='\0';i++){
             player_2.str[i]=tolower(player_2.str[i]);}
             gtwoeasy:
              //get ready to start game and print the grid and info
             get_bread(bread);
             print_bread(bread);
             print_info(score1,score2,remaining_lines,p1tot,p2tot,elapsed);
        while(score1+score2!=4){
                if (play==0){
                    clock_t start = clock();
                    do{ player1=1;
                    red();
                 printf("(player 1):\n");original();
                 yellow();
                 //printf("\t\t\t\t\tPress s to save the game\n");
                do{
                     //player 1 loop   and begin with taking inputs
                   yellow();
                   printf("enter number of row:\n");
                   scan_input();
                   row1=tolower(array_of_inputs[0]);
                   if(row1!='s'&&row1!='u'&&row1!='r'&&row1!='e'){
                   row1=array_of_inputs[0]-48;
                   printf("enter number of col:\n");original();
                   scan_input();
                   col1=array_of_inputs[0]-48;}
                   if(row1=='s'){
                       //saveing the game
                        array_of_variables[0]=score1;
                        array_of_variables[1]=score2;
                        array_of_variables[2]=game_type;
                        array_of_variables[3]=game_difficulty;
                        array_of_variables[4]=play;
                        array_of_variables[5]=remaining_lines;
                        array_of_variables[6]=p1tot;
                        array_of_variables[7]=p2tot;
                        yellow();
                        printf("choose :\n1-save1 \n2-save2 \n3-save3 \n");
                        original();
                        flag4:
                        scan_input();
                        save=array_of_inputs[0]-48;
                        if(save>3||save<0){ yellow();printf("invalid\n");
                        goto flag4;
                        original();
                       }else if(save==1){
                       file1=fopen("save1.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save11.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==2){
                       file1=fopen("save2.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save22.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==3){
                       file1=fopen("save3.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save33.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }
                       conidtion2=0;
                       }else if(row1=='u'){
                           if(remaining_lines<12&&k==1){
                                undo(bread,undo_easy1);
				                cheack_of_end_after_redo(bread);
                                score1=p[0];
                                score2=p[1];
                                play=undo_easy1[4];
                                remaining_lines=undo_easy1[5];
                                p1tot=undo_easy1[6];
                                p2tot=undo_easy1[7];
                                k=0;
                                break;
                           }
                       }else if(row1=='r'){
                           if(p1tot+p2tot>=0&&k==0){
                            redo(bread,undo_easy1);
                            score1=undo_easy1[2];
                            score2=undo_easy1[3];
                            play=undo_easy1[4];
                            remaining_lines=undo_easy1[5];
                            p1tot=undo_easy1[6];
                            p2tot=undo_easy1[7];
                            k=1;
                            break;
                           }
                       }else if(row1=='e'){
                       yellow();
                       printf("THANKS FOR PLAYING\n");
                       get_bread_empty(bread);
                       goto flag;
                       }else{
                        conidtion2=check_for_valid_inputs(row1,col1,bread);}
                       conidtion2=check_for_valid(row1,col1,bread);
                       if(conidtion2==1){
                                undo_easy1[0]=row1;
                                undo_easy1[1]=col1;
                                undo_easy1[4]=play;
                                undo_easy1[5]=remaining_lines;
                                undo_easy1[6]=p1tot;
                                undo_easy1[7]=p2tot;
                                p[0]=score1;
                                p[1]=score2;
                                k=1;}
                }while(conidtion2<1);
                 draw_line(row1,col1,bread);
                 if(k==1){
                    remaining_lines--;
                   p1tot++;
                  }
                 new_turn_counter=cheack_of_end(player1,&score1,&score2,bread);
                 if (new_turn_counter==1&&k==1&&score2>0){
                    score2--;
                 }
                 if (k==1){
                    undo_easy1[2]=score1;
                    undo_easy1[3]=score2;
                 }
                print_bread(bread);
                clock_t stop = clock();
               elapsed = (double)(stop - start)  / CLOCKS_PER_SEC;
                print_info(score1,score2,remaining_lines,p1tot,p2tot,elapsed);
                }while(new_turn_counter==1&&(score1+score2!=4));
                //turing between players
                play=1;
                player_counter=1;
                 }else{
                do{
                // second player loop
                clock_t start = clock();
                counter++;
                player2=2;
                green();
                printf("(player 2):\n"); original();
                yellow();
                //printf("\t\t\t\t\tPress s to save the game\n");
                do{
                    printf("enter number of row:\n");
                   scan_input();
                   row1=tolower(array_of_inputs[0]);
                 if(row1!='s'&&row1!='u'&&row1!='r'&&row1!='e'){
                   row1=array_of_inputs[0]-48;
                   printf("enter number of col:\n");
                   scan_input();
                   col1=array_of_inputs[0]-48;}
                   if(row1=='s'){
                        yellow();
                        array_of_variables[0]=score1;
                        array_of_variables[1]=score2;
                        array_of_variables[2]=game_type;
                        array_of_variables[3]=game_difficulty;
                        array_of_variables[4]=play;
                        array_of_variables[5]=remaining_lines;
                        array_of_variables[6]=p1tot;
                        array_of_variables[7]=p2tot;
                        printf("choose :\n1-save1 \n2-save2 \n3-save3 \n");
                         flag5:
                        scan_input();
                        save=array_of_inputs[0]-48;
                        if(save>3||save<0){ yellow();printf("invalid\n");
                        goto flag5;
                       }else if(save==1){
                       file1=fopen("save1.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save11.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==2){
                       file1=fopen("save2.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save22.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==3){
                       file1=fopen("save3.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save33.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }
                       conidtion2=0;
                   }else if(row1=='u'){

                          if(remaining_lines<12&&k==1){
                                undo(bread,undo_easy1);
                                cheack_of_end_after_redo(bread);
                                score1=p[0];
                                score2=p[1];
                                play=undo_easy1[4];
                                remaining_lines=undo_easy1[5];
                                p1tot=undo_easy1[6];
                                p2tot=undo_easy1[7];
                                k=0;
                                break;
                           }
                       }else if(row1=='r'){
                           if(p1tot+p2tot>=0&&k==0){
                            redo(bread,undo_easy1);
                            score1=undo_easy1[2];
                            score2=undo_easy1[3];
                            play=undo_easy1[4];
                            remaining_lines=undo_easy1[5];
                            p1tot=undo_easy1[6];
                            p2tot=undo_easy1[7];
                            k=1;
                            break;
                           }
                       }else if(row1=='e'){
                           yellow();
                       printf("THANKS FOR PLAYING\n");
                       get_bread_empty(bread);
                       goto flag;
                       }
                       else{
                   conidtion2=check_for_valid_inputs(row1,col1,bread);}
                       conidtion2=check_for_valid(row1,col1,bread);
                       if(conidtion2==1){
                                undo_easy1[0]=row1;
                                undo_easy1[1]=col1;
                                undo_easy1[4]=play;
                                undo_easy1[5]=remaining_lines;
                                undo_easy1[6]=p1tot;
                                undo_easy1[7]=p2tot;
                                p[0]=score1;
                                p[1]=score2;
                                k=1;
                                }
                }while(conidtion2<1);
                  draw_line(row1,col1,bread);
                  if(k==1){
                    remaining_lines--;
                    p2tot++;
                  }
                 new_turn_counter=cheack_of_end(player2, &score1, &score2,bread);
                 if (new_turn_counter==1&&k==1&&score1>0){
                    score1--;
                 }
                 if (k==1){
                    undo_easy1[2]=score1;
                    undo_easy1[3]=score2;
                 }
                print_bread(bread);
                clock_t stop = clock();
                elapsed2 = (double)(stop - start)  / CLOCKS_PER_SEC;
                print_info(score1,score2,remaining_lines,p1tot,p2tot,elapsed2);
                }while(new_turn_counter==1&&score1+score2!=4);
                 play=0;
                 player_counter=1;
                }
         }
         // 2 player mode finished and compare between two players score
        compare_score(score1,score2);
        p1.score_player=score1;
        p2.score_player=score2;
        if (score1>score2){
        rank(score1,player_1.str);}else if (score1<score2){
        rank(score2,player_2.str);}else if (score1==score2){
        rank(score1,player_1.str);
        rank(score2,player_2.str);
        }
        red();
        printf("\n");
        yellow();
        printf("press 'e' to exit.\t\t\t\t press 'c' to show main menu again.");original();
        flag11:
        red();
        scan_input();
        row1=tolower(array_of_inputs[0]);
        if(row1!='e'&&row1!='c'){
            printf("not valid\n");
            goto flag11;
        }
        if(row1=='e'){
        printf("THANKS FOR PLAYING\n");
        }else if(row1=='c'){
        get_bread_empty(bread);
        goto flag;}
        }else if(game_type==2){
            red();
            printf("enter player1 name:");
            scanf("%s",player_1.str);
                         for(i=0;player_1.str[i] !='\0';i++){
             player_1.str[i]=tolower(player_1.str[i]);}
            //flag for computer mode for easy
            goneeasy:
            get_bread(bread);
            print_bread(bread);
            print_info_computer(score1,score2,remaining_lines,p1tot,p2tot,elapsed);
        while(score1+score2!=4){
                if (play==0){
                player1=1;
                do{
                clock_t start = clock();
                //print_info(score1,score2,remaining_lines,p1tot,p2tot,elapsed2);
                red();
                printf("(player 1):\n");
                yellow();
                //printf("\t\t\t\t\tPress s to save the game\n");
                do{
                   //scan_inputs
                   printf("enter number of row\n");
                   scan_input();
                   row1=tolower(array_of_inputs[0]);
                  if(row1!='s'&&row1!='u'&&row1!='r'&&row1!='e'){
                   row1=array_of_inputs[0]-48;
                   printf("enter number of col\n");
                   scan_input();
                   col1=array_of_inputs[0]-48;}
                   if(row1=='s'){
                        yellow();
                        array_of_variables[0]=score1;
                        array_of_variables[1]=score2;
                        array_of_variables[2]=game_type;
                        array_of_variables[3]=game_difficulty;
                        array_of_variables[4]=play;
                        array_of_variables[5]=remaining_lines;
                        array_of_variables[6]=p1tot;
                        array_of_variables[7]=p2tot;
                        printf("choose :\n1-save1 \n2-save2 \n3-save3 \n");
                         flag6:
                        scan_input();
                        save=array_of_inputs[0]-48;
                        if(save>3||save<0){ yellow();printf("invalid\n");
                        goto flag6;
                       }else if(save==1){
                       file1=fopen("save1.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save11.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==2){
                       file1=fopen("save2.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save22.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==3){
                       file1=fopen("save3.txt","w");
                       fwrite(bread,sizeof(char),30,file1);
                       fclose(file1);
                       file2=fopen("save33.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }
                       conidtion2=0;
                   }else if(row1=='u'){
                           if(remaining_lines<12&&k==1){
                                undo(bread,undo_easy1);
                                cheack_of_end_after_redo(bread);
                                score1=p[0];
                                score2=p[1];
                                play=undo_easy1[4];
                                remaining_lines=undo_easy1[5];
                                p1tot=undo_easy1[6];
                                p2tot=undo_easy1[7];
                                undo (bread,l);
                                cheack_of_end_after_redo(bread);
                                k=0;

                                break;


                           }
                       }else if(row1=='r'){
                           if(p1tot+p2tot>=0&&k==0){
                            redo(bread,undo_easy1);
                            score1=undo_easy1[2];
                            score2=undo_easy1[3];
                            play=undo_easy1[4];
                            remaining_lines=undo_easy1[5];
                            p1tot=undo_easy1[6];
                            p2tot=undo_easy1[7];
                            k=1;
                            break;
                           }
                       }
                       else if(row1=='e'){
                       printf("THANKS FOR PLAYING\n");
                       get_bread_empty(bread);
                       goto flag;
                       }else{
                   conidtion2=check_for_valid_inputs(row1,col1,bread);}
                       conidtion2=check_for_valid(row1,col1,bread);
                       if(conidtion2==1){
                                undo_easy1[0]=row1;
                                undo_easy1[1]=col1;

                                undo_easy1[4]=play;
                                undo_easy1[5]=remaining_lines;
                                undo_easy1[6]=p1tot;
                                undo_easy1[7]=p2tot;
                                p[0]=score1;
                                p[1]=score2;

                                k=1;
                                }


                }while(conidtion2<1);
                 draw_line(row1,col1,bread);
                 new_turn_counter=cheack_of_end(player1,&score1,&score2,bread);
                 if (new_turn_counter==1&&score1>1){
                    score1--;
                 }
                 if (new_turn_counter==1&&k==0&&score2>0){
                    score2--;
                 }

                if (k==1){
                    undo_easy1[2]=score1;
                    undo_easy1[3]=score2;
                    remaining_lines--;
                    p1tot++;
                 }
                 print_bread(bread);
                clock_t stop = clock();
               elapsed = (double)(stop - start)  / CLOCKS_PER_SEC;
                print_info_computer(score1,score2,remaining_lines,p1tot,p2tot,elapsed);
                }while(new_turn_counter==1&&(score1+score2!=4));
                play=1;
                if (k==0){
                    play =0;
                 }
                 }else{
                  do{   //computer mode for easy
                        clock_t start = clock();
                        player2=2;
                        green();
                    printf("computer playing....\n");
                 do{
                 srand ( time(NULL) );
                register int randomIndex1 = rand() % 12;
                 row1= c[randomIndex1].row;
                 col1= c[randomIndex1].col;

                  conidtion2=check_for_valid_inputs_for_computer(row1,col1,bread);
                  l[0]=row1;
                  l[1]=col1;
                  k=1;
                }while(conidtion2<1);
                 draw_line(row1,col1,bread);
                 new_turn_counter=cheack_of_end(player2, &score1, &score2,bread);
                 if (new_turn_counter==1&&k==0&&score1>1){
                    score1--;
                 }
                print_bread(bread);
                remaining_lines--;
                p2tot++;
            clock_t stop = clock();
            elapsed2 = (double)(stop - start)  / CLOCKS_PER_SEC;
            print_info_computer(score1,score2,remaining_lines,p1tot,p2tot,elapsed2);
                }while(new_turn_counter==1&&score1+score2!=4);
                 play=0;
            }
          }//compare score
         compare_score(score1,score2);
         p1.score_player=score1;
        p2.score_player=score2;
        if (score1>score2){
        rank(score1,player_1.str);}else if (score1 == score2){
        rank(score1,player_1.str);
        }
        red();
        printf("\n");
        yellow();
        printf("press 'e' to exit.\t\t\t\t press 'c' to show main menu again.");original();
        flag10:
        scan_input();
        row1=tolower(array_of_inputs[0]);
        if(row1!='e'&&row1!='c'){
            printf("not valid");
            goto flag10;
        }
        if(row1=='e'){
                yellow();
        printf("THANKS FOR PLAYING\n");
        }else if(row1=='c'){
        get_bread_empty(bread);
        goto flag;}
       }
       // begin of hard mode
     }else if(game_difficulty==2){
            if(game_type==1){
            //mode 2 player hard
            //input of names
             red();
            printf("enter player1 name:");
            scanf("%s",player_1.str);
                         for(i=0;player_1.str[i] !='\0';i++){
             player_1.str[i]=tolower(player_1.str[i]);}

             green();
             printf("enter player2 name:");
             scanf("%s",player_2.str);
            for(i=0;player_2.str[i] !='\0';i++){
             player_2.str[i]=tolower(player_2.str[i]);}
             // flag for two player hard
             gtwohard:
             get_bread_hard(bread_hard);
             print_bread_hard(bread_hard);
             print_info_hard(score1,score2,remaining_lines_hard,p1tot,p2tot,elapsed2);
             while(score1+score2!=16){
                if (play==0){
                    do{
                    //first player
                    clock_t start = clock();
                    player1=1;
                    red();
                    printf("(player 1):\n");
                    yellow();
                 //printf("\t\t\t\t\tPress s to save the game\n");
                    do{
                        yellow();
                        printf("enter number of row\n");
                        scan_input();
                        row1=tolower(array_of_inputs[0]);
                        if(row1!='s'&&row1!='u'&&row1!='r'&&row1!='e'){
                        row1=array_of_inputs[0]-48;
                        printf("enter number of col\n");
                        scan_input();
                        col1=array_of_inputs[0]-48;}
                     if(row1=='s'){
                        yellow();
                        array_of_variables[0]=score1;
                        array_of_variables[1]=score2;
                        array_of_variables[2]=game_type;
                        array_of_variables[3]=game_difficulty;
                        array_of_variables[4]=play;
                        array_of_variables[5]=remaining_lines_hard;
                        array_of_variables[6]=p1tot;
                        array_of_variables[7]=p2tot;
                        printf("choose :\n1-save4 \n2-save5 \n3-save6 \n");
                         flag7:
                        scan_input();
                        save=array_of_inputs[0]-48;
                        if(save>3||save<0){ yellow();printf("invalid\n");
                        goto flag7;
                       }else if(save==1){
                       file1=fopen("save4.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save44.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==2){
                       file1=fopen("save5.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save55.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==3){
                       file1=fopen("save6.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save66.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }
                       conidtion2=0;
                   }else if(row1=='u'){
                       if(remaining_lines<40&&k==1){
                                undo2(bread_hard,undo_hard1);
                                cheack_of_end_after_redo_hard(bread_hard);
                                score1=p[0];
                                score2=p[1];
                                play=undo_hard1[4];
                                remaining_lines_hard=undo_hard1[5];
                                p1tot=undo_hard1[6];
                                p2tot=undo_hard1[7];
                                k=0;
                                break;
                           }
                       }else if(row1=='r'){
                           if(p1tot+p2tot>=0&&k==0){
                            redo2(bread_hard,undo_hard1);
                            score1=undo_hard1[2];
                            score2=undo_hard1[3];
                            play=undo_hard1[4];
                            remaining_lines_hard=undo_hard1[5];
                            p1tot=undo_hard1[6];
                            p2tot=undo_hard1[7];
                            k=1;
                            break;
                           }
                       }else if(row1=='e'){
                       printf("THANKS FOR PLAYING\n");
                       get_bread_empty_hard(bread_hard);
                       goto flag;
                       }else{
                   conidtion2=check_for_valid_inputs_hard(row1,col1,bread_hard);}
                       conidtion2=check_for_valid_hard(row1,col1,bread_hard);
                       if(conidtion2==1){
                       undo_hard1[0]=row1;
                       undo_hard1[1]=col1;

                       undo_hard1[4]=play;
                       undo_hard1[5]=remaining_lines_hard;
                       undo_hard1[6]=p1tot;
                       undo_hard1[7]=p2tot;
                       p[0]=score1;
                       p[1]=score2;
                       k=1;}
                }while(conidtion2<1);
                 draw_line_hard(row1,col1,bread_hard);
                 if(k==1){
                    remaining_lines_hard--;
                    p1tot++;
                 }
                 new_turn_counter=cheack_of_end_hard(player1,&score1,&score2,bread_hard);
                 if (new_turn_counter==1&&k==1&&score2>0){
                    score2--;
                 }
                 if (k==1){
                    undo_hard1[2]=score1;
                    undo_hard1[3]=score2;
                 }
                 print_bread_hard(bread_hard);
                clock_t stop = clock();
                elapsed = (double)(stop - start)  / CLOCKS_PER_SEC;
                print_info_hard(score1,score2,remaining_lines_hard,p1tot,p2tot,elapsed);
                }while(new_turn_counter==1&&(score1+score2!=16));
                play=1;

                player_counter=1;

                 }else{
                do{
                 //loop for secomd player
                clock_t start = clock();
                counter++;
                player2=2;
                green();
                printf("(player 2):\n");
                yellow();
                //printf("\t\t\t\t\tPress s to save the game\n");
                do{
                    printf("enter number of row\n");
                   scan_input();
                   row1=tolower(array_of_inputs[0]);
                  if(row1!='s'&&row1!='u'&&row1!='r'&&row1!='e'){
                   row1=array_of_inputs[0]-48;
                   printf("enter number of col\n");
                   scan_input();
                   col1=array_of_inputs[0]-48;}
                   if(row1=='s'){
                        array_of_variables[0]=score1;
                        array_of_variables[1]=score2;
                        array_of_variables[2]=game_type;
                        array_of_variables[3]=game_difficulty;
                        array_of_variables[4]=play;
                        array_of_variables[5]=remaining_lines_hard;
                        array_of_variables[6]=p1tot;
                        array_of_variables[7]=p2tot;
                        yellow();
                        printf("choose :\n1-save4 \n2-save5 \n3-save6 \n");
                         flag8:
                        scan_input();
                        save=array_of_inputs[0]-48;
                        if(save>3||save<0){ yellow();printf("invalid\n");
                        goto flag8;
                       }else if(save==1){
                       file1=fopen("save4.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save44.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==2){
                       file1=fopen("save5.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save55.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==3){
                       file1=fopen("save6.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save66.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }
                       conidtion2=0;
                   }else if(row1=='u'){
                       if(remaining_lines<40&&k==1){
                                undo2(bread_hard,undo_hard1);
                                cheack_of_end_after_redo_hard(bread_hard);
                                score1=p[0];
                                score2=p[1];
                                play=undo_hard1[4];
                                remaining_lines_hard=undo_hard1[5];
                                p1tot=undo_hard1[6];
                                p2tot=undo_hard1[7];
                                k=0;
                                break;
                           }
                       }else if(row1=='r'){
                           if(p1tot+p2tot>=0&&k==0){
                            redo2(bread_hard,undo_hard1);
                            score1=undo_hard1[2];
                            score2=undo_hard1[3];
                            play=undo_hard1[4];
                            remaining_lines_hard=undo_hard1[5];
                            p1tot=undo_hard1[6];
                            p2tot=undo_hard1[7];
                            k=1;
                            break;
                           }
                       }else if(row1=='e'){
                       printf("THANKS FOR PLAYING\n");
                       get_bread_empty_hard(bread_hard);
                       goto flag;
                       }else{
                   conidtion2=check_for_valid_inputs_hard(row1,col1,bread_hard);}
                       conidtion2=check_for_valid_hard(row1,col1,bread_hard);
                       if(conidtion2==1){
                       undo_hard1[0]=row1;
                       undo_hard1[1]=col1;
                       undo_hard1[4]=play;
                       undo_hard1[5]=remaining_lines_hard;
                       undo_hard1[6]=p1tot;
                       undo_hard1[7]=p2tot;
                       p[0]=score1;
                       p[1]=score2;
                       k=1;}
                }while(conidtion2<1);
                  draw_line_hard(row1,col1,bread_hard);
                  if (k==1){
                    remaining_lines_hard--;
                    p2tot++;
                  }
                 new_turn_counter=cheack_of_end_hard(player2, &score1, &score2,bread_hard);
                 if (new_turn_counter==1&&k==1&&score1>0){
                    score1--;
                 }
                 if (k==1){
                    undo_hard1[2]=score1;
                    undo_hard1[3]=score2;
                 }
                print_bread_hard(bread_hard);
                clock_t stop = clock();
                elapsed2 = (double)(stop - start)  / CLOCKS_PER_SEC;
                print_info_hard(score1,score2,remaining_lines_hard,p1tot,p2tot,elapsed2);
                }while(new_turn_counter==1&&score1+score2!=16);
                 play=0;

                 player_counter=1;
                }
         }
         p1.score_player=score1;
        p2.score_player=score2;
        compare_score(score1,score2);
        if (score1>score2){
        rank(score1,player_1.str);}else if (score1<score2){
        rank(score2,player_2.str);}else if (score1==score2){
        rank(score1,player_1.str);
        rank(score2,player_2.str);
        }
         red();
        printf("\n");
        yellow();
        printf("press 'e' to exit.\t\t\t\t press 'c' to show main menu again.");original();
        flag12:
        red();
        scan_input();
        row1=tolower(array_of_inputs[0]);
        if(row1!='e'&&row1!='c'){
            printf("not valid");
            goto flag12;
        }
        if(row1=='e'){
        yellow();
        printf("THANKS FOR PLAYING\n");
        return 0;
        }else if(row1=='c'){
        get_bread_empty_hard(bread_hard);
        goto flag;}
            }else if (game_type==2){
                //computer mode for hard
                red();
            printf("enter player1 name:");
            scanf("%s",player_1.str);
                         for(i=0;player_1.str[i] !='\0';i++){
             player_1.str[i]=tolower(player_1.str[i]);}
             //flag for computer mode for hard
            gonehard:
            get_bread_hard(bread_hard);
            print_bread_hard(bread_hard);
            print_info_hard_computer(score1,score2,remaining_lines_hard,p1tot,p2tot,elapsed);
            while(score1+score2!=16){
                if (play==0){
            clock_t start = clock();

                player1=1;
                do{
                red();
                printf("(player 1)");
                original();
                yellow();
               // printf("\t\t\t\t\tPress s to save the game\n");original();
                do{
                   clock_t start = clock();
                   yellow();
                   printf("enter number of row\n");
                   scan_input();
                   row1=tolower(array_of_inputs[0]);
                  if(row1!='s'&&row1!='u'&&row1!='r'&&row1!='e'){
                   row1=array_of_inputs[0]-48;
                    yellow();
                   printf("enter number of col\n");
                   scan_input();
                   col1=array_of_inputs[0]-48;}
                   if(row1=='s'){
                        array_of_variables[0]=score1;
                        array_of_variables[1]=score2;
                        array_of_variables[2]=game_type;
                        array_of_variables[3]=game_difficulty;
                        array_of_variables[4]=play;
                        array_of_variables[5]=remaining_lines_hard;
                        array_of_variables[6]=p1tot;
                        array_of_variables[7]=p2tot;
                        printf("choose :\n1-save4 \n2-save5 \n3-save6 \n");
                         flag9:
                        scan_input();
                        save=array_of_inputs[0]-48;
                        if(save>3||save<0){ yellow();printf("invalid\n");
                        goto flag9;
                       file1=fopen("save4.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save44.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==2){
                       file1=fopen("save5.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save55.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }else if (save==3){
                       file1=fopen("save6.txt","w");
                       fwrite(bread_hard,sizeof(char),90,file1);
                       fclose(file1);
                       file2=fopen("save66.txt","w");
                       fwrite(array_of_variables,sizeof(char),8,file2);
                       fclose(file2);
                       }
                       conidtion2=0;
                   }else if(row1=='u'){
                       if(remaining_lines<40&&k==1){
                                undo2(bread_hard,undo_hard1);
                                cheack_of_end_after_redo_hard(bread_hard);
                                score1=p[0];
                                score2=p[1];
                                play=undo_hard1[4];
                                remaining_lines_hard=undo_hard1[5];
                                p1tot=undo_hard1[6];
                                p2tot=undo_hard1[7];
                                undo2(bread_hard,l);
                                cheack_of_end_after_redo_hard(bread_hard);
                                k=0;

                                break;


                           }
                       }else if(row1=='r'){
                           if(p1tot+p2tot>=0&&k==0){
                            redo2(bread_hard,undo_hard1);
                            score1=undo_hard1[2];
                            score2=undo_hard1[3];
                            play=undo_hard1[4];
                            remaining_lines_hard=undo_hard1[5];
                            p1tot=undo_hard1[6];
                            p2tot=undo_hard1[7];
                            k=1;
                            break;
                           }
                       }else if(row1=='e'){
                       printf("THANKS FOR PLAYING\n");
                       get_bread_empty_hard(bread_hard);
                       goto flag;
                       }else{
                   conidtion2=check_for_valid_inputs_hard(row1,col1,bread_hard);}
                       conidtion2=check_for_valid(row1,col1,bread);
                       if(conidtion2==1){
                                undo_hard1[0]=row1;
                                undo_hard1[1]=col1;

                                undo_hard1[4]=play;
                                undo_hard1[5]=remaining_lines_hard;
                                undo_hard1[6]=p1tot;
                                undo_hard1[7]=p2tot;
                                p[0]=score1;
                                p[1]=score2;

                                k=1;
                                }

                }while(conidtion2<1);
                 draw_line_hard(row1,col1,bread_hard);
                 remaining_lines_hard--;
                 p1tot++;
                 new_turn_counter=cheack_of_end_hard(player1,&score1,&score2,bread_hard);
                 if (new_turn_counter==1&&score1>1){
                    score1--;
                 }

                 if (new_turn_counter==1&&k==1&&score2>0){
                    score2--;
                 }

                 if (k==1){
                    undo_hard1[2]=score1;
                    undo_hard1[3]=score2;
                    remaining_lines_hard--;
                    p1tot++;
                 }
                print_bread_hard(bread_hard);
                clock_t stop = clock();
                elapsed = (double)(stop - start)  / CLOCKS_PER_SEC;
                print_info_hard_computer(score1,score2,remaining_lines_hard,p1tot,p2tot,elapsed);
                }while(new_turn_counter==1&&(score1+score2!=16));
                play=1;
                if (k==0){
                    play=0;
                }
                 }else{
                  do{
                    clock_t start = clock();
                    green();
                    printf("computer playing....\n");original();
                 do{
                player2=2;
                srand ( time(NULL) );
                register int randomIndex1 = rand()%40;
                row1= c_hard[randomIndex1].row;
                col1= c_hard[randomIndex1].col;

                conidtion2=check_for_valid_inputs_for_computer_hard(row1,col1,bread_hard);
                l[0]=row1;
                  l[1]=col1;
                  k=1;
                }while(conidtion2<1);
                 draw_line_hard(row1,col1,bread_hard);
                 remaining_lines_hard--;
                 p2tot++;
                 new_turn_counter=cheack_of_end_hard(player2, &score1, &score2,bread_hard);
                 if (new_turn_counter==1&&k==1&&score1>0){
                    score1--;
                 }
                 print_bread_hard(bread_hard);
                 clock_t stop = clock();
                 elapsed2 = (double)(stop - start)  / CLOCKS_PER_SEC;
                 print_info_hard_computer(score1,score2,remaining_lines_hard,p1tot,p2tot,elapsed2);
                }while(new_turn_counter==1&&score1+score2!=16);
                 play=0;
            }
          }
        compare_score_c(score1,score2);
        p1.score_player=score1;
        p2.score_player=score2;
        if (score1>score2){
        rank(score1,player_1.str);}else if (score1 == score2){
        rank(score1,player_1.str);
        }
        red();
        printf("\n");
        yellow();
        printf("press 'e' to exit.\t\t\t\t press 'c' to show main menu again.");original();
        flag13:
        red();
        scan_input();
        row1=tolower(array_of_inputs[0]);
        if(row1!='e'&&row1!='c'){
            printf("not valid");
            goto flag13;
        }
        if(row1=='e'){
        printf("THANKS FOR PLAYING\n");
        }else if(row1=='c'){
        get_bread_empty_hard(bread_hard);
        goto flag;}
        }
     }
   }

    return 0;
}
