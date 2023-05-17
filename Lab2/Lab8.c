#include <stdio.h>
#include <stdlib.h>


struct Student {
  int number;
  char name[30];
  int midterm;
  int final;
  struct Student *next;
};

struct Student * insert(struct Student *head)
{

    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    printf("Enter the student number: ");
    scanf("%d", &student->number);
    printf("Enter the name: ");
    scanf("%s", student->name);
    printf("Enter the midterm grade: ");
    scanf("%d",&student->midterm);
    printf("Enter the final grade: ");
    scanf("%d",&student->final);
    student->next = NULL;
    printf("Student is added to the list\n\n");

    if(head==NULL)
    {
        /* if head is NULL, set student as the new head */
        head = student;
    }
    else{
        /* if list is not empty
         insert student in beginning of head */
        student->next = head;
        head = student;
    }

    return head;

}

void display(struct Student *head, int m1, int m2, int f1, int f2)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->midterm>m1 && temp->midterm<m2 && temp->final>f1 && temp->final<f2 ){
	        printf("student Number: %d\n", temp->number);
	        printf("Name: %s\n", temp->name);
	        printf("Midterm grade: %d\n", temp->midterm);
	        printf("Final grade: %d\n", temp->final);
	        temp = temp->next;
		}
    }
    printf("\n\n");
}
/*
void display2(struct Student *head,int k)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->number > temp->next->number)
            k=temp->number;
            temp->number = temp->next->number;
            temp->next->number = k;
            printf("student Number: %d\n", temp->number);
            printf("Name: %s\n", temp->name);
            printf("Midterm grade: %d\n", temp->midterm);
            printf("Final grade: %d\n", temp->final);
            temp = temp->next;

    }
    temp=temp->next;
    temp->next=temp->next->next;
    printf("\n\n");
}

*/
void update(struct Student *head, int sNo)
{
    struct Student * temp = head;
    while(temp!=NULL){

        if(temp->number==sNo){
            printf("Record with student number %d Found !!!\n", sNo);
            printf("Enter new name: ");
            scanf("%s", temp->name);
            printf("Enter new midterm grade: ");
            scanf("%d", &temp->midterm);
            printf("Enter new final grade: ");
            scanf("%d", &temp->final);
            printf("Updated Successfuly\n\n");
            return;
        }
        temp = temp->next;

    }
    printf("Student with number %d is not found !!!\n\n", sNo);

}

void sort(struct Student *head, int listCoice)
{
    int swapped, i;
    struct Student *ptr1;
    struct Student *lptr = NULL;
    struct Student temp;

    /* Checking for empty list */
    if (head == NULL)
        return;
  	if(listCoice == 1){
  		do
	    {
	        swapped = 0;
	        ptr1 = head;

	        while(ptr1->next != lptr)
	        {
	            if (ptr1->number > ptr1->next->number)
	            {
	                temp.number = ptr1->number;
	                temp.midterm = ptr1->midterm;
	                temp.final = ptr1->final;
	                strcpy(temp.name, ptr1->name);
	                ptr1->number = ptr1->next->number;
	                ptr1->midterm = ptr1->next->midterm;
	                ptr1->final = ptr1->next->final;
	                strcpy(ptr1->name, ptr1->next->name);
	                ptr1->next->number = temp.number;
	                ptr1->next->midterm = temp.midterm;
	                ptr1->next->final = temp.final;
	                strcpy(ptr1->next->name, temp.name);
	                swapped = 1;
	            }
	            ptr1 = ptr1->next;
	        }
	        lptr = ptr1;
	    }while (swapped);
	}else{
		do
	    {
	        swapped = 0;
	        ptr1 = head;

	        while (ptr1->next != lptr)
	        {
	            if ((0.4 *ptr1->midterm + 0.6 * ptr1->final) > (0.4 *ptr1->next->midterm + 0.6 * ptr1->next->final))
	            {
	                temp.number = ptr1->number;
	                temp.midterm = ptr1->midterm;
	                temp.final = ptr1->final;
	                strcpy(temp.name, ptr1->name);
	                ptr1->number = ptr1->next->number;
	                ptr1->midterm = ptr1->next->midterm;
	                ptr1->final = ptr1->next->final;
	                strcpy(ptr1->name, ptr1->next->name);
	                ptr1->next->number = temp.number;
	                ptr1->next->midterm = temp.midterm;
	                ptr1->next->final = temp.final;
	                strcpy(ptr1->next->name, temp.name);
	                swapped = 1;
	            }
	            ptr1 = ptr1->next;
	        }
	        lptr = ptr1;
	    }while (swapped);
	 }


}
void average(struct Student *head)
{
    struct Student * temp = head;
    float average = 0;
    int count = 0;
    while(temp!=NULL){
        average += 0.4 *temp->midterm + 0.6 * temp->final;
        count++;
        temp = temp->next;

    }
    printf("Average grade: %.2f \n", average/count);

}
void bestStudent(struct Student *head)
{
    struct Student * temp = head;
    struct Student * best = head;
    while(temp!=NULL){

        if((0.4 *temp->midterm + 0.6 * temp->final) > (0.4 *best->midterm + 0.6 * best->final)){
            best = temp;
        }
        temp = temp->next;

    }
    printf("Best student's number is %d\n", best->number);

}
int main() {
  struct Student * head = NULL;
  int studentNo, i, choice = 0, list=0, m1, m2, f1, f2;

  while(choice!=6)
  {
  	printf("1- Add New Record\n");
  	printf("2- List Records\n");
  	printf("3- Update Record\n");
  	printf("4- Calculate Class Average\n");
  	printf("5- Show Best Student Record According to Average\n");
  	printf("6- Exit\n");
  	printf("\nEnter Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            head = insert(head);
            break;
        case 2:
        	printf("Listing records -> according to \n1- Student number\n2- Grade");
        	scanf("%d", &list);
        	if(list == 1 || list == 2){
				sort(head, list);
			}else
        		printf("There is no such choice\n\n");

        	printf("Do you want give midterm exam upper and lower limit?\n1- Yes\n2- No: ");
        	scanf("%d", &list);
        	if(list == 1){
				printf("Lower limit:");
        		scanf("%d", &m1);
				printf("Uper limit:");
        		scanf("%d", &m2);
			}else if(list == 2)
			{
				m1=0;m2=100;
			}else{
        		m1=0;m2=100;
				printf("There is no such choice\n\n");
        	}
        	printf("Do you want give final exam upper and lower limit?\n1- Yes\n2- No: ");
        	scanf("%d", &list);
        	if(list == 1){
				printf("Lower limit:");
        		scanf("%d", &f1);
				printf("Uper limit:");
        		scanf("%d", &f2);
			}else if(list == 2)
			{
				f1=0;f2=100;
			}else{
        		f1=0;f2=100;
				printf("There is no such choice\n\n");
        	}
            display(head, m1, m2, f1, f2);
            break;
        case 3:
            printf("Enter the student number to update: ");
            scanf("%d", &studentNo);
            update(head, studentNo);

            break;
        case 4:
            average(head);
            break;
        case 5:
            bestStudent(head);
            break;
        case 6:
            break;
    }

  }  //end while
  free(head);

  return 0;
}
