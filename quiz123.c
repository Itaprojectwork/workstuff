#include<stdio.h>
void sci();
void his();
void tech();
int count=0;
void main()
{
int sub;
char cont;
label:
printf("Welcome to Quisomanio!\n");
printf("Instructions:\nYou wil be quizzed on one subject of your choice.");
printf("\n3 questions with 4 options will be asked.");
printf("\nEach correct answer ");
printf(" carries 4 marks and 0 marks will be awarded for incorrect  answer");
printf("\nPICK A SUBJECt!\n1.Science\n2.History\n3.Technology\n");
scanf("%d",&sub);
switch(sub)
 {
   case 1:
      sci();
      break;
   case 2:
      his();
      break;
   case 3:
      tech();
      break;
   default:
      printf("\nYou have chosen the wrong subject");
      break;
 }
 printf("\nDo You Want To Continue?(Y/N): ");
 scanf(" %c",&cont);
 if(cont=='Y'||cont=='y')
   goto label;
 else
   exit(0);  
}
void sci()
{
 char option1,option2,option3,option4,option5;
 printf("\n1) Which of the following organisms breath from skin?\n");
 printf("A.Snake\nB.Earthworm\nC.Monkey\nD.Humans\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option1);
 if(option1=='B'||option1=='b')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : B\n");
 }
 printf("\n2) A passenger in a moving bus is thrown forward when the bus ");
 printf(" suddenly stops.This is explained by\nA.Netwon's first law\n");
 printf("B.Newton's second law\nC.Newton's third law\nD.By the principle ");
 printf(" of conservation of momentum\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option2);
 if(option2=='A'||option2=='a')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : A\n");
 }
 printf("\n3) Which of the following acquatic animals do not have gills\n");
 printf("A.Octopus\nB.Squid\nC.Clown Fish\nD.Whale\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option3);
 if(option3=='D'||option3=='d')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : D\n");
 }
 printf("Brass gets discoloured in air beacause of the presence of which of the following\n");
 printf("A.Oxygen\nB.Hydrogen sulphide\nC.carbon dioxide\nD.Nitrogen\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option4);
 if(option4=='B'||option4=='b')
 {
  printf("Correct Answer!\n");
  score=score+4;
 }
 else
 {
  printf("Wrong Answer!\n");
  printf("The correct answer is :B\n");
 }
 printf("How many bones are there in a human body?\n");
 printf("A.210\nB.298\nC.206\nD.200\n");
 printf("\nChoose the correct answer\n");
 scanf(" %c",&option5);
 if(option5=='C'||option5=='c')
 {
  printf("Correct Answer!\n");
  score=score+4;
 }
 else
 {
  printf("Wrong Answer!\n");
  printf("The correct answer is :C\n");
 }
 

 printf("\nThe total Score is : %d",score);
 
}
void his()
{
 char option1,option2,option3,option4;
 printf("\n1) What was the major cause of discontent among the soldiers ");
 printf("before the revolt  of1857?\nA.The religious cause\nB.Question of");
 printf(" promotion and pay\nC.Political cause\nD.None of these\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option1);
 if(option1=='B'||option1=='b')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
  {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : B\n");
 }
 printf("\n2)To which king does the Lion Capital at Sarnath belong \n");
 printf("A.Chandragupta \nB.Ashoka \nC.Kanishka \nD.Harshavardhan \n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option2);
 if(option2=='B'||option2=='b')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : B\n");
 }
 printf("\n3) Shivaji founded the Maratha kingdom by annexing the");
 printf(" territories of \nA.Bijapur \nB.Mughals \nC.Both (A) and (B)\n");
 printf("D.Bijapur Golconda and the Mughals\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option3);
 if(option3=='C'||option3=='c')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : C\n");
 }
 printf("\n4) The battle of plassey was fought in?");
 printf("\nA.1757 \nB.1782 \nC.1748 \nD.1764\n");
 printf("\nchoose the correct option: ");
 scanf(" %c",&option4);
 if(option4=='A'||option4=='a')
 {
  printf("correct answer!\n");
  score=score+4;
  }
 else
 {
  printf("wrong answer!\n");
  printf("correct answer is : A\n");
 }
 printf("\nThe total Score is : %d",score);
}
void tech()
{
 char option1,option2,option3,option4,option5;
 printf("\n1) A variable that holds the memory address of another ");
 printf(" object is called\nA.Memory variable\nB.Constant\nC.Pointer\n");
 printf("D.Integer\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option1);
 if(option1=='C'||option1=='c')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : C\n");
 }
 printf("\n2) Which of these is search engine? \nA.FTP\nB.Google\n");
 printf("C.Archie\nD.APRPANET\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option2);
 if(option2=='B'||option2=='b')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is :B\n");
 }
 printf("\n3) Which of these products is not made by the Apple Corporation?");
 printf("\nA.Imax\nB.iPhone\nC.iMac\nD.iPod\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option3);
 if(option3=='A'||option3=='a')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : A\n");
 }
 printf("\n4. who is father of c language? ");
 printf(" \nA.steve jobs\nB.james gosling\nC.dennis ritche\n");
 printf("D.rasmus lerdorf\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option4);
 if(option4=='C'||option4=='c')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is : C\n");
 }
 printf("\n5.which of the following cannot be a variable name in c? \nA.volatile\nB.true\n");
 printf("C.friend\nD.export\n");
 printf("\nChoose the correct answer: ");
 scanf(" %c",&option5);
 if(option5=='A'||option5=='a')
 {
  printf("Correct Answer!\n");
  score=score+4;
  }
 else
 {
 printf("Wrong Answer!\n");
 printf("Correct Answer is :A\n");
 }
 printf("\nThe total Score is : %d",score);
}