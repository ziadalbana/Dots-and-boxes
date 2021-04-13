
//funcion to remove letter after redo
int cheack_of_end_after_redo(char board[5][6]){
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

}//function to check for completing a square and print letter and increase score and give new turn
int cheack_of_end(int player,int *score1 , int *score2 ,char board[5][6]){
    int counter_for_newturn=0;
    if (player == 1){
                if (board[0][1]!='\000' && board[1][0]!='\000' && board[1][2]!='\000' && board[2][1]!='\000'&&board[1][1]=='\000'){
                    board[1][1]='A';counter_for_newturn=1;(*score1)++;
                }
                if (board[0][3]!='\000' && board[1][2]!='\000' && board[2][3]!='\000' && board[1][4]!='\000'&&board[1][3]=='\000'){
                    board[1][3]='A';counter_for_newturn=1;(*score1)++;
                }
                if (board[3][0]!='\000' && board[3][2]!='\000' && board[4][1]!='\000' && board[2][1]!='\000'&&board[3][1]=='\000'){
                    board[3][1]='A';counter_for_newturn=1;(*score1)++;
                }
                if (board[3][2]!='\000' && board[3][4]!='\000' && board[2][3]!='\000' && board[4][3]!='\000'&&board[3][3]=='\000'){
                    board[3][3]='A';counter_for_newturn=1;(*score1)++;
                }}
                else { if (board[0][1]!='\000' && board[1][0]!='\000' && board[1][2]!='\000' && board[2][1]!='\000'&&board[1][1]=='\000'){
                    board[1][1]='B';counter_for_newturn=1;(*score2)++;
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
                }
                return counter_for_newturn;
}
//get the grid for easy after undo
void undo(char bread[5][6],int arr[8]){
    int row1,col1;
                row1=arr[0];
                col1=arr[1];
                if(row1!=0){
                bread[row1-1][col1-1]='\000';}
                else if(row1%2==0){
                bread[row1-1][col1-1]='\000';}




}
//get the grid for redo
void redo(char bread[5][6],int arr[8]){
    int row1,col1;

                row1=arr[0];
                col1=arr[1];
                if(row1%2!=0){
                bread[row1-1][col1-1]=196;}
                else if(row1%2==0){
                bread[row1-1][col1-1]='|';}


}

//check if the input is valid and return 1if it si vaild
int check_for_valid(int row,int col,char bread1[5][6]){
    int condition=0;
                if((row%2!=0&&col%2!=0)||(row%2==0&&col%2==0)||(bread1[row-1][col-1]!='\000')||(row-1>5)||(col-1>5)){
                    condition=0;

                }else{
                    condition++;
                }
                return condition;
}

int check_for_valid_inputs(int row,int col,char bread1[5][6]){
    int condition=0;
                if((row%2!=0&&col%2!=0)||(row%2==0&&col%2==0)||(bread1[row-1][col-1]!='\000')||(row-1>5)||(col-1>5)){

                    printf("not valid enter correct value:\n");}
                else{
                    condition++;
                }
                return condition;
}

void get_bread(char bread[5][6]){
    int i2,x2;
   for(i2=0;i2<5;i2=i2+2){
        for(x2=0;x2<5;x2=x2+2){
        bread[i2][x2]='o';
          }
        }
}
void draw_line(int row2,int col2,char bread[5][6]){
                if(row2%2!=0){
                bread[row2-1][col2-1]=196;}
                else if(row2%2==0){
                bread[row2-1][col2-1]='|';
            }
}
void get_bread_empty(char bread[5][6]){
    int i2,x2;
   for(i2=0;i2<5;i2++){
        for(x2=0;x2<5;x2++){
        if (i2 % 2 == 0 && x2 % 2 ==0){
        bread[i2][x2]='o';}
        else {
            bread[i2][x2]='\000';
        }
          }
        }
}
void compare_score(int score3,int score4){

  if (score3> score4){
        red();
        printf("\n                             -------> Player1 Wins <--------");
  original();
    } else if ( score3 < score4){
        green();
        printf("\n                              -------> Player2 Wins <--------");
        original();}
    else {
        yellow();
            printf("\n                          -------> Draw <--------");
            original();}
        }
//to print grid
void print_bread(char bread2[5][6]){
    system("cls");
    blue();
    int row_number[5]={1,2,3,4,5};
    int col_number[5]={1,2,3,4,5};
    int i1,y1;
            for(i1=0;i1<5;i1++){
                printf("  %d",row_number[i1]);
                }
                printf("\n");
                for(i1=0;i1<5;i1++){
                   blue(); printf("%d ",col_number[i1]); original();

                    for(y1=0;y1<5;y1++){
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
                        else if (bread2[i1][y1]=='o'){
                       bnafsigi();printf("%c  ",bread2[i1][y1]);original();}

                 else {
                 original(); printf("%c  ",bread2[i1][y1]);}}
                  printf("\n");
        }
}



