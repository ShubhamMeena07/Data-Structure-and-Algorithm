// ARRAYS-
// it is a group of variables of similar types of referred to by a single element.
// its element are stored primitive data types  in a contigous location.
// the size of the array counted from zero onwords.
// it can we accessed using the position of the element in the array.
// it can have one or more dimensions.
// why we need to use array-
// it store multiple variable to store each value to single array to store all values.
// advantages-
// code optimization 
// randam access
// disadvantages-
// size limit-we can store only fized size of element in the array.

// declaration of array --


//__cpp_initializer_lists_array-
//---question 1----------minimum and maximum in array ----------------->
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int minno=INT16_MAX;
//     int maxno=INT16_MIN;

//     for(int i=0;i<n;i++)
//     {
//         minno=min(minno,arr[i]);
//         maxno=max(maxno,arr[i]);
//     }
//     cout<<minno<<" "<<maxno<<endl;
// }

// time complexity=o(n)
// space complexity=o(n)



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int minno=arr[0];
    int maxno=arr[0];


    for(int i=0;i<n;i++)
    {
        if(maxno<arr[i])
        {
            maxno=arr[i];
        }
       else if(minno>arr[i])
       {
        minno=arr[i];
       }
       
    }

    cout<<maxno<<" "<<minno<<endl;
}







