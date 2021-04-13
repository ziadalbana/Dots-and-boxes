

int cheack_of_end_after_redo_hard(char board[9][10]){
                if (board[0][1]=='\000' || board[1][0]=='\000' || board[1][2]=='\000' || board[2][1]=='\000'){
                    board[1][1]='\000';
                }
                if (board[0][3]=='\000' || board[1][2]=='\000' || board[2][3]=='\000' || board[1][4]=='\000'){
                    board[1][3]='\000';
                }
                if (board[3][0]=='\000' || board[3][2]=='\000' || board[4][1]=='\000' || board[2][1]=='\000'){
                    board[3][1]='\000';
                }
                if (board[3][2]=='\000' || board[3][4]=='\000' || board[2][3]=='\000' || board[4][3]=='\000'){
                    board[3][3]='\000';
                }
                if (board[1][4]=='\000' || board[0][5]=='\000' || board[1][6]=='\000' || board[2][5]=='\000'){
                    board[1][5]='\000';}
                if (board[1][6]=='\000' || board[1][8]=='\000' || board[0][7]=='\000' || board[2][7]=='\000'){
                    board[1][7]='\000';}
                if (board[2][5]=='\000' || board[4][5]=='\000' || board[3][4]=='\000' || board[3][6]=='\000'){
                    board[3][5]='\000';}
                if (board[3][6]=='\000' || board[3][8]=='\000' || board[2][7]=='\000' || board[4][7]=='\000'){
                    board[3][7]='\000';}
                if (board[5][2]=='\000' || board[5][0]=='\000' || board[6][1]=='\000'|| board[4][1]=='\000'){
                    board[5][1]='\000';}
                if (board[6][3]=='\000' || board[4][3]=='\000' || board[5][4]=='\000' || board[5][2]=='\000'){
                    board[5][3]='\000';}

                if (board[6][5]=='\000' || board[4][5]=='\000' || board[5][6]=='\000' || board[5][4]=='\000'){
                    board[5][5]='\000';}

                if (board[6][7]=='\000' || board[4][7]=='\000' || board[5][6]=='\000' || board[5][8]=='\000'){
                    board[5][7]='\000';}

                if (board[8][1]=='\000' || board[6][1]=='\000' || board[7][2]=='\000' || board[7][0]=='\000'){
                    board[7][1]='\000';}

                if (board[8][3]=='\000' || board[6][3]=='\000' || board[7][4]=='\000' || board[7][2]=='\000'){
                    board[7][3]='\000';}

                if (board[8][5]=='\000'||  board[6][5]=='\000' || board[7][6]=='\000' || board[7][4]=='\000'){
                    board[7][5]='\000';}
                if (board[8][7]=='\000' || board[6][7]=='\000' || board[7][8]=='\000' || board[7][6]=='\000'){
                    board[7][7]='\000';}

                }


