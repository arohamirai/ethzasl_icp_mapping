#include "pointmatcher_ros/get_params_from_server.h"
bool hasParam(const std::string& name)
{
	return ros::param::has(std::string("~")+name);
}
