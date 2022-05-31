// #include<stdio.h>
// int main(){
//     int arr[1000],i,j,n,max, min;
//     printf("how many element you enter of this array: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     max=arr[0];
//     min=arr[0];
// for(i=0;i<n;i++){
//     if (max<arr[i]){
//         max=arr[i];
//     }
//     if(min>arr[i]){
//         min=arr[i];
//     }
// }
//         printf("the maximum or minimum of value of an array %d %d",max,min);

// return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[1000],i,j,n,a;
//     printf("how many element you enter of this array: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if (arr[i]<arr[j]){
//                 a=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=a;
//             }
//         }
//     }
//     printf("the second large number of an array: %d",arr[1]);
//     printf("the second minimum of an array%d",arr[n-2]);
//     return 0;
// }

// Write a C program to count total number of even and odd elements in an array
// #include<stdio.h>
// int main(){
//     int arr[1000],i,j,c=0,b=0,n;
//     printf("enter the range of element of an array:-");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//    for(j=0;j<n;j++){
//         if(arr[j]%2==0){
//            c=c+1;
//         }
//         else
//        {
//            b=b+1;
//        }
//    }
//    printf("the number of even and odd element of an array is %d %d",c,b);
//    return 0;
// }


// FILE KO OPEN KARNE KE LIYE

// gedit file.c
// gcc file.c
// ./a.out 