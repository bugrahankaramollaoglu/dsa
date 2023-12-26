// shift an array

void rotate_array(int arr[], int size)
{
	for (int i = 0; i < 1; i++)
	{
		int last_num = arr[size - 1];
		for (int i2 = size - 1; i2 > 0; i2--)
			arr[i2] = arr[i2 - 1];
		arr[0] = last_num;
	}
}