int cheack_of_end_hard(int player,int *score1 , int *score2 ,char board[9][10]){
    int counter_for_newturn=0;
    if (player == 1){
                if (board[0][1]!='\000' && board[1][0]!='\000' && board[1][2]!='\000' && board[2][1]!='\000'&&board[1][1]=='\000'){
                    board[1][1]='A';counter_for_newturn=1;(*score1)++;
                    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                }
                if (board[0][3]!='\000' && board[1][2]!='\000' && board[2][3]!='\000' && board[1][4]!='\000'&&board[1][3]=='\000'){
                    board[1][3]='A';counter_for_newturn=1;(*score1)++;
                }
                if (board[3][0]!='\000' && board[3][2]!='\000' && board[4][1]!='\000' && board[2][1]!='\000'&&board[3][1]=='\000'){
                    board[3][1]='A';counter_for_newturn=1;(*score1)++;
                }
                if (board[3][2]!='\000' && board[3][4]!='\000' && board[2][3]!='\000' && board[4][3]!='\000'&&board[3][3]=='\000'){
                    board[3][3]='A';counter_for_newturn=1;(*score1)++;
                }
                if (board[1][4]!='\000' && board[0][5]!='\000' && board[1][6]!='\000' && board[2][5]!='\000'&&board[1][5]=='\000'){
                    board[1][5]='A';counter_for_newturn=1;(*score1)++;}
                if (board[1][6]!='\000' && board[1][8]!='\000' && board[0][7]!='\000' && board[2][7]!='\000'&&board[1][7]=='\000'){
                    board[1][7]='A';counter_for_newturn=1;(*score1)++;}
                if (board[2][5]!='\000' && board[4][5]!='\000' && board[3][4]!='\000' && board[3][6]!='\000'&&board[3][5]=='\000'){
                    board[3][5]='A';counter_for_newturn=1;(*score1)++;}
                if (board[3][6]!='\000' && board[3][8]!='\000' && board[2][7]!='\000' && board[4][7]!='\000'&&board[3][7]=='\000'){
                    board[3][7]='A';counter_for_newturn=1;(*score1)++;}
                if (board[5][2]!='\000' && board[5][0]!='\000' && board[6][1]!='\000' && board[4][1]!='\000'&&board[5][1]=='\000'){
                    board[5][1]='A';counter_for_newturn=1;(*score1)++;}
                if (board[6][3]!='\000' && board[4][3]!='\000' && board[5][4]!='\000' && board[5][2]!='\000'&&board[5][3]=='\000'){
                    board[5][3]='A';counter_for_newturn=1;(*score1)++;}

                if (board[6][5]!='\000' && board[4][5]!='\000' && board[5][6]!='\000' && board[5][4]!='\000'&&board[5][5]=='\000'){
                    board[5][5]='A';counter_for_newturn=1;(*score1)++;}

                if (board[6][7]!='\000' && board[4][7]!='\000' && board[5][6]!='\000' && board[5][8]!='\000'&&board[5][7]=='\000'){
                    board[5][7]='A';counter_for_newturn=1;(*score1)++;}

                if (board[8][1]!='\000' && board[6][1]!='\000' && board[7][2]!='\000' && board[7][0]!='\000'&&board[7][1]=='\000'){
                    board[7][1]='A';counter_for_newturn=1;(*score1)++;}

                if (board[8][3]!='\000' && board[6][3]!='\000' && board[7][4]!='\000' && board[7][2]!='\000'&&board[7][3]=='\000'){
                    board[7][3]='A';counter_for_newturn=1;(*score1)++;}

                if (board[8][5]!='\000' && board[6][5]!='\000' && board[7][6]!='\000' && board[7][4]!='\000'&&board[7][5]=='\000'){
                    board[7][5]='A';counter_for_newturn=1;(*score1)++;}
                if (board[8][7]!='\000' && board[6][7]!='\000' && board[7][8]!='\000' && board[7][6]!='\000'&&board[7][7]=='\000'){
                    board[7][7]='A';counter_for_newturn=1;(*score1)++;}

                }
                else { if (board[0][1]!='\000' && board[1][0]!='\000' && board[1][2]!='\000' && board[2][1]!='\000'&&board[1][1]=='\000'){
                    board[1][1]='B';counter_for_newturn=1;(*score2)++;
                    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                }
                if (board[0][3]!='\000' && board[1][2]!='\000' && board[2][3]!='\000' && board[1][4]!='\000'&&board[1][3]=='\000'){
                    board[1][3]='B';counter_for_newturn=1;(*score2)++;
                }
                if (board[3][0]!='\000' && board[3][2]!='\000' && board[4][1]!='\000' && board[2][1]!='\000'&&board[3][1]=='\000'){
                    board[3][1]='B';counter_for_newturn=1;(*score2)++;
                }
                if (board[3][2]!='\000' && board[3][4]!='\000' && board[2][3]!='\000' && board[4][3]!='\000'&&board[3][3]=='\000'){
                    board[3][3]='B';counter_for_newturn=1;(*score2)++;
                }
                if (board[1][4]!='\000' && board[0][5]!='\000' && board[1][6]!='\000' && board[2][5]!='\000'&&board[1][5]=='\000'){
                    board[1][5]='B';counter_for_newturn=1;(*score2)++;}
                if (board[1][6]!='\000' && board[1][8]!='\000' && board[0][7]!='\000' && board[2][7]!='\000'&&board[1][7]=='\000'){
                    board[1][7]='B';counter_for_newturn=1;(*score2)++;}
                if (board[2][5]!='\000' && board[4][5]!='\000' && board[3][4]!='\000' && board[3][6]!='\000'&&board[3][5]=='\000'){
                    board[3][5]='B';counter_for_newturn=1;(*score2)++;}
                if (board[3][6]!='\000' && board[3][8]!='\000' && board[2][7]!='\000' && board[4][7]!='\000'&&board[3][7]=='\000'){
                    board[3][7]='B';counter_for_newturn=1;(*score2)++;}
                if (board[5][2]!='\000' && board[5][0]!='\000' && board[6][1]!='\000' && board[4][1]!='\000'&&board[5][1]=='\000'){
                    board[5][1]='B';counter_for_newturn=1;(*score2)++;}
                if (board[6][3]!='\000' && board[4][3]!='\000' && board[5][4]!='\000' && board[5][2]!='\000'&&board[5][3]=='\000'){
                    board[5][3]='B';counter_for_newturn=1;(*score2)++;}

                if (board[6][5]!='\000' && board[4][5]!='\000' && board[5][6]!='\000' && board[5][4]!='\000'&&board[5][5]=='\000'){
                    board[5][5]='B';counter_for_newturn=1;(*score2)++;}

                if (board[6][7]!='\000' && board[4][7]!='\000' && board[5][6]!='\000' && board[5][8]!='\000'&&board[5][7]=='\000'){
                    board[5][7]='B';counter_for_newturn=1;(*score2)++;}

                if (board[8][1]!='\000' && board[6][1]!='\000' && board[7][2]!='\000' && board[7][0]!='\000'&&board[7][1]=='\000'){
                    board[7][1]='B';counter_for_newturn=1;(*score2)++;}

                if (board[8][3]!='\000' && board[6][3]!='\000' && board[7][4]!='\000' && board[7][2]!='\000'&&board[7][3]=='\000'){
                    board[7][3]='B';counter_for_newturn=1;(*score2)++;}

                if (board[8][5]!='\000' && board[6][5]!='\000' && board[7][6]!='\000' && board[7][4]!='\000'&&board[7][5]=='\000'){
                    board[7][5]='B';counter_for_newturn=1;(*score2)++;}
                if (board[8][7]!='\000' && board[6][7]!='\000' && board[7][8]!='\000' && board[7][6]!='\000'&&board[7][7]=='\000'){
                    board[7][7]='B';counter_for_newturn=1;(*score2)++;}
                }
                return counter_for_newturn;
        }

