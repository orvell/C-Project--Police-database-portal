#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
	struct node
	{
		float s1,s2,s3;
		struct node * next;
	};
	int day=1;
	int month=0,year=0;
	int counter1=0;
	int x=0;
	struct node* head=NULL;
		struct node *insert (struct node *head)           
		{
			
			
			struct node *newnode;
			struct node *tmp;
			printf("\n\n\n");
			printf(" Date : %d/%d/%d \t",day++,month,year);
			newnode=(struct node*)malloc(sizeof(struct node));
			if(head==NULL)
			{
			newnode->next=NULL;
			printf("\n Enter the Fine collected in VASAI BRANCH:\t");
			scanf(" %f",&newnode->s1);
			printf("\n Enter the Fine collected in NAIGAON BRANCH:\t");
			scanf(" %f",&newnode->s2);
			printf("\n Enter the Fine collected in NALASOPARA BRANCH:\t");
			scanf(" %f",&newnode->s3);

			head=newnode;
			}
		else
			{
			tmp=head;
			while(tmp->next!=NULL)
			{
			tmp=tmp->next;
			}
		tmp->next=newnode;
		newnode->next=NULL;
		printf("\n Enter the Fine collected in VASAI BRANCH:\t");
		scanf(" %f",&newnode->s1);
		printf("\n Enter the Fine collected in NAIGAON BRANCH:\t");
		scanf(" %f",&newnode->s2);
		printf("\n Enter the Fine collected in NALASOPARA BRANCH:\t");
		scanf(" %f",&newnode->s3);
		tmp->next=newnode;
			}
			x=x+1;
	counter1++;

	return head;
		}




	void print(struct node * head2)                                                                            
	{
		int day=1;
		struct node *tmp;
		tmp=head2;
		printf("\n\t\t\t\t-------------------- FINE DATABASE OF VASAI - VIRAR TRAFFIC POLICE --------------------\n");
		
		while(tmp->next!=NULL)
		{
			printf("\n");
			printf("Date : %d/%d/%d \t",day++,month,year);
			printf("VASAI BRANCH : Rs.%f \t",tmp->s1);
			printf("\tNAIGAON BRANCH : Rs.%f \t",tmp->s2);
			printf("\tNALASOPARA BRANCH Rs.%f \t",tmp->s3);
			tmp=tmp->next;
		}
		printf("\n");
		printf("Date : %d/%d/%d \t",day++,month,year);
			printf("VASAI BRANCH : Rs.%f \t",tmp->s1);
			printf("\tNAIGAON BRANCH : Rs.%f \t",tmp->s2);
			printf("\tNALASOPARA BRANCH : Rs.%f \t",tmp->s3);
		printf("\n");
	}
struct node average(struct node *head)
 {
	 float average_branch1=0,average_branch2=0,average_branch3=0,total1=0,total2=0,total3=0,grandtotal=0 ;
	struct node *temp;
	temp=head;
	
	while(temp!=NULL)
	{
		average_branch1=average_branch1 + temp->s1;
		average_branch2=average_branch2 + temp->s2;
		average_branch3=average_branch3 + temp->s3;
		temp=temp->next;		
	}
	total1=(average_branch1/x);
	total2=(average_branch2/x);
	total3=(average_branch3/x);
	grandtotal=(total1+total2+total3)/3;
	printf("\n\n\n THE AVERAGE COLLECTION OF VASAI BRANCH : %f\n",total1);
	printf("\n THE AVERAGE COLLECTION OF NAIGAON BRANCH : %f\n",total2);
	printf("\n THE AVERAGE COLLECTION OF NALASOPARA BRANCH : %f\n",total3);
	printf("\n THE TOTAL AVERAGE COLLECTION  OF ALL BRANCHS : %f\n",grandtotal);
 }


