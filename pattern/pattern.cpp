#include <iostream>
using namespace std;

int main(){

    cout<<"Welcome to patterns"<<endl;

    /** \brief
     *
     * \param
     * \param
     * \return
     1
     12
     123
     1234
     12345
     *
     */
        int i=1,n;
        cin>>n;
        while(i<=n){
            int j=1;
            while(j<=i){
                cout<<j;
                j++;
            }
            cout<<endl;
            i++;
        }

        /** \brief
         *
         * \param
         * \param
         * \return

         1
         23
         456
         78910
         1112131415
         *
         */
         int k=0;
                i=1;
                while(i<=n){
                    int j=1;
                    while(j<=i){
                            k++;
                        cout<<k;
                        j++;
                    }
                    cout<<endl;
                    i++;
                }


                /** \brief
                 *
                 * \param
                 * \param
                 * \return
                 *

                 ****1
                 ***23
                 **456
                 *78910
                 1112131415
                 */
                int gap=0;
                k=0;
                i=1;
                int x=n;
                while(i<=n){
                    gap=x-1;
                    while(gap>=1){
                        cout<<" ";
                        gap--;
                    }
                    x--;
                    int j=1;
                    while(j<=i){
                        k++;
                        cout<<k;
                        j++;

                    }
                    cout<<endl;
                    i++;
                }

                /** \brief
                 *
                 * \param
                 * \param
                 * \return
                 *

                         1
                         23
                         345
                         4567


                 */

                 i=1,k=0;
                 while(i<=n){
                    int j=1;
                    k=i;
                    while(j<=i){
                        cout<<k;
                        k++;
                        j++;
                    }
                    cout<<endl;
                    i++;
                 }


                 i=1;
                 k=0;
                 int gaps=0;
                 while(i<=n){
            		gaps=n-i;
                    while(gaps>=1){
                        cout<<" ";
                        gaps--;
                    }
                    int j=1;
                    k=i;
                    while(j<=i){
                        cout<<k;
                        k++;
                        j++;
                    }
                    cout<<endl;
                    i++;
                 }

                 /** \brief
                  *
                  * \param
                  * \param
                  * \return

                  *Star Pattern


                  */

                   i=1;
                   gaps=0;

    while(i<=n){
        gaps=n-i;
        while(gaps>=1){
            cout<<" ";
            gaps--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }






}
