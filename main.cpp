#include <iostream>
#include "parent.h"
#include "child.h"
#include "relasi.h"
using namespace std;

void menu(list_a A,list_f F,list_r R); /**REYNALDISYAPUTRA_1301164141**/

int main() /**REYNALDISYAPUTRA_1301164141**/
{
    list_a A;
    list_f F;
    list_r R;
    createlist(A);
    createlist(F);
    createlist(R);
    menu(A, F, R);
    return 0;
}
