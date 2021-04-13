
int check_for_valid_inputs_for_computer(int row4,int col4,char bread[5][6]){
register int condition;
                if((row4%2!=0&&col4%2!=0)||(row4%2==0&&col4%2==0)||(bread[row4-1][col4-1]!='\000')){
                 condition=0;}
                else{
                    condition++;
                }
                return condition;
}
int check_for_valid_inputs_for_computer_hard(int row4,int col4,char bread[9][10]){
register int condition;
                if((row4%2!=0&&col4%2!=0)||(row4%2==0&&col4%2==0)||(bread[row4-1][col4-1]!='\000')){
                 condition=0;}
                else{
                    condition++;
                }
                return condition;
}



void compare_score_c(int score3,int score4){

  if (score3> score4){
        red();
        printf("\n                               -------> Player1 Wins <--------");
  original();
    } else if ( score3 < score4){
        green();
        printf("\n                               -------> Computer Wins <--------");
        original();}
    else {
        yellow();
            printf("\n                             -------> Draw <--------");
            original();}
        }


