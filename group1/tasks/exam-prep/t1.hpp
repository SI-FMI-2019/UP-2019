int* create_array(int first[], int size_first, int second[], int size_second)
{
    int* array = new int[size_first + size_second];

    int first_index = 0;
    int second_index = 0;
    for(int i = 0; i < size_first + size_second; i++)
    {
        if(first[first_index] < second[second_index])
        {
            array[i] = first[first_index];
            first_index++;
        }
        else
        {
            array[i] = second[second_index];
            second_index++;
        }
    }

    return array;
}