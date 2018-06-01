#include "cs162_list.h"
#include <iostream>
using namespace std;

//These are the functions to implement for this lab
//Notice that they are not in a class this time!
//This means we need to pass in head as an argument
//since there is no "data member" shared


//Check to see if the desired item is in the list
//Return true if it is found
bool find(node * head, int match) 
{
       //Step 3 - Place your code here
       bool good = false;
       node * current = head;
        if (current->data != match)
        {
            if (current->next != NULL)
                good = find (current->next, match);
            else
                return false;
        }
        else
            return true;


       return good;
}

//Remove all nodes in the list
int remove_all(node * & head) 
{
      //Step 4 - Place your code here
      int victims = 0;
        //node * current = head;
        //node * nexter = current->next;

        if (head->next != NULL)
            victims = remove_all((head->next));
        destroy(head);
        victims++;

      return victims;
}

//Remove all nodes in the list after the recursive call
int remove_all_2nd(node *& head)
{
     //Step 5 - Place your code here


}

//Display every other item starting with the first
int display_every_other(node * head, int step)
{
      //Step 6 - Place your code here
      //

    node * current = head;
    int counter = 1 + step;
    int pile = current->data;

    if (counter%2 != 0)
        cout << counter << " things deep: " << current->data << endl;

    if (current->next != NULL)
        pile += display_every_other(current->next, counter);


    /*if (current->next != NULL)
        counter = display_every_other(current->next);
    counter++;
    if ((counter%2) != 0 )
        cout << "we are " << counter << " things deep, here is the data: " << current->data << "\n";
*/
    return pile;
      
}