void undo2(char bread[9][10],int arr[8]){
    int row1,col1;

                row1=arr[0];
                col1=arr[1];
                if(row1%2!=0){
                bread[row1-1][col1-1]='\000';}
                else if(row1%2==0){
                bread[row1-1][col1-1]='\000';}



}

void redo2(char bread[9][10],int arr[8]){
    int row1,col1;

                row1=arr[0];
                col1=arr[1];

                if(row1%2!=0){
                bread[row1-1][col1-1]='-';}
                else if(row1%2==0){
                bread[row1-1][col1-1]='|';}


}

int check_for_valid_hard(int row,int col,char bread1[9][10]){
    int condition=0;
                if((row%2!=0&&col%2!=0)||(row%2==0&&col%2==0)||(bread1[row-1][col-1]!='\000')||(row-1>9)||(col-1>9)){
                condition =0;
                }else{
                    condition++;
                }
                return condition;
}

int check_for_valid_inputs_hard(int row,int col,char bread1[9][10]){
    int condition=0;
                if((row%2!=0&&col%2!=0)||(row%2==0&&col%2==0)||(bread1[row-1][col-1]!='\000')||(row-1>9)||(col-1>9)){

                    printf("not valid enter correct value:\n");}
                else{
                    condition++;
                }
                return condition;
}

void get_bread_hard(char bread[9][10]){
    int i2,x2;
   for(i2=0;i2<9;i2=i2+2){
        for(x2=0;x2<9;x2=x2+2){
        bread[i2][x2]='o';
          }
        }
}

void draw_line_hard(int row2,int col2,char bread[9][10]){
                if(row2%2!=0){
                bread[row2-1][col2-1]='-';}
                else if(row2%2==0){
                bread[row2-1][col2-1]='|';
            }
}

void get_bread_empty_hard(char bread_hard[9][10]){
    int i2,x2;
   for(i2=0;i2<9;i2++){
        for(x2=0;x2<9;x2++){
        if (i2 % 2 == 0 && x2 % 2 ==0){
        bread_hard[i2][x2]='o';}
        else {
            bread_hard[i2][x2]='\000';
        }
          }
        }
}


void print_bread_hard(char bread2[9][10]){
    system("cls");
    blue();
    int row_number[9]={1,2,3,4,5,6,7,8,9};
    int col_number[9]={1,2,3,4,5,6,7,8,9};
    int i1,y1;
    blue();
            for(i1=0;i1<9;i1++){
                printf("  %d",row_number[i1]);
                }
                printf("\n");
                for(i1=0;i1<9;i1++){
                   blue(); printf("%d ",col_number[i1]); original();
                    for(y1=0;y1<9;y1++){
                        if (i1 == 1 && y1== 1 &&bread2[i1][y1]=='A'){
                         red();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==1 && y1 ==3&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (i1==3 && y1 ==1&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==3 && y1 ==3&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (i1 == 1 && y1== 5 &&bread2[i1][y1]=='A'){
                         red();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==1 && y1 ==7 &&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (i1==3 && y1 ==5&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==3 && y1 ==7&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (i1 == 5 && y1== 1 &&bread2[i1][y1]=='A'){
                         red();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==5 && y1 ==3&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                         else if (i1==5 && y1 ==5&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (i1==5 && y1 ==7&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==7 && y1 ==1&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (i1 == 7 && y1== 3 &&bread2[i1][y1]=='A'){
                         red();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==7 && y1 ==5&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (i1==7 && y1 ==7&&bread2[i1][y1]=='A'){
                            red();printf("%c  ",bread2[i1][y1]);original();
                            }
                            else if (i1==1 && y1 ==3&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==3 && y1 ==1&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==3 && y1 ==3&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==1 && y1 ==1&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==1 && y1 ==5&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==1 && y1 ==7&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==3 && y1 ==5&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==3 && y1 ==7&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==5 && y1 ==1&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==5 && y1 ==3&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==5 && y1 ==5&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==5 && y1 ==7&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==7 && y1 ==1&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==7 && y1 ==3&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }else if (i1==7 && y1 ==5&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                            else if (i1==7 && y1 ==7&&bread2[i1][y1]=='B'){
                            green();printf("%c  ",bread2[i1][y1]);original();
                        }
                        else if (bread2[i1][y1]=='o'){

                    bnafsigi();  printf("%c  ",bread2[i1][y1]); original();}
                      else {
                        printf("%c  ",bread2[i1][y1]);}}

                  printf("\n");
        }
}


