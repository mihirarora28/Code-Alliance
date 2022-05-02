void binSort(int A[], int N)
{
    int pt1 = 0;
    int pt2 = N-1;
    while(pt1<=pt2){
        if(A[pt1] == 1 && A[pt2] == 0){
            int temp = A[pt1];
            A[pt1] = A[pt2];
            A[pt2] = temp;
            swap(A[pt1],A[pt2]);
            pt2--;
            pt1++;
        }
         else   if(A[pt1] == 0 && A[pt2] == 0){
            pt1++;
        }
          else   if(A[pt1] == 0 && A[pt2] == 1){
            pt1++;
            pt2--;
        }
             else   if(A[pt1] == 1 && A[pt2] == 1){
       
            pt2--;
        }
        
    }
}