// Q. link
// https://www.codingninjas.com/codestudio/problems/find-unique_625159?leftPanelTab=0


int findUnique(int *arr, int size)
{   int ans=0;
    //Write your code here
    for(int i=0; i<size; i++)
    {
        ans= ans^arr[i];
    }
 
 return ans;
}
