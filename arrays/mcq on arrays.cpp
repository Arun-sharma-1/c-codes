  #include <stdio.h>
  
   int main()
    {
//        int ary[2][3];
//        ary[2][3] = {{1, 2, 3}, {4, 5, 6}};
        // this is wrong format we have to give values of array while intilizing like-
        int  ary[2][3] = {{1, 2, 3}, {4, 5, 6}};
        printf("%d\n", ary[1][0]);
    }
  
//   void f(int a[][]) this is not write format this show compile time error
// void f(int a[2][]) this is not write format this show compile time error
  /*  void f(int a[][3])
    {
        a[0][1] = 3;
        int i = 0, j = 0;
        for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
        printf("%d", a[i][j]);
    }
    void main()
    {
        int a[2][3] = {0};
        f(a);
    }*/
    // output is  0 3 0 0 0 0
