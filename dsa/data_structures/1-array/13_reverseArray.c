/* reverse an int array */

void reverse_array(int arr[], int size)
{
	int tmp;
	int i = 0;
	int size2 = size - 1;
	while (i < size / 2)
	{
		tmp = arr[i];
		arr[i] = arr[size2];
		arr[size2] = tmp;
		i++;
		size2--;
	}
}
