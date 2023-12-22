#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15;
	int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10,point11,point12,point13,point14,point15;
	int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010,point011,point012,point013,point014,point015;
//	int totalPoints ;
	
	printf("\n\n**********Welcome to the quiz game**********\n\n");
	
	printf("> Press 1 to start the game\n\n");
	printf("> Press 0 to quit the game\n\n");
	
	scanf("%d",&i);
	
	if(i==1){
		printf("The game has started\n**********First Round**********\n\n");
		printf("Each question carries 5 Marks on correct answer.\n");
		printf("If you answer all Five questions correctly then only you will go to Second Round.\n");
		printf("----------------------------------------------------\n\n");
	} else if(i==0){
		printf("The game has ended\n\n");
	} else{
		printf("Invalid number press");
	}
	
	if(i==1){
		printf("1)  What does CPU stand for?\n\n");
		printf("1) Central Processing Unit\n");
		printf("2) Computer Processing Unit\n");
		printf("3) Central Processor Unit\n");
		printf("4) Computer Processor Unit\n");
		
		printf("Enter Your Answer:- ");
		scanf("%d",&ans1);
		
		if(ans1==1){
			printf("Correct Answer\n");
			point1=5;
//			totalPoints += point1;
			printf("You have scored %d point in this question\n\n",point1);
		} else{
			printf("Wrong Answer\n");
			point1 = 0;
			printf("You have scored %d point in this question \n",point1);
		}
		
		
		printf("2) Which one is the first web browser invented in 1990?\n\n");
		printf("1) Internet Explorer\n");
		printf("2) Mosaic\n");
		printf("3) Mozila\n");
		printf("4)Nexus\n");
		
		printf("Enter Your Answer:- \n");
		scanf("%d",&ans2);
		
		if(ans2==4){
			printf("Correct Answer\n");
			point2=5;
//			totalPoints += point2;
			printf("You have scored %d pointin this question\n",point2);
		} else{
			printf("Wrong Answer\n");
			point2 = 0;
			printf("You have scored %d point in this question\n",point2);
		}
		
		
		printf("3) Which programming language is commonly used for web development?\n\n");
		printf("1) Java\n");
		printf("2) HTML\n");
		printf("3) C++\n");
		printf("4) Python\n");
		
		printf("Enter Your Answer:- \n");
		scanf("%d",&ans3);
		
		if(ans3==2){
			printf("Correct Answer\n");
			point3=5;
//			totalPoints += point3;
			printf("You have scored %d point in this question\n\n",point1);
		} else{
			printf("Wrong Answer\n");
			point3 = 0;
			printf("You have scored %d point in this question\n",point3);
		}
		
		
		
		
		printf("4) What does HTML stand for?\n\n");
		printf("1)  High-Level Text Markup Language\n");
		printf("2)  HyperText Markup Language\n");
		printf("3)  Hyperlink and Text Markup Language\n");
		printf("4) 	Hyper Transfer Markup Language\n");
		
		printf("Enter Your Answer:- \n");
		scanf("%d",&ans4);
		
		if(ans4==2){
			printf("Correct Answer\n");
			point4=5;
//			totalPoints += point4;
			printf("You have scored %d point in this question\n",point1);
		} else{
			printf("Wrong Answer\n");
			point4 = 0;
			printf("You have scored %d point in this question\n",point4);
		}
		
		
		
		printf("5) Which of the following is not a database management software?\n\n");
		printf("1) Mysql\n");
		printf("2) MongoDB\n");
		printf("3) Cobal\n");
		printf("4) Sybase\n");
		
		printf("Enter Your Answer:- \n");
		scanf("%d",&ans5);
		
		if(ans5==3){
			printf("Correct Answer\n");
			point5=5;
//			totalPoints += point5;
			printf("You have scored %d point in this question\n",point1);
		} else{
			printf("Wrong Answer\n");
			point5 = 0;
			printf("You have scored %d point in this question\n",point5);
		}
		
		int totalPoints1 = point1+point2+point3+point4+point5;
		printf("Total Points in the First Round: %d\n", totalPoints1);



			if(totalPoints1<25){
				printf("Sorry you didn't qualify for next round.");
			}else if(totalPoints1 == 5 * 5) {
            printf("Congratulations! You answered all questions correctly. Proceeding to the second round.\n");
            
			 // Second Round Questions
			printf("\n\n**********Second Round**********\n\n");
			printf("Each question carries 10 Marks on correct answer.\n");
			printf("If you answer atleast Four questions correctly then only you will go to Third Round.\n");
			printf("----------------------------------------------------\n\n");

			printf("6) What is the binary representation of the decimal number 25?\n");
			printf("1) 11111\n");
			printf("2) 10100\n");
			printf("3) 10001\n");
			printf("4) 11001\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans6);

			if (ans6 == 4) {
				printf("Correct Answer\n");
				point6 = 10;
//				totalPoints += point6;
				printf("You have scored %d point in this question\n\n", point6);
			} else {
				printf("Wrong Answer\n");
				point6 = 0;
				printf("You have scored %d point in this question\n\n", point6);
			}

			printf("7)  Which protocol is used for secure communication over a computer network?\n");
			printf("1) FTP\n");
			printf("2) HTTP\n");
			printf("3) HTTPS\n");
			printf("4) SMTP\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans7);

			if (ans7 == 3) {
				printf("Correct Answer\n");
				point7 = 10;
//				totalPoints += point7;
				printf("You have scored %d point in this question\n\n", point7);
			} else {
				printf("Wrong Answer\n");
				point7 = 0;
				printf("You have scored %d point in this question\n\n", point7);
			}
			

			printf("8)  What is the purpose of DNS (Domain Name System)?\n");
			printf("1) To encrypt data transmission\n");
			printf("2) To convert domain names to IP addresses\n");
			printf("3) To compress data files\n");
			printf("4) To store website content\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans8);

			if (ans8 == 2) {
				printf("Correct Answer\n");
				point8 = 10;
//				totalPoints += point8;
				printf("You have scored %d point in this question\n\n", point8);
			} else {
				printf("Wrong Answer\n");
				point8 = 0;
				printf("You have scored %d point in this question\n\n", point8);
			}


			printf("9) Which of the following is a high-level programming language?\n");
			printf("1) Assembly language\n");
			printf("2) Machine language\n");
			printf("3) Python\n");
			printf("4) Binary code\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans9);

			if (ans9 == 3) {
				printf("Correct Answer\n");
				point9 = 10;
//				totalPoints += point9;
				printf("You have scored %d point in this question\n\n", point9);
			} else {
				printf("Wrong Answer\n");
				point9 = 0;
				printf("You have scored %d point in this question\n\n", point9);
			}


			printf("10)  Which networking device operates at the Data Link Layer of the OSI model?\n");
			printf("1) Router\n");
			printf("2) Switch\n");
			printf("3) Hub\n");
			printf("4) Bridge\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans10);

			if (ans10 == 2) {
				printf("Correct Answer\n");
				point10 = 10;
//				totalPoints += point10;
				printf("You have scored %d point in this question\n\n", point10);
			} else {
				printf("Wrong Answer\n");
				point10 = 0;
				printf("You have scored %d point in this question\n\n", point10);
			}
			
			int totalPoints2 = totalPoints1+point6+point7+point8+point9+point10;
			printf("Total Points in the Second Round: %d\n", totalPoints2);
			


			if(totalPoints2<65){
				printf("Sorry you didn't qualify for next round.");
			}else if (totalPoints2 >= 65) {
            printf("Congratulations! You answered required no. of questions correctly. Proceeding to the Third round.\n");
            
			 // Third Round Questions
			printf("\n\n**********Third and Last Round**********\n\n");
			printf("Each question carries 20 Marks on correct answer.\n");
			printf("----------------------------------------------------\n\n");

			printf("11) What is the purpose of the SQL language?\n");
			printf("1) Software Quality Language\n");
			printf("2) Structured Query Language\n");
			printf("3) System Questioning Language\n");
			printf("4) Simple Query Language\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans11);

			if (ans11 == 2) {
				printf("Correct Answer\n");
				point11 = 20;
//				totalPoints += point11;
				printf("You have scored %d point in this question\n\n", point11);
			} else {
				printf("Wrong Answer\n");
				point11 = 0;
				printf("You have scored %d point in this question\n\n", point11);
			}

			printf("12)  What is the primary function of a firewall in computer networks?\n");
			printf("1) To speed up internet connections\n");
			printf("2) To detect and remove viruses\n");
			printf("3) To prevent unauthorized access\n");
			printf("4) To store and manage data\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans12);

			if (ans12 == 3) {
				printf("Correct Answer\n");
				point12 = 20;
//				totalPoints += point12;
				printf("You have scored %d point in this question\n\n", point12);
			} else {
				printf("Wrong Answer\n");
				point12 = 0;
				printf("You have scored %d point in this question\n\n", point12);
			}
			

			printf("13)  Which programming paradigm emphasizes the use of functions and avoids changing state and mutable data?\n");
			printf("1) Object-oriented programming\n");
			printf("2) Imperative programming\n");
			printf("3) Functional programming\n");
			printf("4) Procedural programming\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans13);

			if (ans13 == 3) {
				printf("Correct Answer\n");
				point13 = 20;
//				totalPoints += point13;
				printf("You have scored %d point in this question\n\n", point13);
			} else {
				printf("Wrong Answer\n");
				point13 = 0;
				printf("You have scored %d point in this question\n\n", point13);
			}


			printf("14) What is the purpose of a virtual machine in computing?\n");
			printf("1) To simulate a physical computer\n");
			printf("2) To create virtual reality environments\n");
			printf("3) To speed up data transmission\n");
			printf("4) To encrypt network traffic\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans14);

			if (ans14 == 1) {
				printf("Correct Answer\n");
				point14 = 20;
//				totalPoints += point14;
				printf("You have scored %d point in this question\n\n", point14);
			} else {
				printf("Wrong Answer\n");
				point14 = 0;
				printf("You have scored %d point in this question\n\n", point14);
			}


			printf("15)  What is the purpose of the Git version control system?\n");
			printf("1) To manage and track changes in source code\n");
			printf("2) To optimize database queries\n");
			printf("3) To encrypt email communications\n");
			printf("4) To create virtual environments\n");
			printf("Enter Your Answer:- ");
			scanf("%d", &ans15);

			if (ans15 == 1) {
				printf("Correct Answer\n");
				point15 = 20;
//				totalPoints += point15;
				printf("You have scored %d point in this question\n\n", point15);
			} else {
				printf("Wrong Answer\n");
				point15 = 0;
				printf("You have scored %d point in this question\n\n", point15);
			}
			
			int totalPoints3 = totalPoints2+point11+point12+point13+point14+point15;
			printf("Total Points in the Third Round: %d\n", totalPoints3);
			printf("You Won this troffy.\n");
			
								int rows1 = 10; 
								int rows2 = 8; 
								int i, j, k;
					
								
								for (i = 1; i <= rows1; i++) {
									
									for (k = 1; k < i; k++) {
										printf("  ");
									}
					
									
									for (j = i; j <= 2 * (rows1 - i) + 1; j++) {
										printf("* ");
									}
					
									printf("\n");
								}


								for (i = 1; i <= rows2; i++) {
									if (i == 1 || i == rows2) {
										for (j = 1; j <= 25; j++) {
											printf("*");
										}
									} else {
										printf("*");
										for (j = 2; j <= 13; j++) {
											printf(" ");
										}
										printf("*");
									}
					
									printf("\n");
								}

            
        }
            
        }
    
		
	}
	
	
	
	return 0;
}
