#include <iostream>
using namespace std;

int main(){

    cout<<"Welcome to patterns"<<endl;
    cout<<(char)('A'+5-1)<<endl;

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


    /*
    n=4
    ABCD
    ABCD
    ABCD
    ABCD

    if n=5
        ABCDE
        ABCDE
        ABCDE
        ABCDE
        ABCDE

    Simple logic to be used is 'A'+j-1
    */
    i=1;
    while (i<=n){

        int j=1;
        while(j<=n){
            cout<<(char)('A'+j-1);
            j++;
        }
        cout<<endl;
        i++;

    }

    /*
    N=4
    ABCD
    BCDE
    CDEF
    DEFG

    */
        cout<<endl;
    i=1;
    while(i<=n){
        int j=1;
        char startingChar='A'+i-1;
        while(j<=n){
            cout<<(char)(startingChar+j-1);
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
    E
    DE
    CDE
    BCDE
    ABCDE
     */


    i=1;
    int ki=n;
    while(i<=n){
        int j=1;
        char start='A'+ki-1;
        while(j<=i){
            cout<<(char)start;
            start=start+1;
            j++;
        }
        ki--;
        cout<<endl;
        i++;
    }


    i=n;
        while(i>=1){
        int k=1;
        while(k<=i){
            cout<<i;
            k++;
        }

        cout<<endl;
        i--;
    }

     i=1;

    while(i<=n){

        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
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

    /*
    Question: https://github.com/amazon01FireStick/Store-images/blob/main/pattern.png
    */

    i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1,k;
        k=i;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        int l=1,m=2*i-2;
        while(l<i){
            cout<<m;
            m--;
            l++;
        }

        cout<<endl;
        i++;
    }

}







