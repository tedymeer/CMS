#include <stdio.h>
#include<conio.h>
void login(void);
void database(char[],char[]);
void HOMESCREEN(void);
void ORDERS(void);
void online(void);
void deals(void);
void items(void);
void Confirm(int);
void Dinner(int);
void Lunch(int);
void Breakfast(int);
void MENU (void);
int readfile(void);
void writefile(int);
int d=0;

int main()

{
	system("color c");
    printf("\n\t\t\t\t\t\tWELCOME TO FTB CAFETERIA\n\n");
	sleep(2);    
    login();
}
void login(void)
{  	system("cls");
	 char ID[10];
    char PASS[20];
    printf("\n\t\t\t\t\tENTER ID:");
    gets(ID);
   	//getch();
    printf("\n\t\t\t\t\tENTER PASSWORD:");
    gets(PASS);
    
    database(ID,PASS);
     
}
void database(char ID[10],char PASS[20])
{ char  a,b,j;

    if(strcmp(ID,"TAHA")==0 && strcmp(PASS,"hello")==0)
{    
    
        system("cls");
		sleep(1);
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n\n\t\t\t\t\t\t\t");
    for( j=0;j<=6;j++){
        printf("*");
        sleep(1);
    }
        system("cls");
    HOMESCREEN();
}
    else
{
        printf("\n\nENTER AGAIN\n");
    login();//agar galat hoga tu again call krlay ga

    
}
}
void HOMESCREEN(void){
    int p;
    system("cls");
    system("color c");
    printf("\n\t\t\tWELCOME TO PRESTON CAFETERIA\n\t\t\t============================\n");
   // getch(); //it hold the screen till user enter any key
    printf("\t\t\t\t1-MENU\n");
    printf("\t\t\t\t2-ORDERS\n");
    printf("\t\t\t\t3-ITEMS\n");
    printf("\t\t\t\t4-RESERVATION\n");
    printf("\t\t\t\t5-DEAL\n");
    printf("\t\t\t\t6-EXIT\n");
    scanf("%d",&p);
    system("cls");
    if(p==2){
        system("cls");
        ORDERS();
    }
    else if(p==3){
        system("cls");
        items();
    }
    else if(p==5){
        system("cls");
        deals();
        
    }
    else if(p==6)
    {
    	system("cls");
    	login();
    	
	}
	else if(p==1)
    {
    	system("cls");
    	MENU();
    	
	}
	else if(p==4)
	{	int a;
		   system("cls");
            a=readfile();
    if(a==0){
        a=readfile();
    }
    if(a!=0){
        writefile(a);
    }

	}
}
void ORDERS(void)
{int a;
    printf("\t\t\t\t1-Online Order\n\n\t\t\t\t2-TAKEAWAY\n\t\t\t\t3-EXIT\n");
    scanf("%d",&a);
    system("cls");
    if(a==1){
        online();
    }
    else if(a==2){
        items();
    printf("\n\nPAY YOUR BILL\n\n");
    }
    else if(a==3){
    	HOMESCREEN();
	}
}
void online(void)
{	int a,b;
	b=12345;
    printf("Enter Card No:" );
    scanf("%d",&a);
    if(a==b){
    
        deals();
    }
    
}
void deals(void){
    int a,b;
    //system("color bc");
    printf("\n\t\t\tBUMPER DEALS\n\t\t\t==============\n");
    printf("1-DEAL NO 1\n2-DEAL NO 2\n3-DEAL NO 3\n4-EXIT TO MAIN MENU");
scanf("%d",&a);
system("cls");
if(a==1)
{
    printf("BURGER + PEPSI + CHIPAS = 45$");
printf(" \n1-ORDER\n2-RETURN TO PREVIUOS PAGE ");
scanf("%d",&b);
if(b==1){
	d=d+45;
    Confirm(d);
}
else 
{
system("cls");
deals();
}
}
else if(a==2){
	d=d+50;
    printf("ZINGER BURGER + OREO SHAKE = 50$");
printf(" \n1-ORDER\n2-RETURN TO PREVIOUS PAGE\n3-EXIT to main menu  ");
scanf("%d",&b);
    if(b==1){
	Confirm(d);
	
}
else if(b==2)
{
system("cls");
deals();
}
else if(b==3)
{
	system("cls");
	HOMESCREEN();
}
}
else if(a==3){
	d=d+70;
    printf("ICECREAM + NUGGETS + BROAST = 70$");
    printf(" \n1-CONFIRM ORDER\n2-Return to previous\n3-EXIT to main menu ");
scanf("%d",&b);
    if(b==1){
   Confirm(d);
}
else if(b==2)
{
system("cls");
deals();
}
else if(b==3){
	system("cls");
	HOMESCREEN();
} 
}
else if(a==4)
{
	system("cls");
	HOMESCREEN();
}
}
void items(void){
    int a,b,c;
    system("cls");
    printf("WE HAVE VARIETY OF ITEMS\nCHOOSE SOMETHING\n1-LUNCH\n2-BREAKFAST\n3-DINNER\n4-EXIT ");
    scanf("%d",&a);
    if(a==1){
    		system("cls");
        printf("\t\t\t\tLunch\n\t\t\t\t======\n\n\n");
        printf("1-Aaloo Gosht = 500 $\n2-Bhindi= 250 $\n3-Qourma = 175 $");
        scanf("%d",&b);
        	if(b==1)
	{
		Lunch(1);
	}
	else if(b==2)
	{
		Lunch(2);
	}
	else if(b==3)
	{
		Lunch(3);
	}
	else{
	}
 			}
else if(a==2)
{
	system("cls");
        printf("\t\t\t\tBreakfast\n\t\t\t\t======\n\n\n");
        printf("1-Halwa puri = 200 $\n2-Anda paratha = 45$\n3-Paaye = 70 $");
        scanf("%d",&b);
        	if(b==1)
	{
		Breakfast(1);
	}
	else if(b==2)
	{
		Breakfast(2);
	}
	else if(b==3)
	{
		Breakfast(3);
	}
	else{
	}
}
else if(a==3)
{	printf("\t\t\t\tDinner\n\t\t\t\t======\n\n\n");
	printf("1-BIRYANI = 30 $\n2-NIHARI =60$\n3-PULAO=90 $");
	scanf("%d",&b);
	if(b==1)
	{
		Dinner(1);
	}
	else if(b==2)
	{
		Dinner(2);
	}
	else if(b==3)
	{
		Dinner(3);
	}
	else{
	}
}
else if(a==4)
{
	system("cls");
	HOMESCREEN();
}
else{

system("cls");
items();
}
}
void Confirm(int d){
	system("cls");
                printf("PAY YOUR BILL =%d ",d);    
                
    printf("ORDER PLACED \nYOUR ORDER WILL ARRIVE IN 15 MINS\nTHANK-YOU FOR CHOOSING PRESTON CAFE ");
}
void Dinner(int b)
{	int c;
	if(b==1)
{
	b=30;
}
else if(b==2)
{
	b=60;
}
else if(b==3)
{
	b=90;
}
else
{
	printf("Enter Right Number ");
}
		system("cls");
		d=d+b;
		printf("recent bill = %d\n",d);
		printf("1-Order again\n");
		printf("2-Finish ordering");
		scanf("%d",&c);
		if(c==1)
		{
			system("cls");
			items();
		}
		else
		{
			Confirm(d);
		}
}
void Lunch(int b)
{	int c;	
	if(b==1)
{
	b=500;
}
else if(b==2)
{
	b=250;
}
else if(b==3)
{
	b=175;
}
else
{
	printf("Enter Right Number ");
}

	  system("cls");
                d=d+b;
                printf("recent bill = %d\n",d);
			printf("1-Order again\n");
			printf("2-Finish ordering\n");
                scanf("%d",&c);
                
                if(c==1){
                    system("cls");
                items();    
                }
                else
				{
                   Confirm(d);
				}
}
void Breakfast(int b)
{	int c;
		if(b==1)
{
	b=200;
}
else if(b==2)
{
	b=45;
}
else if(b==3)
{
	b=70;
}
else
{
	printf("Enter Right Number ");
}

	  system("cls");
                d=d+b;
                printf("recent bill = %d\n",d);
			printf("1-Order again\n");
			printf("2-Finish ordering\n");
                scanf("%d",&c);
                
                if(c==1){
                    system("cls");
                items();    
                }
                else
				{
                   Confirm(d);
				}
}
void MENU(void)
{
	int x,finish,t,i=1;
	char a[20],edit[20];
	FILE *p;
	system("cls");
	printf("To edit the menu press 0\nTo view the menu press 1\nPress 2 to go back to main screen ");
	scanf("%d",&x);
	if(x==0)
	{
	
	while(finish!=2)
	{
	system("cls");
	p=fopen("taha.txt","r");
	while(!feof(p))
	{
	fgets(a,81,p);
	printf("-%s\n",a);
	}
	fclose(p);
	p=fopen("taha.txt","a");
	printf("Enter items you want to add");
	gets(edit);
	fprintf(p,"\n%s",edit);
	printf("\nPress 2 to finish editing ");
	scanf("%d",&finish);
	}
	fclose(p);
	MENU();
	}
	else if(x==1)
	{
	system("cls");
	p=fopen("taha.txt","r");
	while(!feof(p))
	{
	fgets(a,81,p);
	printf("%d-%s\n",i,a);
	i++;
	}
	fclose(p);
	printf("press 3 to return to previous screen ");
	scanf("%d",&t);
	if(t==3)
	{
	 system("cls");
	 MENU();
	}
	}
	else if(x==2)
	{
		HOMESCREEN();
	}
	
}
int readfile(void){
    int i,j,t,k,b[100],c,p=0,match=0;
    FILE *ofptr;
    ofptr=fopen("cafeRES.txt","r");
    /*if(ofptr==NULL){
        printf("ENTER YOUR TIMING:");
        scanf("%d",&t);
        writefile(t);
    }*/
    if(ofptr!=NULL)
    { printf("ENTER TIME WHICH U WISH TO RESERVE \n TIME MUST BE IN 24 HOUR FORMAT::"); 
    scanf("%d",&c);
    for(i=0;i<5;i++){
    
        fscanf(ofptr,"%d",&b[i]);}
        for(j=0;j<1;j++){
        
        for(i=0;i<8;i++){
            if(c==b[i]){
                printf("\nERROR!%d TIME IS ALREADY REGISTER::   \n\n ",c);
            match=1;
            return p;
            
            }
        }
        if(match!=1){
            return c;
        }
            
        }        
    
    }
}
void writefile(int a){
    int i,j,k;
    FILE *fptr;
    fptr=fopen("cafeRES.txt","a");
    //printf("ENTER the man1 NUMBER U WISH TO RESERVE :");
    //scanf("%d",&a);
    fprintf(fptr,"%d\n",a);
    fclose(fptr);

}
