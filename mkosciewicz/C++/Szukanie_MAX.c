#include stdio.h

int smallest_element = v[0]; //let, first element is the smallest one
int largest_element = v[0]; //also let, first element is the biggest one
for(int i = 1; i < v.size(); i++)  //start iterating from the second element
{
    if(v[i] <= smallest_element)
    {
       smallest_element = v[i];
    }
    if(v[i] > largest_element)
    {
       largest_element = v[i];
    }
}