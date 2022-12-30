/*
	CREATOR:	ANSHIKA AGGARWAL
	MODULE:		BASIC C PROGRAMMING MINI PROJECT
	TOPIC:		STUDENT MANAGEMENT SYSTEM
 */

 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 #include<string.h>

 //Declaring global variables
 char id_name[40],registration_number[40],password_name[40];
 char name_of_student[30],father_name[30],address[40],course_enrolled[40],student_registration[40],name_of_student_for_report[40];
 int id_compare,password_compare,choice,date_of_birth,month_of_birth,year_of_birth;
 int date_of_enrollment,month_of_enrollment,year_of_enrollment,maths_marks,electrical_marks,pps_marks,physics_marks,soft_skills_marks,total_number=0;
 float total,percent;

 //declaring a function named as home_page
 void home_page()
 {
  //WELCOME IE HOME PAGE
 printf("\t\t WELCOME TO HOME PAGE \n\n");
 //STUDENT MANAGEMENT SYSYTEM AND OPTIONS

 printf("\t STUDENT MANAGEMENT SYSTEM \n\n");
 printf("\t Enter your Option\n\n \t1 \tADD STUDENT DETAILS \n \t2 \t PREVIEW STUDENT DETAILS \n \t3 \tGRADES OF THE STUDENT \n \t4 \tTOTAL NUMBER OF STUDENTS \n \t5 \tEXIT\n");
 scanf("%d",&choice);
 switch(choice)
 {
 //Option 1 ADD STUDENT DETAILS CASE
 case 1: clrscr();
 printf("\t\t\t ADD STUDENTS DETAILS \n\n");
 printf("\t ENTER THE NAME OF THE STUDENT\n");
 fflush(stdin);
 gets(name_of_student);
 printf("\t ENTER REGISTRATION NUMBER \n");
 scanf("%s",registration_number);
 printf("\t ENTER DATE OF BIRTH\n");
 scanf("%d%d%d",&date_of_birth,&month_of_birth,&year_of_birth);
 printf("\t ENTER FATHER'S NAME \n");
 fflush(stdin);
 gets(father_name);
 printf("\t ENTER ADDRESS \n");
 fflush(stdin);
 gets(address);
 printf("\t ENTER COURSE ENROLLED \n");
 fflush(stdin);
 gets(course_enrolled);
 printf("\t ENTER DATE OF ENROLLMENT IS \n");
 scanf("%d%d%d",&date_of_enrollment,&month_of_enrollment,&year_of_enrollment);
 clrscr();

 case 2://preview student details
 printf("\t\t\t PREVIEW STUDENTS DETAILS\n\n");
 printf("\t NAME OF THE STUDENT \t%s\n",name_of_student);
 printf("\t REGISTRATION NUMBER \t%s\n",registration_number);
 printf("\t DATE OF BIRTH \t\t%d/%d/%d\n",date_of_birth,month_of_birth,year_of_birth);
 printf("\t FATHER'S NAME \t\t%s\n",father_name);
 printf("\t ADDRESS \t\t%s\n",address);
 printf("\t COURSE ENROLLED \t%s\n",course_enrolled);
 printf("\t DATE OF ENROLLMENT \t%d/%d/%d\n",date_of_enrollment,month_of_enrollment,year_of_enrollment);
 // for counting total number
 total_number++;
 //for new page command
 getch();getch();clrscr();
 //Using function within a function
 // calling of function home_page
 home_page();

 break;

 case 3://Grades of the student
 clrscr();
 printf("\n\t GRADES OF THE STUDENT AND PERCENTAGE\n");
 printf("\t ENTER REGISTRATION NUMBER \n");
 scanf("%s",student_registration);
 printf("\t ENTER NAME OF THE STUDENT \n\n");
 fflush(stdin);
 gets(name_of_student_for_report);
 printf("\t\t ENTER MARKS \n\n");
 printf("\t MATHS \n");
 scanf("%d",&maths_marks);
 printf("\t ELECTRICAL \n");
 scanf("%d",&electrical_marks);
 printf("\t PPS \n");
 scanf("%d",&pps_marks);
 printf("\t PHYSICS \n");
 scanf("%d",&physics_marks);
 printf("\t SOFT SKILLS \n");
 scanf("%d",&soft_skills_marks);
 //total of 5 subjects for percentage calculation
 total=maths_marks+electrical_marks+pps_marks+physics_marks+soft_skills_marks;
 percent=total/5;
 clrscr();
 printf("\t\tREGISTRATION NUMBER \t%s\n",student_registration);
 printf("\t\t NAME OF THE STUDENT \t%s\n\n",name_of_student_for_report);
 printf("\n\t PERCENTAGE IS %f\n",percent);
 if(percent<=100 && percent>=95)
 printf("\t GRADE=>OUTSTANDING(O)\n\n\n");
 else if(percent<95 && percent>=90)
 printf("\t GRADE=>A+\n\n\n");
 else if(percent<90 && percent>=80)
 printf("\t GRADE=>A\n\n\n");
 else if(percent<80 && percent>=70)
 printf("\t GRADE=>B+\n\n\n");
 else
 printf("\t GRADE=>C\n\n\n");
 // for clearing screen
 getch();getch();clrscr();
 // calling of function home_page
 home_page();
 break;

 case 4://total number of students
 printf("\t TOTAL NUMBER OF STUDENTS \t %d\n",total_number);
 //for clearing screen
 getch();getch();clrscr();
 //calling of function home_page()
 home_page();

 break;
 //termination choice
 case 5:
 exit(0);
 // out of choices
 default:
 printf("\t INVALID CHOICE\n\n\n");
 //clearing screen
 getch();getch();clrscr();
 // calling of home_page() function
 home_page();
 }
 }
 //function terminates here

 // main f(x) body starts here
 int main()
 {
 //new screen
 clrscr();
 // Login Page
 printf("\n\t\t CREATED BY ANSHIKA AGGARWAL\n");
 printf("\n\n\t\t WELCOME TO LOGIN PAGE \n\n");
 printf("\t\t\tID\n");
 scanf("%s",id_name);
 printf("\t\t\tPASSWORD \n");
 scanf("%s",password_name);
 id_compare=strcmp(id_name,"KCCITM");
 password_compare=strcmp(password_name,"admin@123");

 if(id_compare==0 && password_compare==0)
 {
 clrscr();
 //WELCOME IE HOME PAGE
 printf("\t\t WELCOME TO HOME PAGE \n\n");
 //STUDENT MANAGEMENT SYSYTEM AND OPTIONS

 printf("\t STUDENT MANAGEMENT SYSTEM \n\n");
 printf("\t Enter your Option\n\n \t1 \tADD STUDENT DETAILS \n \t2 \t PREVIEW STUDENT DETAILS \n \t3 \tGRADES OF THE STUDENT \n \t4 \tTOTAL NUMBER OF STUDENTS \n \t5 \tEXIT\n");
 scanf("%d",&choice);
 switch(choice)
 {
 //Option 1 ADD STUDENT DETAILS CASE
 case 1: clrscr();
 printf("\t\t\t ADD STUDENTS DETAILS \n\n");
 printf("\t ENTER THE NAME OF THE STUDENT\n");
 fflush(stdin);
 gets(name_of_student);
 printf("\t ENTER REGISTRATION NUMBER \n");
 scanf("%s",registration_number);
 printf("\t ENTER DATE OF BIRTH\n");
 scanf("%d%d%d",&date_of_birth,&month_of_birth,&year_of_birth);
 printf("\t ENTER FATHER'S NAME \n");
 fflush(stdin);
 gets(father_name);
 printf("\t ENTER ADDRESS \n");
 scanf("%s",address);
 printf("\t ENTER COURSE ENROLLED \n");
 fflush(stdin);
 gets(course_enrolled);
 printf("\t ENTER DATE OF ENROLLMENT IS \n");
 scanf("%d%d%d",&date_of_enrollment,&month_of_enrollment,&year_of_enrollment);
 clrscr();

 case 2://preview student details
 printf("\t\t\t PREVIEW STUDENTS DETAILS\n\n");
 printf("\t NAME OF THE STUDENT \t%s\n",name_of_student);
 printf("\t REGISTRATION NUMBER \t%s\n",registration_number);
 printf("\t DATE OF BIRTH \t\t%d/%d/%d\n",date_of_birth,month_of_birth,year_of_birth);
 printf("\t FATHER'S NAME \t\t%s\n",father_name);
 printf("\t ADDRESS \t\t%s\n",address);
 printf("\t COURSE ENROLLED \t%s\n",course_enrolled);
 printf("\t DATE OF ENROLLMENT \t%d/%d/%d\n",date_of_enrollment,month_of_enrollment,year_of_enrollment);

 // for counting total number
 total_number++;
 //for new page command
 getch();getch();clrscr();
 //Using function within a function
 // calling of function home_page
 home_page();
 break;

 case 3://Grades of the student
 clrscr();
 printf("\n\t GRADES OF THE STUDENT AND PERCENTAGE\n");
 printf("\t ENTER REGISTRATION NUMBER \n");
 scanf("%s",student_registration);
 printf("\t ENTER NAME OF THE STUDENT \n\n");
 fflush(stdin);
 gets(name_of_student_for_report);
 printf("\t\t ENTER MARKS \n\n");
 printf("\t MATHS \n");
 scanf("%d",&maths_marks);
 printf("\t ELECTRICAL \n");
 scanf("%d",&electrical_marks);
 printf("\t PPS \n");
 scanf("%d",&pps_marks);
 printf("\t PHYSICS \n");
 scanf("%d",&physics_marks);
 printf("\t SOFT SKILLS \n");
 scanf("%d",&soft_skills_marks);
 //total of 5 subjects for percentage calculation
 total=maths_marks+electrical_marks+pps_marks+physics_marks+soft_skills_marks;
 percent=total/5;
 clrscr();
 printf("\t\tREGISTRATION NUMBER \t%s\n",student_registration);
 printf("\t\t NAME OF THE STUDENT \t%s\n\n",name_of_student_for_report);
 printf("\n\t PERCENTAGE IS %f\n",percent);
 if(percent<=100 && percent>=95)
 printf("\t GRADE=>OUTSTANDING(O)\n");
 else if(percent<95 && percent>=90)
 printf("\t GRADE=>A+\n\n\n");
 else if(percent<90 && percent>=80)
 printf("\t GRADE=>A\n\n\n");
 else if(percent<80 && percent>=70)
 printf("\t GRADE=>B+\n\n\n");
 else
 printf("\t GRADE=>C\n\n\n");
 // for clearing screen
 getch();getch();clrscr();
 // calling of function home_page
 home_page();
 break;

 case 4://total number of students
 printf("\t TOTAL NUMBER OF STUDENTS\t %d\n",total_number);
 //for clearing screen
 getch();getch();clrscr();
 //calling of function home_page()
 home_page();
 break;
 //termination choice

 case 5:exit(0);
 // out of choices

 default:
 printf("\t INVALID CHOICE\n\n\n");
 //for clearing screen
 getch();getch();clrscr();
 //calling of function home_page()
 home_page();
 }
 //switch case is closed here
 }
 // if loop ie HOME PAGE terminates here
 else
 printf("\t\t INVALID ID OR PASSWORD \n\n\n");
 exit(0);
 //program main login page is closed here
 getch();
 return 0;
 }
