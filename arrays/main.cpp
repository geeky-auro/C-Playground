#include <iostream>

using namespace std;

int main()
{
    /*Declaring Arrays  */
  int arr[5];
  arr[0]=5;
  cout<<arr<<endl;
  /*    It is the size of array..!*/
  cout<<sizeof(arr)<<endl;
  /*It is same as c[0]*/
  cout<<"Value in *arr is ->"<<*arr<<endl<<sizeof(*arr)<<endl;
  arr[1]=6;
  arr[2]=7;
  arr[3]=8;
  arr[4]=9;

  /** \brief
   *Basic pointer Arithmetic..!
   * \param
   * \param
   * \return
   *
   */

   cout<<"THe Value of *(arr+1) is "<<*(arr+1)<<endl;
   cout<<"THe Value of *arr +1 is "<<*arr +1<<endl;
   /** \brief
    *We Got another conclusion that &arr = arr which simply denotes
        the address of the array variable....!
    * \param
    * \param
    * \return
    *
    */

   cout<<"Using Ampersand..!"<<&arr<<endl;
   int *p=new int[5];
   p[0]=760010;
     p[1]=6;
  p[2]=7;
  p[3]=8;
  p[4]=9;
    cout<<*p<<endl;
    cout<<2[p]<<endl;
  /*
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }

*/

    return 0;
}
