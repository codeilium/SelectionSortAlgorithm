#include <iostream>

int main(void)
{
    int unSorted[] = {7, -1, 9, 8, 6, 0, 1, 2};
    int length = sizeof(unSorted)/sizeof(unSorted[0]);

    for(int i = 0; i < length - 1; i++)
    {
        int smallest = unSorted[i];
        for(int j = i; j < length - 1; j++)
        {
            if(smallest > unSorted[j+1])
            {
                smallest = unSorted[j+1];
            }
        }
        for(int j = i; j < length - 1; j++)
        {
            if(smallest == unSorted[j+1])
            {
                int swap = unSorted[j+1];
                unSorted[j+1] = unSorted[i];
                unSorted[i] = swap;
                break;
            }
        }
        
    }
    for(int i = 0; i < length; i++)
        std::cout << unSorted[i] << std::endl;
    return 0;
}