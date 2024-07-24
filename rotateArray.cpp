/*https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1*/

void rotateArr(int arr[], int d, int n){
        // code here
       vector<int>a(d);
       d=d%n;
      for(int i=0;i<n;i++){
          if(i<d){
           a[i]=arr[i];
       }
       else{
           arr[i-d]=arr[i];
       }
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=a[j];
        j++;
    }
    }
