int BinarySearch(int *array, int aSize, int key)  
{  
    if ( array == NULL || aSize == 0 )  
        return -1;  
    int low = 0;  
    int high = aSize - 1;  
    int mid = 0;  
    while ( low <= high )  
    {  
        mid = (low + high )/2;  
        if ( array[mid] < key)  low = mid + 1;  
        else if ( array[mid] > key )     high = mid - 1;  
        else  return mid;  
    }  
    return -1;  
} 
