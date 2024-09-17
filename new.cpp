#include <iostream>
using namespace std;
int main()
{
    int i1, j1, n, c, r, i, j, mar[10][10], sol[0][0], marsul = 0;
    cout << "enter row" << endl;
    cin >> r;
    cout << "enter colam" << endl;
    cin >> c;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "enter no" << endl;
            cin >> mar[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "  " << mar[i][j];
        }
        cout << "\n";
    }
    /*  cout<<"reverse matrix"<<endl;

      for(i=0; i<r; i++){
      for(j=0; j<c; j++){
        cout<<"  "<<mar[j][i];
      }
       cout<<"\n";
  }*/
    cout << "matrix  solve";
    int s1 = 0, s2 = 0, s3 = 0, sum = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            s1 = mar[0][0] * ((mar[1][2] * mar[2][1]) - (mar[1][1] * mar[2][2]));

            s2 = mar[0][1] * ((mar[1][2] * mar[2][0]) - (mar[1][0] * mar[2][2]));

            s3 = mar[0][2] * ((mar[1][1] * mar[2][0]) - (mar[1][0] * mar[2][1]));
        }
    }
    sum = s1 + s2 + s3;
    cout << sum << endl;
    int sp = 0;
    cout << "why to solve any one matrix to enter 1, another exit to enter any no :-\n";
    cin >> sp;
    if (sp == 1)
    {
        cout << "plese enter the soulve with row  ";
        cin >> i1;
        cout << "plese enter the soulve with row in coulm  ";
        cin >> j1;

        if (mar[0][0] == sol[i1][j1])
        {
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {

                    marsul = mar[0][0] * ((mar[1][2] * mar[2][1]) - (mar[1][1] * mar[2][2]));
                }
            }
        }
        if (mar[0][1] == sol[i1][j1])
        {
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {

                    marsul = mar[0][1] * ((mar[1][2] * mar[2][0]) - (mar[1][0] * mar[2][2]));
                }
            }
        }
        if (mar[0][2] == sol[i1][j1])
        {
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {

                    marsul = mar[0][2] * ((mar[1][1] * mar[2][0]) - (mar[1][0] * mar[2][1]));
                }
            }
        }
        cout << marsul << endl;
    }
    else
    {
        exit(0);
    }
}