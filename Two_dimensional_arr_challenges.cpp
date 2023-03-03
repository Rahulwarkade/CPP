#include<bits/stdc++.h>
using namespace std;
int main()
{// MATRIX TRANSPOSE
  // int n,m;
  // cin>>n>>m;
  // int m1[n][m];
  // for(int i=0; i<n; i++)
  //     for(int j=0; j<m; j++)
  //       cin>>m1[i][j];
  // for(int i=0; i<n; i++)
  //   {
  //     for(int j=i; j<m; j++)
  //       {
  //         int swap = m1[i][j];
  //         m1[i][j] = m1[j][i];
  //         m1[j][i] = swap;
  //       }
  //   }
  // for(int i=0; i<n; i++)
  //   { 
  //   for(int j=0; j<m; j++)
  //     cout<<m1[i][j]<<" ";
  //   cout<<endl;
  //   }

  // MATRIX MULTIPLICATION
  // int n1,n2,n3;
  // cin>>n1>>n2>>n3;
  // int m1[n1][n2];
  // int m2[n2][n3];
  // for(int i=0; i<n1; i++)
  //   for(int j=0; j<n2; j++)
  //     cin>>m1[i][j];
  // for(int i=0; i<n2; i++)
  //   for(int j=0; j<n3; j++)
  //     cin>>m2[i][j];
  // int ansMat[n1][n3];
  // for(int i=0; i<n1; i++)
  //   for(int j=0; j<n3; j++)
  //     ansMat[i][j] = 0;
  // for(int i=0; i<n1; i++)
  //     for(int j=0; j<n3; j++)
  //         for(int k=0; k<n2; k++)
  //            ansMat[i][j] += m1[i][k]*m2[k][j];
  //  for(int i=0; i<n1; i++)
  //   {
  //     for(int j=0; j<n3; j++)
  //       {
  //         cout<<ansMat[i][j]<<" ";
  //       }cout<<endl;
  //   }

//  2D MATRIX SEARCH IN SORTED MATRIX

  // BRUTE FORCE APPROACH
  
  // int n,m,target;
  // cin>>n>>m>>target;
  // int flag = false;
  // int matrix[n][m];
  // for(int i=0; i<n; i++)
  //   for(int j=0; j<m; j++)
  //     cin>>matrix[i][j];
  // for(int i=0; i<n; i++)
  //   {
  //     for(int j=0; j<m; j++)
  //       {
  //         if(matrix[i][j]==target)
  //         {
  //           cout<<"element is found "<<matrix[i][j]<<endl;
  //           return 0;
  //         }
  //       }
  //   }
  // cout<<"element is not found "<<target<<endl;


  // OPTIMISED APPROACH
 int n,m,target;
  cin>>n>>m>>target;
  int flag = false;
  int matrix[n][m];
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      cin>>matrix[i][j];
  int r=0,c=m-1;
  while(r<n && c>0)
    {
      if(matrix[r][c]==target)
        {
        cout<<matrix[r][c]<<endl;
          flag = true;
break;
        }
      else if(matrix[r][c]>target)
        c--;
      else
        r++;
    }
  (flag)?cout<<"element is fouund "<<endl:cout<<"element is not found "<<endl;
}