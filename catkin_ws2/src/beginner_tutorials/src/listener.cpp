#include "ros/ros.h"
#include "std_msgs/String.h"
#include <queue>

//std::vector<std::string> theta ;
std::deque<std::string> theta;
//queue<std::std_msgs> theta;

void chatterCallback(const std_msgs::String::ConstPtr& msg)
  {
     //std::
     theta.push_back(msg->data.c_str());
     //theta.push(msg);
     ROS_INFO("I heard: [%s]", msg->data.c_str());
  }
   
  int main(int argc, char **argv)
  {
      ros::init(argc, argv, "listener");
      ros::NodeHandle n;
      ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
      
      ros::Time five_seconds = ros::Time::now() + ros::Duration(5);

      while(ros::Time::now()<= five_seconds){
        ros::spinOnce(); 
         
      }

      if(ros::Time::now()>five_seconds){
            for(int i=0;i<theta.size();i++){
               std::cout<<"I am in  five seconds "<<std::endl;
               //std::cout<<theta[i].data.c_str()<<std::endl;
               std::cout<<theta[i]<<std::endl;
            }

            // while (!theta.empty()) {
            //    std::cout << '\n' << theta.front();
            //    theta.pop();
            // }
            
            return 0;
         }
      
      ros::spin();
   
     return 0;
  }


