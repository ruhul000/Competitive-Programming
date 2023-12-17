//0-1 knapsack problem
#include <iostream>
using namespace std;

#define MAX_ITEMS 10
#define MAX_CAPACITY 100
int path[100][100];
int M[100][100];

int knapsack(int value[], int weight[], int n, int C)
{
//For code simplicity, I'm creating a fixed size array.
//Actually it should depend on n and C
    int M[MAX_ITEMS][MAX_CAPACITY] = {{0,},};  //initialize to zero
    int i, j;

    for(i=1; i<= n; i++)
    {
        for(j=1; j<=C; j++)
        {
            if(weight[i-1] > j)
            {
                M[i][j] = M[i-1][j];
                //cout<<"if= "<<M[i][j]<<" ";
                path[i][j]=i;
            }
            else
            {
                M[i][j] = M[i-1][j];

                if( (M[i-1][j-weight[i-1]]+value[i-1]) > M[i][j])
                {
                    M[i][j] = M[i-1][j-weight[i-1]] + value[i-1];
                    //cout<<"El= "<<M[i][j]<<" ";
                    path[i][j]=weight[i-1];
                }

            }
        }
    }
    for(i=0; i<=5; i++)
    {
        for(int k=0; k<=6; k++)
        {
            cout<<M[i][k]<<"\t";
        }
        cout<<endl;
    }
cout<<endl;
    return M[n][C];
}

//This main function is here just to show how to call knapsack()
int main()
{
/*int value[6] = {12,10,20,15};
int weight[6] = {2,1,3,2};*/
int value[6] = {20,50,20,15,30};
int weight[6] = {2,1,3,2,3};
int i,k;

int w = knapsack(value, weight,6, 6);

cout << w << endl;

for(i=0; i<=5; i++)
{
    for(k=0; k<=6; k++)
    {
        cout<<path[i][k]<<" ";
    }
    cout<<endl;
}
return 0;
}


//#include<iostream>
//#include<time.h>
//using namespace std;
//int r;
//int* sort(int list[],int n)
//    {
//
//        int temp;
//        bool swap =true;
//        int i;
//        while(swap)
//        {
//        for(i=0;i<n-1;i++)
//            {
//            for(int j=i+1;j<n;j++)
//
//                {
//                if(list[i]>list[j])
//                    {
//                    temp=list[j];
//                    list[j]=list[i];
//                    list[i]=temp;
//                    swap= true;
//                    }else
//                        {
//                        swap= false;
//                        }
//
//                }
//            }
//        }
//        return (list);
//
//    }
//int* knapsack(int list[],int k)
//{
//    const int n=6;
//    int c=0;
//
//    int ks[n];
//    int sum=0;
//    int u;
//    for(int i=0;i<n;i++)
//    {
//    sum=sum+list[i];
//        if(sum<=k)
//        {
//            u=list[i];
//            ks[i]=u;
//            list[i]=i+1;
//            c++;
//            //cout<<"Index number in sorted list : "<<i+1<<" "<<endl;
//        }
//    }
//
//    r=c;
//    return (list);
//
//}
//
//int main()
//{
//    double difference1,difference2;
//    clock_t start,end;
//    const int m=5;
//    int list[m]={8,6,7,4,9};
//    cout<<"Your list of sizes of parcel : ";
//    for(int i=0;i<m;i++)
//    {
//        cout<<list[i]<<" ";
//    }
//    cout<<endl<<endl;
//
//    start = clock();
//
//    int* x=sort(list,m);  //call to sorting function to sort the list in increasing size order.
//
//    end = clock();
//    difference1=((start-end)/CLOCKS_PER_SEC);
//
//    cout<<"Sorted list of sizes of parcel : ";
//    for (int j = 0; j <m; j++)
//    {cout<<x[j]<<" ";}
//
//    cout<<endl<<endl;
//
//    int k=24;   //Size of sack
//
//    start = clock();
//
//    int* g= knapsack(list,k); //call to knapsack function
//
//    end = clock();
//    difference2=((start-end)/CLOCKS_PER_SEC);
//
//        cout<<"Indexes taken from sorted list : ";
//                for(int l=0;l<r;l++)
//                {
//                cout<<g[l]<<" ";
//                }
//        cout<<endl<<endl;
//        cout<<"Time elapsed : "<<(difference1+difference2)<<endl<<endl;
//
//}
