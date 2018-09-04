#include <iostream>
#include <malloc.h>
using namespace std;


struct node         //Declare struct node
{
    int data;
    struct node *next;
};

void push(struct node *top, int x)          //Declare function to push values into stack
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    while (top->next != NULL)
    {
        top = top->next;
    }
    top->next = temp;
}

void popStack(struct node *top)         //Declare function to pop values from stack
{
    while(top->next->next != NULL)
    {
        top = top->next;
    }
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp = top->next;
    top->next = NULL;
    free(temp);
}
void print(struct node *top)            //Declare function to print stack
{
    while(top != NULL)
    {
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}

int main()            //Main program
{
    struct node *top = NULL;            //Declare stack (it starts empty so I declare it as NULL)
    int number_of_students;             //Declare integer for student amount
    int teamSize;                       //Declare integer for team size
    int validmembercount = 0;           //Declare integer for amount of valid members to be placed on a team 
                                        //(all must have unique rating)

    cin >> number_of_students >> teamSize;          //Input number of students and size of team
    int studentrating[number_of_students];          //Declare array for student rating - size depends on number of students
    for (int a = 0; a < number_of_students; a++)
    {
        cin >> studentrating[a];           //Looping - the user inputs each individual student's rating 
    }                                      //(loop length depends on the number of students

    for (int p = 0; p < number_of_students-1; p++)          //Looping - determining whether there are duplicates within 
    {                                                       //the rating array
        for (int q = p+1; q < number_of_students; q++)
        {
            if (studentrating[p] == studentrating[q])         //If duplicate is found
            {
                studentrating[q] = 0;                        //Set the value at the array's current position [j] as 0 (NULL)
            }

        }
    }

    for (int x = 0; x < number_of_students; x++)            //Looping - to push qualifying member counts into the stack
    {

        if (studentrating[x] != 0 )            //If the current rating is not a duplicate (not zero/null)
        {
            if (top == NULL)            //If the stack is empty (ALWAYS GO HERE WHEN YOU INSERT THE FIRST DATA)
            {

                top = (struct node*)malloc(sizeof(struct node));      //Declare stack top into memory
                top->next = NULL;           //current top of stack is empty
                top->data = x+1;            //Add first data to the stack
                validmembercount++;         //Valid member count increases as a result
            }

            else                        //If stack is already populated
            {
                push(top,x+1);          //Push current rating position
                validmembercount++;     //Valid member count increases as a result
            }

        }

    }

    if (validmembercount >= teamSize)           //If the valid member count is higher or equal to the team size, the team is valid
    {
        cout << "YES" << endl;               //Print YES (because Codeforces or whoever designed the question wants you to do so
        if (validmembercount > teamSize)        //If the valid member count is higher than the team size
        {
            for (int hj = 0; hj < validmembercount-teamSize; hj++)
            {
                popStack(top);                  //Pop values from stack so that the number of valid members fit the team size
            }
        }
        print(top);                             //Print stack contents
    }
    else            //If the valid member count is less than the team size
    {
        cout << "NO";           //Print NO
    }

    return 0;
