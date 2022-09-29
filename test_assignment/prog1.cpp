#include<iostream>
using namespace std;
class Distance{
    float dist1_ft;
    float dist1_in;

    public:
    float p2_ft,pt_in;
    void inputData(float dis1,float ft_1){
        dist1_ft=dis1;
        dist1_in=ft_1;

    }
    void add(Distance ob1,Distance ob2){
        float dist_ft=ob1.dist1_ft+ob2.dist1_ft;
        float dist_in=ob1.dist1_in+ob2.dist1_in;
        while(dist_in>=12){
            dist_in=dist_in-12;
            dist_ft++;
        }
        cout<<"The Calculated Distance is Feet:"<<dist_ft<<" Inch "<<dist_in<<endl;
    }
    Distance add(Distance ob1){
        Distance d;
          // adding distances
       d.dist1_ft=dist1_ft+ob1.dist1_ft;
       d.dist1_in=dist1_in+ob1.dist1_in;
          while (d.dist1_in >= 12.0) {
      d.dist1_in = d.dist1_in - 12.0;
      ++d.dist1_ft;
    }
    p2_ft=d.dist1_ft;
    pt_in=d.dist1_in;
    cout<<"The Calculated Distance is Feet:"<<d.dist1_ft<<" Inch "<<d.dist1_in<<endl;
        return d;
    }

};
int main(){
    Distance c1,c2,c3,c4;
    cout<<"Enter 1st distance " <<endl;
    float dis1,dis2,ft_1,ft_2;
    cin>>dis1>>ft_1;
    cout<<"Enter 2st distance " <<endl;
    cin>>dis2>>ft_2;
    c1.inputData(dis1,ft_1);
    c2.inputData(dis2,ft_2);
    c3.add(c1,c2);
    //Method-2 Bit-b
    cout<<"Enter 1st distance " <<endl;
    cin>>dis1>>ft_1;
    cout<<"Enter 2st distance " <<endl;
    cin>>dis2>>ft_2;
    c1.inputData(dis1,ft_1);
    c2.inputData(dis2,ft_2);
    c4=c1.add(c2);
    
    return 0;
}