struct node contribution(struct node *head)
 {
	 float branch1=0,branch2=0,branch3=0,total1=0,total2=0,total3=0,total=0;
	struct node *temp;
	temp=head;
	
	while(temp!=NULL)
	{
		branch1=branch1 + temp->s1;
		branch2=branch2 + temp->s2;
		branch3=branch3 + temp->s3;
		temp=temp->next;		
	}
	total=branch1+branch2+branch3;
	total1=(branch1/total)*100;
	total2=(branch2/total)*100;
	total3=(branch3/total)*100;
	
	printf("\n\n\n THE CONTRIBUTION  OF VASAI BRANCH : %f",total1);printf(" %%\n");
	printf("\n THE CONTRIBUTION OF NAIGAON BRANCH : %f",total2);printf(" %%\n");
	printf("\n THE CONTRIBUTION OF NALASOPARA BRANCH : %f",total3);printf(" %\n");
	
 }

 
		void main()
		{

			
			int x;
			char username1[]="orvell",username2[]="clint", password1[]="8671",password2[]="8670", user[8], p[4];
   		    int n=1, a,b,c,d;
printf("\n \n \n ");
printf("\t\t\t\t\t     *****       *****  *****       *****   **********      *********               \n");
printf("\t\t\t\t\t      *****     *****    *****     *****    *****   ****    ************            \n");
printf("\t\t\t\t\t       *****   *****      *****   *****     *****    ****   ***     ******           \n");
printf("\t\t\t\t\t        ***** *****        ***** *****      *****   ****    ***       *****          \n");
printf("\t\t\t\t\t         *********          *********       **********      ***       *****           \n");
printf("\t\t\t\t\t          *******            *******        *****           ***     ******            \n");
printf("\t\t\t\t\t           *****              *****         *****           ************               \n");
printf("\t\t\t\t\t            ***                ***          *****           *********                  \n");
printf("\n \n \n");
printf("\t\t\t\t\t\t NOTE::  ONLY OFFICIALS WITH VALID LOGIN CAN ACCESS THE DATABASE.");
printf("\n \n \n");

	do
    {
    	printf("\n -----LOGIN TO ACCES THE DATABASE-----\n");
         printf("\n USERNAME: ");
         scanf("%s", &user);

         printf("\n PASSWORD: ");
         scanf("%s", &p);

         a=strcmp(user, username1);
         b=strcmp(p, password1);
         c=strcmp(user, username2);
         d=strcmp(p, password2);

         if((a==0 && b==0)||(c==0 && d==0))
         {
           printf("\nSUCCESSFULLY LOGGED IN\n\n");


			printf("\n\n ENTER MONTH: \t");
			scanf("%d",&month);
			printf("\n ENTER YEAR: \t");
			scanf("%d",&year);
			if(month>=1 && month <=12)
			{
				do{
					printf("\n\n\n PRESS 1 TO MAKE NEW ENTRY\n PRESS 2 TO VIEW CURRENT DATABASE\n PRESS 3 TO FIND AVERAGE COLLECTION\n PRESS 4 TO FIND PERCENT CONTRIBUTION OF EACH BRANCH \n PRESS 5 TO EXIT\n\n ENTER YOUR CHOICE : ");
					scanf("%d",&x);
						switch (x)
						{
							case 1:if(month==1 || month==3 || month==5 || month==7 ||month==8 || month==10 || month==12 )
									{
									if(counter1!=31)
										{
											head= insert(head);
										}
									if(counter1==31)
										printf(" SELECT NEXT MONTH\n ALL ENTERIES FOR THIS MONTH ARE COMPLETED\n");
										counter1=0;
									}
									else if(month==4 || month==6 || month==9 || month==11  )
									{
									if(counter1!=30)
										{
											head= insert(head);
										}
									if(counter1==30)
										printf(" SELECT NEXT MONTH\n ALL ENTERIES FOR THIS MONTH ARE COMPLETED\n");
									counter1=0;
									}
									else if(month==2 )
									{
									if(counter1!=28)
										{
											head= insert(head);
										}
									if(counter1==28)
										printf(" SELECT NEXT MONTH\n ALL ENTERIES FOR THIS MONTH ARE COMPLETED\n");
										counter1=0;
									}


									break;
							case 2:	
									print(head);  
									break;
							case 3:	average(head);
								break;
							case 4:	contribution(head);
								break;	
							case 5:	printf("\n --------EXITTING MENU---------\n");
									break;
						}
					}while(x!=5);
				
				
			}
			else
				{
					printf("************PLEASE ENTER VALID MONTH AND RERUN THE APPLICATION************" );
				}
			break;
		}
		else
          {
           printf("\nWrong Password or username, try again", 5-n);
            
            n++;
        	}

         if(n>5)
         {
          printf("\n********************ACCESS DENIED********************");
          getch();
          }

       }while (n<=5);

		}
		
		
		

