//Olivier Gabison - Rock Paper Scissors Game. I've been staring at my code and I'm unsure why it
//loops through the whole program after 1 input?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int wins_human = 0;
  int wins_comp = 0;

  for(int i = 0; i < 10; i++){

    if(wins_comp > 2){
      printf("The computer wins!\n");
      break;
    } else if (wins_human > 2){
      printf("The human wins!\n");
      break;
    }

    printf("Current Score - You: %d Computer: %d\n", wins_human, wins_comp);
    printf("Please choose either ROCK [R], PAPER [P], or Scissors[S]\n");
    char answer;
    scanf("\n%d",&answer);

    srand(time(0));
    int r = 1 + rand() % 3;
// 1: Rock
// 2: Paper
// 3: Scissors
    switch(answer){
      case 'R':
        if(r == 1){
          printf("Tie!\n");
          break;
        } else if(r == 2){
          printf("You Lose\n");
          wins_comp++;
          break;
        } else {
          printf("You Win!\n");
          wins_human++;
          break;
        }
        break;

        case 'P':
          if(r == 1){
            printf("You Win!\n");
            wins_comp++;
            break;
          } else if(r == 2){
            printf("Tie!\n");
            break;
          } else{
            printf("You Lose!\n");
            wins_human++;
            break;
          }
          break;

          case 'S':
            if(r == 1){
              printf("You Lose!\n");
              wins_comp++;
              break;
            } else if(r == 2){
              printf("You Win!\n");
              wins_human++;
              break;
            } else {
              printf("Tie!\n");
              break;
            }
            break;
            default:
              printf("Please input a valid choice\n");
    }
  }
  return 0;
}
