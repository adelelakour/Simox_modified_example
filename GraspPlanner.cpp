#include <VirtualRobot/VirtualRobot.h>
#include <VirtualRobot/RuntimeEnvironment.h>
#include <GenericGraspPlanner.h>
#include <string>
#include <iostream>
#include <VirtualRobot/Grasping/BasicGraspQualityMeasure.h>
#include <VirtualRobot/SceneObject.h>

#include "VirtualRobot/Grasping/BasicGraspQualityMeasure.h"
#include <VirtualRobot/SceneObject.h>
using std::cout;
using std::endl;
using namespace VirtualRobot;

#include <Eigen/Core>
#include <Eigen/Geometry>

#include "GraspPlannerWindow.h"



int main(int argc, char* argv[])
{
    VirtualRobot::init(argc, argv, "Simox Grasp Planner");

//    cout << " --- START --- " << endl;
//    cout << endl << "Hint: You can start this demo for different hands:" << endl;
//    cout << "GraspPlanner --robot robots/iCub/iCub.xml --endeffector \"Left Hand\" --preshape \"Grasp Preshape\"" << endl;
//    cout << "GraspPlanner --robot robots/Shadow_Dexterous_Hand/shadowhand.xml --endeffector \"SHADOWHAND\" --preshape \"Grasp Preshape\"" << endl;
//    cout << "GraspPlanner --robot robots/Schunk_SAH/SAH_RightHand.xml --endeffector \"Right Hand\" --preshape \"Grasp Preshape\"" << endl;

    // --robot robots/iCub/iCub.xml --endeffector "Left Hand" --preshape "Grasp Preshape"
    std::string robot("robots/Schunk_SAH/SAH_RightHand.xml");
    VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(robot);
    std::string eef("Right Hand");

    //std::string object("objects/Piggy6.xml");
    std::string object("objects/tomato_soup_can.xml");
    //std::string object("objects/YCB_Objects/master_chef_can.xml");
    VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(object);

    // create a
    std::string preshape("");

    VirtualRobot::RuntimeEnvironment::considerKey("robot");
    VirtualRobot::RuntimeEnvironment::considerKey("object");
    VirtualRobot::RuntimeEnvironment::considerKey("endeffector");
    VirtualRobot::RuntimeEnvironment::considerKey("preshape");
    VirtualRobot::RuntimeEnvironment::processCommandLine(argc, argv);
    VirtualRobot::RuntimeEnvironment::print();

    std::string robFile = VirtualRobot::RuntimeEnvironment::getValue("robot");

    if (!robFile.empty() && VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(robFile))
    {
        robot = robFile;
    }

    std::string objFile = VirtualRobot::RuntimeEnvironment::getValue("object");

    if (!objFile.empty() && VirtualRobot::RuntimeEnvironment::getDataFileAbsolute(objFile))
    {
        object = objFile;
    }

    std::string eefname = VirtualRobot::RuntimeEnvironment::getValue("endeffector");

    if (!eefname.empty())
    {
        eef = eefname;
    }

    std::string ps = VirtualRobot::RuntimeEnvironment::getValue("preshape");

    if (!ps.empty())
    {
        preshape = ps;
    }



    cout << "Using robot from " << robot << endl;
    cout << "End effector:" << eef << ", preshape:" << preshape << endl;
    cout << "Using object from " << object << endl;



    GraspPlannerWindow rw(robot, eef, preshape, object);

    rw.main();
    sleep(3000);
    rw.quit();




    return 0;
}
