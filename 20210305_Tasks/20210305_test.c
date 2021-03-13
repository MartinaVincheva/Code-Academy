#include <stdlib.h>
#include <stdio.h>
    
    int maze[7][7]={{3,3,2,4,3,1,2},
                    {2,4,2,3,2,4,3},
                    {4,2,3,2,4,2,1},
                    {4,4,1,2,2,3,4},
                    {3,2,3,3,4,2,2},
                    {3,2,4,2,3,2,1},
                    {1,1,3,3,4,2,70,} };
    int pi[2]={0,0};
    int pj[2]={0,0};
    int piBackUp[2]={0,0};
    int pjBackUp[2]={0,0};
    char p1='A';/*тук бях сложил char p1=3, което вади сърце специален символ, но не на всеки му излизаше, същото бях направил и с p2*/
    char p2='B';
void funPrint(int maze[][7]){
    
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
      
        if(pi[1]==i && pj[1]==j && pi[0]==i && pj[0]==j){
            printf("%c%d%c\t",p1,maze[i][j],p2);
        }
        else if(pi[0]==i&&pj[0]==j){
            if(maze[i][j]==70){
                printf("%c%c",p1,'F');
            }
            else{
            printf("%c%d\t",p1,maze[pi[0]][pj[0]]);}
        }
         else if(pi[1]==i&&pj[1]==j){
              if(maze[i][j]==70){
                printf("%c%c",'F',p2);
            }else{
            printf("%d%c\t",maze[pi[1]][pj[1]],p2);}
        }
        
        else if(maze[i][j]=='F'){
            
            printf("%c\t",maze[i][j]);
        }
        
       
        
        else{
         printf("%d\t",maze[i][j]);}
    }
    printf("\n");
}
}
void funMain(int maze[][7]){
    char choice;
    int i;
    int player;
    
     
    
     printf("how manny players do you have\n");
    scanf("%d",&i);
    fflush(stdin);
    while(1){
    for( player=0;player<i;player++){
   
    printf("####### Instructions #######\n");
    printf("Press 1 to move down\nPress 2 to move right\nPress 3 to move left\nPress 4 to move up\n");
    printf("Be careful not to go out of borders because u will lose your turn\n");
    printf("######## Good luck! ########\n");
    printf("chose your path Traveler%d\n",player+1);
    scanf("%c",&choice);
     fflush(stdin);
    
    
    switch(choice){
    case '1':/*nadolu*/
        if((pi[player]+maze[pi[player]][pj[player]])>6){
            printf("Choose different path.You lose one turn be careful next time !\n");
        }
        else{
        pi[player]=pi[player]+maze[pi[player]][pj[player]];
        
        }

        break;
  
  
    case '2':/*nadqsno*/
    if(pj[player]+maze[pi[player]][pj[player]]>6){
        printf("Choose different path.You lose one turn be careful next time !\n");
    }   
    else{
        pj[player]=pj[player]+maze[pi[player]][pj[player]];}
        break;
   case '3':/*nalqvo*/
   if(pj[player]-maze[pi[player]][pj[player]]<0){
         printf("Choose different path.You lose one turn be careful next time !\n");}
         else{
        pj[player]=pj[player]-maze[pi[player]][pj[player]];
        }
        break;
    case '4':/*nagore*/
    if(pi[player]-maze[pi[player]][pj[player]]<0){
         printf("Choose different path.You lose one turn be careful next time !\n");
         
    }
    else{
       pi[player]=pi[player]-maze[pi[player]][pj[player]];
       }
        break;
    
    }
    
 funPrint(maze);
 if(pi[player]==6 && pj[player]==6){
  
      
      break;
  }
  printf("do you want to undo your turn.Press Y or N\n");
  scanf("%c",&choice);
  fflush(stdin);
  
  if(choice=='y'|| choice=='Y'){
      pi[player]=piBackUp[player];
      pj[player]=pjBackUp[player];
      funPrint(maze);
  }
  
  
  piBackUp[player]=pi[player];
  pjBackUp[player]=pj[player];
  }
  
    if(pi[player]==6 && pj[player]==6){
  
      printf("Traveler%d won the game\n",player+1);
      break;
  }
    }
}  


int main(){
    
    funPrint(maze);

    funMain(maze);
}