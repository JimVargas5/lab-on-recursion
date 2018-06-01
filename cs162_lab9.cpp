#include "cs162_list.h"
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    for (int i=1; i<6; i++)
    {
        if (find(head, i))
            cout << "\nmatched number " << i;
         else
             cout << "\nno match for " << i;
    }
    cout << endl;
    cout << "\ngrand sum of all odd indexed nodes: " << display_every_other(head, 0) << endl;
    
    cout << endl << remove_all(head) << " victims.\n";
    display_all(head);
    destroy(head);

    return 0;
}






